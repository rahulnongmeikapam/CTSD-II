#include <stdio.h>
#include<stdlib.h>
int main(){
	int **matrix,rows,cols,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of columns:");
	scanf("%d",&cols);
	matrix=(int**)malloc(rows*sizeof(int*));
	for(i=0;i<rows;i++){
		matrix[i]=(int*)malloc(cols*sizeof(int));
	}
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<rows;i++){
	 for(j=0;j<cols;j++){
	     printf("%d\t",matrix[i][j]);
		scanf("%d",&matrix[i][j]);
	}
}
   printf("Original Matrix:\n");
   for(i=0;i<rows;i++){
   	for(j=0;j<cols;j++){
   		printf("%d\t",matrix[i][j]);
	   }
	   printf("\n");
   }
   int choice;
   printf("\n Enter 1 to increase the number of subarrays 2 to decrease:");
   scanf("%d",&choice);
   if(choice==1){
   	int newCols;
   	printf("Enter the number of additional columns:");
   	scanf("%d",&newCols);
   	matrix=(int**)realloc(matrix,(cols+newCols)*sizeof(int*));
   	for(i=cols;i<cols+newCols;i++){
   		matrix[i]=(int*)malloc(rows*sizeof(int));
	   }
	   cols+=newCols;
   }else if (choice==2){
   	int removeCols;
   	printf("Enter the number of columns to remove:");
   	scanf("%d",&removeCols);
   	if(removeCols<=cols){
   		matrix=(int**)realloc(matrix,(cols-removeCols)*sizeof(int));
		   rows-=removeCols;	  
   }else{
   	printf("Error:cannot remove more columns than present.\n");
   }
}else{
	printf("Invalid choice.\n");
}
  printf("\n Modified Matrix:\n");
  for(i=0;i<rows;i++){
  	for(j=0;j<cols;j++){
  		printf("%d\t",matrix[i][j]);
	  }
	  printf("\n");
  }
   for(i=0;i<rows;i++){
   	free(matrix[i]);
   }
    free(matrix);
    return 0;
}
