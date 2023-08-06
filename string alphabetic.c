#include<stdio.h>
int main(){
	char str[100];
	int i,j;
	char temp;
	printf("enter the string:");
	scanf("%s",str);
	int n=strlen(str);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(str[i]>str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("%s",str);
}
