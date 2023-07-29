//
// Created by Dhrushil Sedani on 18/07/2023.
//

#ifndef ML_ACTIVATIONLAYER_H
#define ML_ACTIVATIONLAYER_H

#include <cmath>
#include <string>
#include "Layer.h"

class ActivationLayer : public Layer {
public:
    ActivationLayer();
    explicit ActivationLayer(int inputSize, int outputSize, std::string activationFunction);
    ~ActivationLayer() override = default;
    std::vector<std::vector<float>> forwardPropagation(std::vector<std::vector<float>>) override;

    std::vector<std::vector<float>> backPropagation(std::vector<std::vector<float>> error, float learning_rate) override;

    std::string activationFunction;

private:
    static std::vector<std::vector<float>> sigmoid(std::vector<std::vector<float>>);
};


#endif //ML_ACTIVATIONLAYER_H
