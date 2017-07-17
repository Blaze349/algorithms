#include <iostream>
using namespace std;
//This is the simplest one to think up
// Its one of the least efficient sorting algorithms


void bubbleSort(int arr[], int length) {
    bool swapped = true;
    while(swapped) {
        swapped = false;
        for (int i = 1; i < length; i++) {
            if (arr[i-1] > arr[i])  {
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        } 
    }   
}

int main(void) {
    int arr[100];
    cout << "Current arr: ";
    for (int i = 0; i < 100; i++) {
        arr[i] = (i + 3) % 7;
        cout << arr[i];
    }
    cout << endl; 
    bubbleSort(arr, 100);
    
    cout << "Sorted array: "; 
    for (int i =0; i < 100; i++) {
        cout << arr[i];
    }
    cout << endl;
    
}
