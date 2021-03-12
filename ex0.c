#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main(){
    clock_t begin, end;
    double time_spent;
    begin = clock();
    const int m = 20;
    const int n = 20;
    const int p = 70;
    const int q = 20;
    int i,j,k,w;
    int ****a;
    a=(int****)malloc(m*sizeof(int***));
    srand(time(NULL));
for (i = 0; i < n; i++) {
    a[i]=(int***)malloc(n*sizeof(int**));
    for (j=0;j<p;j++){
        a[i][j]=(int**)malloc(p*sizeof(int*));
        for (k=0;k<q;k++){
            a[i][j][k]=(int*)malloc(q*sizeof(int));
        }
    }
}
for (i = 0; i < m; i++) {
    for (j=0;j<n;j++){
        for (k=0;k<p;k++){
        	for (w=0;w<q;w++){
        	            a[i][j][k][w]=rand();
        	     }
        }
    }
}
for (i = 0; i < n; i++) {
    free(a[i]);
    for (j=0;j<m;j++){
        free(a[i][j]);
        for (k=0;k<p;k++){
            free(a[i][j][k]);
        }
    }
}
free(a);
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%.8f\n", time_spent);
}
