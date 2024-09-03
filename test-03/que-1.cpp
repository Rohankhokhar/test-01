#include<stdio.h>
int main(){
	int n;
	
	printf("enter a any number(enter up to 3 to infinite):");
	scanf("%d",&n);
	
	if(n<=2){
		printf("number is not prime :");
	}
		else if(n %2 == 0){
		printf("number is prime");
	}
	else{
		printf("number is not prime");
	}
	
	
}
