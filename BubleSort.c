#include<stdio.h>
void main(){
    int n,temp;
    int i,j,arr[20];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter the elements for the day:\n");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After bubble sort the array is:");
    for(i=0;i<n;i++){
      printf("%d",arr[i]);
    }

}