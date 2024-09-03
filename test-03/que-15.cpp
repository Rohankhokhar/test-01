#include<stdio.h>
int main(){
	int i , j , row , col , matrix[row][col];
	int smallest =matrix[0][0];
	int largest =matrix[0][0];
	
	printf("enter a how many rows in matrix:");
	scanf("%d",&row);
	
	printf("enter a how many colums in matrix:");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(matrix[i][j] > largest){
				largest = matrix[i][j];
			}
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(matrix[i][j] < smallest){
				smallest = matrix[i][j];
			}
		}
	}
	
	printf("largest element of matrix is :%d",largest);
	printf("smallest element of matrix is :%g",smallest);
	
	
}
