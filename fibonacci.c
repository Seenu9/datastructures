#include<stdio.h>
int main(){
	int a=0,b=1,i,n=10;
	printf("%d,%d,",a,b);
	for(i=2;i<n;i++){
		int temp=a+b;
		printf("%d,",temp);
		a=b;
		b=temp;		
	}
}
