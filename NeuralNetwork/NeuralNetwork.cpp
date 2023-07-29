////
//// Created by Dhrushil Sedani on 11/07/2023.
////
//
//#include "NeuralNetwork.h"
//#include "../Matrix/matrix.h"
//#include <cmath>
//
//NeuralNetwork::NeuralNetwork() {
//
//}
//
//NeuralNetwork::NeuralNetwork(const std::vector<std::vector<float>>& input) {
//    this->input = input;
//    //initialize weights as random numbers between 0 and 1
//    for (int i = 0; i < input.size(); i++) {
//        auto temp = std::vector<float>();
//        for (int j = 0; j < input[0].size(); j++) {
//            temp.push_back(rand() % 2);
//        }
//        weights.push_back(temp);
//    }
//}
//
//std::vector<float> NeuralNetwork::forwardPropagation() {
//    input = matrix::transposeMatrix(input);
//    auto y = matrix::dotProduct(weights, input);
//    y = matrix::addMatrix(y, bias);
//    auto a = activationFunction(y);
//    return a;
//}
//
//std::vector<float> NeuralNetwork::activationFunction(std::vector<float> x) {
//    // Sigmoid
//    auto a = std::vector<float>();
//    for (int i = 0; i < x.size(); i++) {
//        a.push_back(1 / (1 + exp(-1 * x[i])));
//    }
//    return a;
//}
//
//float NeuralNetwork::lossFunction(std::vector<float> a, std::vector<float> y) {
//    // Mean Squared Error
//    float n = a.size();
//    float sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += (a[i] - y[i]) * (a[i] - y[i]);
//    }
//    return (1/n) * sum;
//}
