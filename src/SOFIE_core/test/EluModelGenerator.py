import onnx
from onnx import helper, TensorProto

# input tensor
input = helper.make_tensor_value_info('input', TensorProto.FLOAT, [4])

# output tensor
output = helper.make_tensor_value_info('output', TensorProto.FLOAT, [4])

# ELU node
node = helper.make_node(
    "Elu",
    inputs=["input"],
    outputs=["output"],
    alpha=1.0
)

# graph
graph = helper.make_graph(
    [node],
    "elu_graph",
    [input],
    [output]
)

# model
model = helper.make_model(graph)

# save model
onnx.save(model, "input_models/elu.onnx")

print("ELU ONNX model generated: input_models/elu.onnx")
