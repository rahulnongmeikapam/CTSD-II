#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *array,size,new_size,i;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	array=(int*)malloc(size*sizeof(int));
	printf("Enter the elements of the array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the new size of the array:");
	scanf("%d",&new_size);
	if(new_size>size)
	{
		array=(int*)realloc(array,new_size*sizeof(int));
		for(i=size;i<new_size;i++)
		{
			array[i]=0;
		}
	}
	else if(new_size<size)
	{
		array=(int*)realloc(array,new_size*sizeof(int));
	}
	printf("The new array is:");
	for(i=0;i<new_size;i++)
	{
		printf("%d",array[i]);
	}
	free(array);
	return 0;
}
