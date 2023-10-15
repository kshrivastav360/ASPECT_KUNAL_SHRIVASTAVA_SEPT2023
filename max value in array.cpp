#include <stdio.h>
int main(){
	int arr[5] = {12,21,34,45,66};
	int max = arr[0];
	for (int i=1;i<=4;i++){
		if (max<arr[i]){
			max = arr[i];
		}
	}
	 printf("The maximum value is : %d",max);
	return 0;
}
