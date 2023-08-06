#include<stdio.h>
int main(){
	int n=5;
	printf("%d",fact(n));
	
}
int fact(int n){
		if(n==1||n==0)
		return 1;
	int call=fact(n-1);
	int res=n*fact(n-1);
	return res;
		
}
