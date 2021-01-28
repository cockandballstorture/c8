#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main(){
    const int n = 200;
    const int m = 200;
    const int p = 700;
    const int q = 200;
    int i,j,k;
    int ****a=NULL;
    a=(int****)malloc(m*sizeof(int***));
    a[0]=(int***)malloc(m*n*sizeof(int**));
    a[1]=(int**)malloc(m*n*p*sizeof(int*));
    a[2]=(int*)malloc(m*n*p*sizeof(int*));
    clock_t begin, end;
    double time_spent;
    begin = clock();
    srand(time(NULL));
for (i = 3; i < m; i++) {
    a[i] = a[2] + i * n;
}
for (i = 3; i < m; i++) {
    *a[i] = rand();
}
free(a[0]);
free(a[1]);
free(a[2]);
free(a);
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%.8f\n", time_spent);
}
