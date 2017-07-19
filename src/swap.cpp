
void swap(int *a, int *b) {
    //get a to be equal to a + c
    *a += *b;
    //b is now equal to a
    *b = *a - *b;
    //a is now equal to first b
    *a = *a - *b;
}


