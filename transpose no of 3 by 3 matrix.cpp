#include <stdio.h>
int main(){
	int m1[3][3],m2[3][3];
	int i,j;
	printf("Enter matrix 1 :\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			m2[j][i]=m1[i][j];
		}
	}
	     printf("Your transpose value is :\n");
			for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
		printf("%d ",m2[j][i]);
		
		}
		printf("\n");
	}
	return 0;
}
