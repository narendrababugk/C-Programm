#include<stdio.h>
void main(){

    char str1[100];
    char str2[100];
    printf("Enter the String:");
    scanf("%s",str1);
    int i=0,j=0;
    for(int i=0;str1[i]!='\0';i++){
      for(int j=0;str2[j]!='\0';j++){ 
        str2[j]=str1[i];
      }
    }
    printf("\nOriginal String is:%s",str1);
    printf("\nCopied String is:%s",str2);
}
