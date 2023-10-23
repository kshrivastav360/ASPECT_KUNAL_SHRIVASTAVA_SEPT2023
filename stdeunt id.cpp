#include <stdio.h>

struct student {
	int rollno;
	char sname[50];
	int smarks[5];
};
int main(){
	int total=0,i;
	float avg;
	struct student s;
	printf("\nEnter your roll no : ");
	scanf("%d",&s.rollno);
	printf("\nEnter student name : ");
	scanf("%s",s.sname);
	printf("\nEnter five subject marks : ");
	for(i=0;i<5;i++){
		scanf("%d",&s.smarks[i]);
		total=total+s.smarks[i];
	}
	
	
	avg=(float)total/5;
	printf("\ntotal marks is : %d",total);
	printf("\nAverage is : %2f",avg);
}
