#include <stdio.h>
int main(){
	int arr[7]={1,2,3,4,5,7};
	int sum_even = 0;
	int sum_odd = 0;
	for (int i=0;i<=6;i++){
		if (i%2==0){
			sum_even+=arr[i];
		}
		else {
			sum_odd+=arr[i];
		}
	}
	  int res = sum_odd-sum_even;
	  printf("The result is : %d",res);
	return 0;
}
