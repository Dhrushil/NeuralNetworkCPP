#include "NeuralNetwork/Network.h"
#include "NeuralNetwork/DenseLayer.h"
#include "NeuralNetwork/ActivationLayer.h"

int main() {

    Network net = Network();

    net.addLayer(new DenseLayer(1,4));
    net.addLayer(new ActivationLayer(4,5,"sigmoid"));
    net.addLayer(new DenseLayer(5,8));

    net.printLayers();

    return 0;
}
