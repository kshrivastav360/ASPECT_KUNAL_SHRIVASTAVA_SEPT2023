#include <stdio.h>
int main(){
	int n,c,r,s=0,m;
	printf("ENter no :");
	scanf("%d",&n);
	c=n;
	while (n>0){
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	printf("original no is :%d\n",c);
	printf("reverse no is :%d\n",s);
	
	if (c!=s){
		m=c+s;
		printf("sum of original no and reverse no is :%d\n",m);
	}
	
	return 0;
}
