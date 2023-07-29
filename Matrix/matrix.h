//
// Created by Dhrushil Sedani on 09/07/2023.
//

#ifndef ML_MATRIX_H
#define ML_MATRIX_H
#include <vector>
#include <iostream>

namespace matrix {
    std::vector<std::vector<float>> transposeMatrix(std::vector<std::vector<float>> m1);

    std::vector<std::vector<float>> dotProduct(std::vector<std::vector<float>> m1, std::vector<std::vector<float>> m2);

    std::vector<float> addMatrix(std::vector<float> m1, std::vector<float> m2);

    void printMatrix(std::vector<std::vector<float>> m1);
}

#endif //ML_MATRIX_H
