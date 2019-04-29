#include<stdio.h>

int fact(int n){
	return ((n==0)|(n==1))?1:n*fact(n-1);
}

int is_prime(int n){
	int i;
	if(n==1){
		return 0;
	}
	for(i=2;i<n;i++){
		if((n%i)==0){
			return 0;
		}
	}
	return 1;
}

void main(){
	int i,n,k;
	printf("Enter number: ");
	scanf("%d",&n);
	float y=1;
	for(i=0;i<n;i++){
		y+=(1.0*i)/fact(i);
		k=(int)y;
		if(!is_prime(k)){
			printf("%f\n",y);
		}
	}
}
