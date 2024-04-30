#include<stdio.h>
void reverseRange(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of elements in the list:");
    scanf("%d",&n);
    char type;
    int arr[n];
    printf("Enter the elements of the list in sorted order:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the range (start and end indices) to reverse:");
    int start,end;
    scanf("%d %d",&start,&end);
    if(start>=0&&start<n&&end>=0&&end<n&&start<=end){
        reverseRange(arr,start,end);
        printf("Output:");
        displayArray(arr,n);
    }else{
        printf("Invalid range.\n");
    }
    return 0;
    }

