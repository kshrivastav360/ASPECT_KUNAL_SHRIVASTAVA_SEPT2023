#include <stdio.h>
int main(){
	int m1[2][2],m2[2][2];
	int i,j;
	printf("Enter the element of matrix :\n");
	
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("You entered :\n");
		for (i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("%d ",m1[i][j]);
			}
			
		}
			for (i=0;i<2;i++){
					for(j=0;j<2;j++){
						m2[i][j]=m1[i][j]*m1[i][j]*m1[i][j];
						
				}
					
			}
			printf("cubed matrix :\n");
			for (i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("%d ",m2[i][j]);
				}
				printf("\n");
			}
			
	
	return 0;
}
