#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void main() {
    int result = add(1, 2);
    result = add(result, 3);
    printf("%d\n", result);
}