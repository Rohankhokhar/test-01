#include<stdio.h>
int main(){
	int i , n;
	
	printf("enter a value of arr :");
	scanf("%d",&n);
	
	int arr[i];
	
	printf("enter a elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int slargest = arr[0];
	
	for(i=0;i<n;i++){
		if(slargest<arr[i]){
			slargest = arr[i-1];
		}
		
	}
	
	printf("second largest element of arr:%d",slargest);
	
}
