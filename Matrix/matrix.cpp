//
// Created by Dhrushil Sedani on 09/07/2023.
//

#include "matrix.h"


std::vector<std::vector<float>> matrix::transposeMatrix(std::vector<std::vector<float>> m1) {

    auto transpose = std::vector<std::vector<float>>();

    for (int i = 0; i < m1[0].size(); i++) {
        auto temp = std::vector<float>();
        for (int j = 0; j < m1.size(); j++) {
            temp.push_back(m1[j][i]);
        }
        transpose.push_back(temp);
    }

    return transpose;
}

std::vector<std::vector<float>> matrix::dotProduct(std::vector<std::vector<float>> m1, std::vector<std::vector<float>> m2) {
    auto dotProduct = std::vector<std::vector<float>>();

    for (int i = 0; i < m1.size(); i++) {
        auto temp = std::vector<float>();
        for (int k = 0; k < m1.size(); i++) {
            float sum = 0;
            for (int j = 0; j < m1[k].size(); j++) {
                sum += m1[k][j] * m2[k][j];
            }
            temp.push_back(sum);
        }
        dotProduct.push_back(temp);
    }

    return dotProduct;
}

std::vector<float> matrix::addMatrix(std::vector<float> m1, std::vector<float> m2) {
    auto addMatrix = std::vector<float>();

    for (int i = 0; i < m1.size(); i++) {
        addMatrix.push_back(m1[i] + m2[i]);
    }

    return addMatrix;
}

void matrix::printMatrix(std::vector<std::vector<float>> m1) {
        std::cout << "[ ";
        for (int i = 0; i < m1.size(); i++) {
            std::cout << "[ ";
            for (int j = 0; j < m1[0].size(); j++) {
                std::cout << m1[i][j] << " ";
            }

            if (i != m1.size() - 1) {
                std::cout << "], ";
            } else {
                std::cout << "] ";
            }
        }
        std::cout << "]" << std::endl;
}
