#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main(){
const int m = 700;
const int n = 750;
const int h = 600;
const int q = 800;
clock_t begin, end;
double time_spent;
begin = clock();
int ****a = NULL;
int i,j,k,w,z;
int* d;
int** p;
int*** pp;
a = (int****)malloc(m * sizeof(int***) + m*n* sizeof(int**)+m*n*h*sizeof(int*)+m*n*h*q*sizeof(int));
srand(time(NULL));
p=(int**)(a+m);
d=(int*)(a+m+m*n);
pp=(int***)(a+m+m*n+m*n*h);
w=0;
z=0;
for (i = 0; i < m; i++) {
    a[i] = p + i*n;
    for (j = 0; j < n; j++) {
        a[i][j] = pp + (w++) * n*h;
        for(k=0;k<h;k++){
            a[i][j][k]=d+(z++)*n*h*q;
        }
    }
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("1: %.8f\n", time_spent);
}
