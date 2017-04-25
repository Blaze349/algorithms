#include <stdio.h>
#include <stdlib.h>

/*
    First element is already sorted
    Compare next element with all elements in sorted list (with the first element)
    Shift elements and insert element at correct position
    
    This is also an inefficient algorithm
    
    Insert Sort works by looping through every element and checking whether or not it is smaller than every element before it.
*/

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

int main() {
    //same boilerplate as bubble sort
    int arr[100];
    printf("Current arr\n");
    for (int i = 0; i < 100; i++) {
        arr[i] = (i + 3) % 7;
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    insertSort(arr, 100);
    
    for (int j =0; j < 100; j++) {
        printf("%d ", arr[j]);
    }
    
    printf("\n\n");
}