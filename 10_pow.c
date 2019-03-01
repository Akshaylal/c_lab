#include<stdio.h>
double pows(double x,int n){
	if(n==0){
		return 1;
	}else{
		return x*pows(x,n-1);
	}
}

void main(){
	int x,n;
	printf("Enter x and y:");
	scanf("%d%d",&x,&n);
	printf("%f\n",pows(x,n));
}
