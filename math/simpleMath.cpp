long factorialOf(int num) {
    if (num < 1) return 0;
    if (num == 1 || num == 0) return 1;
    else return num * factorialOf(num-1);
}
