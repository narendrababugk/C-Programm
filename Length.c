#include<stdio.h>
void main(){

    char str[100];
    printf("Enter the String:");
    scanf("%s",str);
    int i=0,count=0;
    while(str[i]!='\0'){
        i++;
        count++;
    }
    printf("\nString length is :%d",count);
    
}
