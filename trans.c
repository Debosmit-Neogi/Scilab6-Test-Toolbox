#include <stdio.h>

void transpose(int A[n][m], int B[n][m]) 
{ 
    int i, j; 
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) 
            B[i][j] = A[j][i]; 
} 
