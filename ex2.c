#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main(){
    const int n = 10000;
    const int m = 20000;
    const int p = 10000;
    const int q = 20000;
    clock_t begin, end;
    double time_spent;
    begin = clock();
    int* a;
    srand(time(NULL));
    a = (int*)malloc(n*m*p*q*sizeof(int));
    for(int i = 0; i < n; i++){
        a[i]=rand();
    }
    free(a);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("N+1: %.8f\n", time_spent);
}
