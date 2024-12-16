#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 4;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 23;
    ptr[1] = 34;

    printf("%d %d\n", ptr[0], ptr[1]);

    n = 6;
    ptr = (int*) realloc(ptr, n * sizeof(int));
    printf("%d %d", ptr[0], ptr[1]);

    return 0;
}