#include<stdio.h>
int main(){
	char arr1[] = {'hello'};
	char arr2[] = {'world'};
	
	char arr3[100] = arr1 + arr2;
	
	printf("two arr in one arr %s",arr3);
}
