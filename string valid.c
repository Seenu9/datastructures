#include<stdio.h>
int main(){
	char str1[50],str2[50];
	printf("enter the first string:");
	scanf("%s",&str1);
	printf("enter the second string:");
	scanf("%s",&str2);
	int v=strcmp(str1,str2);
	if(v==0){
		printf("strings are equal");
	}
	else{
		printf("strings are not equal");
	}
}
