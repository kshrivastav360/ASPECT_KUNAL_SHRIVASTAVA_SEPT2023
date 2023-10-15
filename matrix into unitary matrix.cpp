#include <stdio.h>

int main(){
    int m1[3][3];
    int i,j;
    
    printf("Enter matrix 1 :\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m1[i][j]);
        }
    }
     
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (i==j){
                m1[i][j]=1;
            }
            else {
                m1[i][j]=0;
            }
        }
}
        
		printf("Your matrix is :\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d ",m1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        return 0;
    }
   
 
