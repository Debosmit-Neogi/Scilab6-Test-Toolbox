#include <stdio.h>
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	 int A[n][m] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
  
    int B[n][m], i, j; 
  
    transpose(A, B); 
  
    // printf("Result matrix is \n"); 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < m; j++) 
           printf("%d ", B[i][j]); 
        printf("\n"); 
    } 
  
    return 0; 

}
