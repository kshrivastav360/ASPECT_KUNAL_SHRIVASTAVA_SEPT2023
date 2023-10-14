#include <stdio.h>
int main(){
	int arr[11] = {2,17,23,34,56,61,69,78,84,91,98};
	int low = 0;
	int high = 10;
	int key;
	
	printf("Enter the search no = ");
	scanf("%d",&key);
	
	while (low<=high){
		int mid = (low+high)/2;
		
		if (key<arr[mid]){
			high = mid - 1;
		}
		else if (key>arr[mid]){
			low = mid + 1;
		}
		else if (key==arr[mid]){
			printf("Found the location : %d\n",mid);
		
			
			
			if (arr[mid]%2==0){
				printf("Even no");
			}
			else {
				printf("Odd no");
			}
			 break;
		}
	}
	return 0;
}
