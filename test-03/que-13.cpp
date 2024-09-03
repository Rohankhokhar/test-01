#include<stdio.h>
int main(){
	int n1 , n2 ,res ;
	char choice;
	
	printf("enter a value of num1:");
	scanf("%d",&n1);
	
	printf("enter a value of num2:");
	scanf("%d",&n2);
	
	printf("enter a choice to (+,-,*,/):");
	scanf(" %c",&choice);
	
	switch(choice){
		case '+':
			printf("your option is addition:");
			res = n1 + n2;
		break;	
		case '-':
			printf("your option is sub:");
			res = n1 - n2;
		break;	
		case '*':
			printf("your option is mul:");
			res = n1 * n2;
		break;	
		case '/':
			printf("your option is div:");
			res = n1 / n2;
		break;	
	}
	printf("\n result is %d",res);
}
