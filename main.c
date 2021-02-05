#include <stdio.h>

int main(){
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b[n][m]={0};
	transpose(a[n][m],b[n][m]);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",&b[i][j]);
		}
		printf("\n");
	}

}
