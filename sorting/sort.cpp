#include <iostream>

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

void insertSort(int arr[], int length) {
    
    int insertVal;
    int insertPos;
    
    for (int j = 1; j <= length; j++) {
        insertVal = arr[j];
        insertPos = j - 1;
        
        
        //We want to check if the insert position is less than the value
        while (j > 0 && arr[insertPos] > insertVal) {
           //if so then shift the value to the right
           arr[insertPos + 1] = arr[insertPos];
           insertPos--;
           
        }
        //then we insert the val
        arr[insertPos + 1] = insertVal;
    }
}

