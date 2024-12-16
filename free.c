#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 4;
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));
    ptr[0] = 23;
    ptr[1] = 34;

    printf("%d %d", ptr[0], ptr[1]);
    free(ptr);
    return 0;
}