#include <stdio.h>
int main(){
	int m1[2][2],m2[2][2],m3[2][2];
	int i,j;
	printf("Enter the matrix 1 :\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter matrix 2 : \n");
	
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	
		for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
			for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
