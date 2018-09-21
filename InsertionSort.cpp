#include <vector>
#include <utility>
#include <functional>
#include <iostream>

#include "PrintHelpers.hpp"

template <typename T>
void insertionSort(std::vector<T>& a) {
    if (!a.empty()) {
        for (size_t boundary = 0; boundary < a.size() - 1; boundary++) {
            auto copy = a[boundary + 1];
            for (size_t i = boundary + 1; i > 0; --i) {
                if (copy >= a[i-1])
                    break;
                std::swap(a[i], a[i-1]);
            }
        } 
    }
}

int main(int argc, char const *argv[])
{
    std::vector<int> a({3,4,2,1,6,9,1,0,-4,16,3,7,12,8,15});
    std::cout << "input vector ";
    printLinearContainer(a);
    insertionSort(a);
    std::cout << "result: ";
    printLinearContainer(a);

    return 0;
}
