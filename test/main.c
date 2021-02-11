#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	 int A[n][m];
	for(int i=0;i<n;i++){

                for(int j=0;j<m;j++){

                        scanf("%d",&A[i][j]);

}
}


  
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
