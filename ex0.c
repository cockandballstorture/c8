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
    int ****a;
    a=(int****)malloc(m*sizeof(int***));
    clock_t begin, end;
    double time_spent;
    begin = clock();
    srand(time(NULL));
for (i = 0; i < n; i++) {
    a[i]=(int***)malloc(n*sizeof(int**));
    for (j=0;j<p;j++){
        a[i][j]=(int**)malloc(p*sizeof(int*));
        for (k=0;k<q;k++){
            a[i][j][k]=(int*)malloc(q*sizeof(int));
            *a[i][j][k]=rand();
        }
    }
}
for (i = 0; i < n; i++) {
    for (j=0;j<p;j++){
        for (k=0;k<q;k++){
            free(a[i][j][k]);
        }
    }
}
free(a);
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%.8f\n", time_spent);
}
