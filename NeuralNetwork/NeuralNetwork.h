////
//// Created by Dhrushil Sedani on 11/07/2023.
////
//
//#ifndef ML_NEURALNETWORK_H
//#define ML_NEURALNETWORK_H
//#include <vector>
//#include <iostream>
//#include "Layer.h"
//
//class NeuralNetwork{
//public:
//    NeuralNetwork();
//    explicit NeuralNetwork(const std::vector<std::vector<float>>& input);
//    ~NeuralNetwork();
//
//    void addLayer();
//
//    void train();
//    void test();
//    void predict();
//
//private:
//    std::vector<float> forwardPropagation();
//    static std::vector<float> activationFunction(std::vector<float>);
//    void backPropagation();
//    void updateWeights();
//
//    std::vector<std::vector<float>> weights;
//    std::vector<float> bias;
//    std::vector<std::vector<float>> input;
//
//    static float lossFunction(std::vector<float> a, std::vector<float> y);
//};
//
//
//#endif //ML_NEURALNETWORK_H
