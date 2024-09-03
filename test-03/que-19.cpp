#include<stdio.h>
int main(){
	char str[100];
	int length = 0;
	printf("enter string value :");
	fgets(str,sizeof(str),stdin);
	
	while(str[length] != 0){
		length ++;
	}
	
	printf("string lengrh is %d",length-1);
}
