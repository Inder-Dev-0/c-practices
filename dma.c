#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 4;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 23;
    ptr[1] = 34;

    printf("%d %d", ptr[0], ptr[1]);
    return 0;
}