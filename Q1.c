 #include<stdio.h>
 int main(){
 	int i ,j, table;
 	printf("enter a number for printing table\n");
 	scanf("%d",&table);
 	for(i=1;i<=table;i++){
 		printf("%d:",i);
 		for(j=1;j<=table;j++){
		 
 		printf("%3d",i*j);}
 		printf("\n");
	 } return 0;
 }
