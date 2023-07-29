//
// Created by Dhrushil Sedani on 18/07/2023.
//

#include "DenseLayer.h"

std::vector<std::vector<float>> DenseLayer::forwardPropagation(std::vector<std::vector<float>> input_data) {
    input = matrix::transposeMatrix(input_data);
    output = matrix::dotProduct(weights, input);
    return output;
}

std::vector<std::vector<float>> DenseLayer::backPropagation(std::vector<std::vector<float>> error, float learning_rate) {
    auto input_error = matrix::dotProduct(error, matrix::transposeMatrix(weights));
    auto weights_error = matrix::dotProduct(matrix::transposeMatrix(input), error);

    // Update weights and bias
    for(int i = 0; i < weights.size(); i++) {
        for(int j = 0; j < weights[i].size(); j++) {
            weights[i][j] -= learning_rate * weights_error[i][j];
        }
    }

    for(int i = 0; i < bias.size(); i++) {
        for(int j = 0; j < bias[i].size(); j++) {
            bias[i][j] -= learning_rate * error[i][j];
        }
    }

    return input_error;
}

DenseLayer::DenseLayer() = default;

DenseLayer::DenseLayer(int inputSize, int outputSize) {
    input = std::vector<std::vector<float>>();

    for (int i = 0; i < inputSize; i++) {
        std::vector<float> zeros(inputSize, 0);
        input.push_back(zeros);
    }

    weights = std::vector<std::vector<float>>();
    bias = std::vector<std::vector<float>>();

    for (int i = 0; i < inputSize; i++) {
        auto temp = std::vector<float>();
        for (int j = 0; j < outputSize; j++) {
            auto random = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            temp.push_back(random);
        }
        weights.push_back(temp);
    }

    for (int i = 0; i < 1; i++) {
        auto temp = std::vector<float>();
        for (int j = 0; j < outputSize; j++) {
            auto random = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            temp.push_back(random);
        }
        bias.push_back(temp);
    }
}
