#include<stdio.h>
int main(){
	int sum = 0;
	int i , n;
	
	printf("enter a element of arr :");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter element of arr:");
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	
	int avg = sum / n;
	
	printf("sum of arr is %d\n",sum);
	printf("avg is %d",avg);
}
