#include "SOFIE/RModelParser_ONNX.hxx"
#include <gtest/gtest.h>
#include <iostream>

TEST(SOFIE_ELU_OPERATOR, ParseModel) {

    std::string modelPath =
        "src/SOFIE_core/test/input_models/Elu.onnx";

    SOFIE::RModelParser_ONNX parser;

    EXPECT_NO_THROW({
        auto model = parser.Parse(modelPath, true);
    });

}
