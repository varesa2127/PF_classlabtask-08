#include<stdio.h>
 int main(){
 	int matrix [3][3]={{12,34,50},{72,4,6},{90,67,12}};
 	int i,j;
 	int highest=matrix[0][0];
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			if(matrix[i][j]>highest){
 				highest=matrix[i][j];
			 }
		 }
	 }
	 printf("highest element:%d",highest);
	 return 0;}
