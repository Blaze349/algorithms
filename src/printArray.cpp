#include <iostream>

void printArray(int arr[]) {
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) {
        std::cout << arr[i] << ", "; 
    }
}

void printArray(char arr[]) {
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) {
        std::cout << arr[i] << ", "; 
    }
}

void printArray(double arr[]) {
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) {
        std::cout << arr[i] << ", "; 
    }
}
