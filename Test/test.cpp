//
// Created by Dhrushil Sedani on 23/07/2023.
//

#include "test.h"
#include <boost/test/unit_test.hpp>

// The function you want to test
int add(int a, int b) {
    return a + b;
}

// A test case using the BOOST_AUTO_TEST_CASE macro
BOOST_AUTO_TEST_CASE(test_addition) {
    int result = add(2, 3);
    BOOST_TEST(result == 5);
}

// Another test case with a custom name using the BOOST_AUTO_TEST_CASE
BOOST_AUTO_TEST_CASE(test_subtraction) {
    int result = add(10, -5);
    BOOST_TEST(result == 5);
}

// A test suite with fixtures using the BOOST_FIXTURE_TEST_SUITE macro
struct MyFixture {
    MyFixture() {
        // Initialization code, runs before each test case in this suite
    }

    ~MyFixture() {
        // Cleanup code, runs after each test case in this suite
    }

    int multiply(int a, int b) {
        return a * b;
    }
};

BOOST_FIXTURE_TEST_SUITE(test_suite_with_fixture, MyFixture)

    BOOST_AUTO_TEST_CASE(test_multiplication) {
        int result = multiply(3, 4);
        BOOST_TEST(result == 12);
    }

    BOOST_AUTO_TEST_CASE(test_division) {
        int result = multiply(24, 2);
        BOOST_TEST(result == 48);
    }

BOOST_AUTO_TEST_SUITE_END()
