#include<stdio.h>
int main(){
	int mat1[2]={1,2} ;
	int mat2[2]={2,1} ;
	int mat[2][2] = {0};
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			int mat[i][j] = mat1[i]*mat2[j];
		}
	}
	
	printf("result :\n);
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("matrix:%d",mat[i][j]);
		}
	}
	
}
