#include<stdio.h>
  void plaindrom(char *str){
  	char *left ; char *right;char length =0;
  	
    left = str;
  	right = str + length -1;
  	
  	while(left < right){
  		if(str[left] == str[right]){
  			printf("string is palindrom");
		  }
		else{
		printf("string is not palindrom");
		}
	  }
  }
int main(){
	char str[100];
	
	printf("enter a value of str:");
	fgets(str,sizeof(str),stdin);
	
	plaindrom(str);
	
	
}
