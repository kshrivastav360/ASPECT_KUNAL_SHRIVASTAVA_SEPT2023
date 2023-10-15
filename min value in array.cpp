#include <stdio.h>
int main(){
	int arr[5] = {12,21,34,45,66};
	int min = arr[0];
	for (int i=1;i<=4;i++){
		if (min>arr[i]){
			min = arr[i];
		}
	}
	 printf("The minimum value is : %d",min);
	return 0;
}
