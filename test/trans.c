#include <stdio.h>
#include <stdlib.h>
#define n 4
#define m 4

void transpose(int A[n][m], int B[n][m]) 
{ 
    int i, j; 
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) 
            B[i][j] = A[j][i]; 
} 
