//
// Created by Dhrushil Sedani on 18/07/2023.
//

#ifndef ML_LAYER_H
#define ML_LAYER_H


#include <vector>
#include <string>

class Layer {
public:
    Layer()
    {

    };
    virtual ~Layer() = default;
    virtual std::vector<std::vector<float>> forwardPropagation(std::vector<std::vector<float>>) = 0;
    virtual std::vector<std::vector<float>> backPropagation(std::vector<std::vector<float>> error, float learning_rate) = 0;

    std::vector<std::vector<float>> input;
    std::vector<std::vector<float>> output;
};


#endif //ML_LAYER_H
