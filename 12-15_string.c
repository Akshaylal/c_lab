#include<stdio.h>
#include<string.h>

void con(char s1[40],char s2[20]){
	strcat(s1,s2);
	printf("The concatenated string is : %s\n",s1);
}

void comp(char s1[20],char s2[]){
	int y=strcmp(s1,s2);
	if(y<0){
		printf("%s<%s\n",s1,s2);
	}else if(y>0){
		printf("%s>%s\n",s1,s2);
	}else{
		printf("both are equal\n");
	}
}



void main(){
	int opt;
	char s1[20],s2[20];
	printf("Enter the two strings:\n");
	scanf("%s%s",s1,s2);
	printf("%s\n%s\n",s1,s2);
}
