#pragma once

#include <iostream>

template <typename T>
void printLinearContainer(const T& container) {
    for (const auto& el: container) {
        std::cout << ", " << el;
    }
    std::cout << std::endl;
}