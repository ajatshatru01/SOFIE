import torch
import torch.nn as nn

class Model(nn.Module):
    def __init__(self):
        super().__init__()
        self.bn = nn.BatchNorm2d(3)

    def forward(self,x):
        return self.bn(x)

model = Model()

dummy = torch.randn(1,3,5,5)

torch.onnx.export(model,dummy,"BatchNorm.onnx")
print("ONNX model saved: BatchNorm.onnx")
