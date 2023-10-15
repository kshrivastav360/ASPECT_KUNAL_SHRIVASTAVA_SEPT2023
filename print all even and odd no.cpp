#include <stdio.h>
int main(){
	int arr[7]={12,15,22,35,34,79,86};
	int sum_even = 0, sum_odd = 0;

	for (int i=0;i<=6;i++){
		if (arr[i]%2==0){
			 sum_even+=arr[i];
		}
		 else {
		 	sum_odd+=arr[i];
		 }

	}
	 printf ("The even no is : %d\n",sum_even);
	 printf ("The odd no is : %d",sum_odd);
		
		return 0;	 
	
	}
	

	


