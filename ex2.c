#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main(){
    const int n = 100;
    const int m = 200;
    const int p = 100;
    const int q = 200;
    clock_t begin, end;
    double time_spent;
    begin = clock();
    int* a;
    srand(time(NULL));
    a = (int*)malloc(n*m*p*q*sizeof(int));
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
    		for(int k = 0; k< p; k++){
    			for(int w = 0; w < q; w++){
    				a[i*m*p*q+j*p*q+k*q+w]=rand();
    			}
    		}
    	}
    }
    free(a);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("N+1: %.8f\n", time_spent);
}

