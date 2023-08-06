#include<stdio.h>
int main(){
	int fact=1,n=5,i;
	for(i=1;i<=n;i++){
		fact=fact*i;		
	}
	printf("%d",fact);
}
