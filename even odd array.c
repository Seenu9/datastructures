#include<stdio.h>
int main(){
	int i,j;
	int arr[10]={2,4,5,78,1,2,5,4,6};
	printf("even numbers:");
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			printf("\n%d",arr[i]);
		}
	}
	printf("\nodd numbers:");
	for(j=0;j<10;j++){
		if(arr[j]%2==1){
			printf("\n%d",arr[j]);
		}
	}
}
