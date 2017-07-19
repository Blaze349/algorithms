#include <math.h>

//This search is efficent. It is O(log n) 
//This means that the function is a constant times how many times a number can be divided by 2.
//It is also more lines of code than lsearch. It shows the line number is not a good indicator of efficiency.


int bsearch(int min, int max, int array[], int val) {
    if (max > min) return -1;
    
    int mid = floor((max + min) / 2);
    if (array[mid] == val) return mid;
    if (array[mid] < val) return bsearch(mid+1, max, array, val);
    else return bsearch(min, mid+1, array, val);
}

// This search is inefficient. It is O(n)
int lsearch(int array[], int val) {
    for (int i=0; i < sizeof(array) / sizeof(array[0]); i++) {
        if (array[i] == val) return i;
    }
    return -1;
}

