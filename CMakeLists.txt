cmake_minimum_required(VERSION 3.25)
project(ML)

set(CMAKE_CXX_STANDARD 20)

# Find the Boost library and the required component (unit_test_framework)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# Add the include directories for the main code and tests
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${Boost_INCLUDE_DIRS})

# Add your main executable
add_executable(ML
        main.cpp
        Matrix/matrix.cpp Matrix/matrix.h
        NeuralNetwork/NeuralNetwork.cpp NeuralNetwork/NeuralNetwork.h
        NeuralNetwork/Layer.cpp NeuralNetwork/Layer.h
        NeuralNetwork/DenseLayer.cpp NeuralNetwork/DenseLayer.h
        NeuralNetwork/ActivationLayer.cpp NeuralNetwork/ActivationLayer.h
        NeuralNetwork/Network.cpp NeuralNetwork/Network.h
        )

# Add the test executable
add_executable(UnitTests Test/test.cpp)

# Link the main executable with the Boost libraries if needed
target_link_libraries(ML PRIVATE ${Boost_LIBRARIES})

# Link the test executable with the Boost Test library and the main executable
target_link_libraries(UnitTests PRIVATE ${Boost_LIBRARIES} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
