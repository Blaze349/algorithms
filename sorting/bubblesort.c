#include <stdio.h>
#include <stdlib.h>

//This is the simplest one to think up
// Its one of the least efficient sorting algorithms


void bubbleSort(int arr[], int length) {

    printf("Sorting....\n");
    
    for (int i = 0; i < length; i++) {
        
        for (int j = 0; j < length; j++) {
            
            
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
       
    }
    
    
}

int main(void) {
    int arr[100];
    printf("Current arr\n");
    for (int i = 0; i < 100; i++) {
        arr[i] = (i + 3) % 7;
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    bubbleSort(arr, 100);
    
    for (int j =0; j < 100; j++) {
        printf("%d ", arr[j]);
    }
    
    printf("\n\n");
}