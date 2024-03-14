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
   	int newRows;
   	printf("Enter the number of additional rows:");
   	scanf("%d",&newRows);
   	matrix=(int**)realloc(matrix,(rows+newRows)*sizeof(int*));
   	for(i=rows;i<rows+newRows;i++){
   		matrix[i]=(int*)malloc(cols*sizeof(int));
	   }
	   rows+=newRows;
   }else if (choice==2){
   	int removeRows;
   	printf("Enter the number of rows to remove:");
   	scanf("%d",&removeRows);
   	if(removeRows<=rows){
   		matrix=(int**)realloc(matrix,(rows-removeRows)*sizeof(int));
		   rows-=removeRows;	  
   }else{
   	printf("Error:cannot remove more rows than present.\n");
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
