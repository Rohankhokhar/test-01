#include<stdio.h>
 void reverse(char* str){
 	char temp ,*start,*end;
 	char length = 0;
 	
 	while(str[length] != '\0'){
 		length++;
	}
	end--;
	
	start = str;
	end = str + length -1;
	
	while(start < end){
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
	return ;
 }
int main(){
	
	char str[100];
	
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	
	reverse(str);
	
	printf("reverse string is %s",str);
	
}
