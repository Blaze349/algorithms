#include <iostream>

template <typename T> 
void printArray(T arr[]) {
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) {
        std::cout << arr[i] << ", "; 
    } 
}
