#include<stdio.h>
int main(){
	int n=5,i;
	for(i=0;i<n;i++){
	printf("%d\t",fib(i));
}
}
int fib(long n){
	if(n==1)
	return 1;
	
	if(n==0)
	return 0;
	int res=fib(n-1)+fib(n-2);
	return res;
	
}
