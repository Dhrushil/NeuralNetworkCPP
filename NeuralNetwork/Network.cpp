//
// Created by Dhrushil Sedani on 18/07/2023.
//

#include <cmath>
#include "Network.h"
#include "DenseLayer.h"

void Network::addLayer(Layer * layer) {
    layers.push_back(layer);
}

Network::Network() {
    layers = std::vector<Layer*>();
}

void Network::printLayers() {
    for (auto & layer : layers) {
        std::cout << layer->input.size() << std::endl;
    }
}

float Network::lossFunction(std::vector<std::vector<float>> trueValue,
                           std::vector<std::vector<float>> predictedValue) {
    if (lossFunctionType == "mean_squared_error") {
        float loss = 0;
        for (int i = 0; i < trueValue.size(); i++) {
            for (int j = 0; j < trueValue[i].size(); j++) {
                loss += pow(trueValue[i][j] - predictedValue[i][j], 2);
            }
        }
        return loss / (trueValue.size() * trueValue[0].size());
    } else if (lossFunctionType == "mean_squared_error_prime") {
        float loss = 0;
        for (int i = 0; i < trueValue.size(); i++) {
            for (int j = 0; j < trueValue[i].size(); j++) {
                loss += (2 * (trueValue[i][j] - predictedValue[i][j]));
            }
        }
        return loss / (trueValue.size() * trueValue[0].size());
    } else {
        return -1.0f;
    }
}

void Network::fit(std::vector<std::vector<float>> input, std::vector<std::vector<float>> output, int epochs) {

}
