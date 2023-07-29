//
// Created by Dhrushil Sedani on 18/07/2023.
//

#ifndef ML_NETWORK_H
#define ML_NETWORK_H

#include <vector>
#include <iostream>
#include "Layer.h"

class Network {
public:
    Network();
    ~Network() = default;
    void addLayer(Layer*);

    float lossFunction(std::vector<std::vector<float>> trueValue, std::vector<std::vector<float>> predictedValue);

    void fit(std::vector<std::vector<float>> input, std::vector<std::vector<float>> output, int epochs);

    std::vector<Layer*> layers;

    std::string lossFunctionType {"mean_squared_error"};

    void printLayers();
};


#endif //ML_NETWORK_H
