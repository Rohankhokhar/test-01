#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int count1 =0;
	int count2 =0;
	
	printf("enter a string :");
	scanf(" %s",&str);
	
	if(str == "a" ||str == "A" && str == "e" ||str == "E" &&str == "i" ||str == "I" && str == "o" ||str == "O" &&str == "u" ||str == "U" ){
		 count1++;
	
	}
	else{
		 count2=0;
	}
	
    printf("string in count of vowel :%d",count1);	
}
