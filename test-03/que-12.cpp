#include<stdio.h>

int factorial(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n,n2;
	int fact = 1;
	
	printf("enter a num :");
	scanf("%d",&n);
	
	printf("recurcive factorial is :%d",factorial(n));
	
	printf("enter a num2 :");
	scanf("%d",&n2);
	
	for(int i=0;i<n2;i++){
		fact = fact * n2;
	}
	
	printf("intrective factorial is %d",fact);
}
