#include<stdio.h>
void fib(unsigned long int f,unsigned long int s,unsigned long int n){
	unsigned long int t;
	if(n!=0){
		t=f+s;
		printf("\t%lu",t);
		fib(s,t,n-1);
	}
}

void main(){
	unsigned long int n;
	printf("Enter limit:");
	scanf("%lu",&n);
	printf("0\t1");
	fib(0,1,n-2);
	printf("\n");
}
