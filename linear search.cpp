#include <stdio.h>
int main(){
	int arr[6]={10,20,30,40,50,60};
	int key ;
	int found = 0;
	
	printf("Enter the search no :");
	scanf("%d",&key);
	
	for(int i=0;i<=6;i++){
		if (key==arr[i]){
			printf("Found the location of %d is : %d\n",key,i);
			found=1;
			break;
		}
	}
	    if (!found){
	    	printf("Not found");
		}
	
	
	return 0;
}
