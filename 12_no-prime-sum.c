#include<stdio.h>

int fact(int n){
	return ((n==0)|(n==1))?1:n*fact(n-1);
}

int is_prime(int n){
	int i;
	for(i=n-1;i>1;i--){
		if((n%i)==0){
			return 0;
		}
	}
	return 1;
}

void main(){
	int i,n;
	printf("Enter number: ");
	scanf("%d",&n);
	float y=2;
	for(i=2;i<n;i++){
		if(!is_prime(i)){
			y+=(1.0*i)/fact(i);
		}
	}
	printf("%f\n",y);
}
