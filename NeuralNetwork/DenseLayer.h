//
// Created by Dhrushil Sedani on 18/07/2023.
//

#ifndef ML_DENSELAYER_H
#define ML_DENSELAYER_H

#include "../Matrix/matrix.h"
#include "Layer.h"

class DenseLayer : public Layer{
public:
    DenseLayer();
    DenseLayer(int inputSize, int outputSize);
    ~DenseLayer() override = default;
    std::vector<std::vector<float>> forwardPropagation(std::vector<std::vector<float>>) override;

    std::vector<std::vector<float>> backPropagation(std::vector<std::vector<float>> error, float learning_rate) override;

    std::vector<std::vector<float>> weights;
    std::vector<std::vector<float>> bias;

    std::string name{"DenseLayer"};


};


#endif //ML_DENSELAYER_H
