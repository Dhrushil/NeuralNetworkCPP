//
// Created by Dhrushil Sedani on 18/07/2023.
//

#include "ActivationLayer.h"

#include <utility>

std::vector<std::vector<float>> ActivationLayer::forwardPropagation(std::vector<std::vector<float>> input_data) {
    input = input_data;
    output = sigmoid(input_data);
    return output;
}

std::vector<std::vector<float>> ActivationLayer::backPropagation(std::vector<std::vector<float>> error, float learning_rate) {
    return std::vector<std::vector<float>>();
}

std::vector<std::vector<float>> ActivationLayer::sigmoid(std::vector<std::vector<float>> input_data) {
    auto a = std::vector<std::vector<float>>();

    for (int i = 0; i < input_data.size(); i++) {
        auto temp = std::vector<float>();
        for (int j = 0; j < input_data[i].size(); j++) {
            temp.push_back(1 / (1 + exp(-input_data[i][j])));
        }
        a.push_back(temp);
    }

    return a;
}

ActivationLayer::ActivationLayer() = default;

ActivationLayer::ActivationLayer(int inputSize, int outputSize,std::string activationFunction) : activationFunction(std::move(activationFunction)) {
    input = std::vector<std::vector<float>>();

    for (int i = 0; i < inputSize; i++) {
        std::vector<float> zeros(inputSize, 0);
        input.push_back(zeros);
    }
}

