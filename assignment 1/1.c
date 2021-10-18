#include<stdio.h>
#include<string.h>
int main(){
    char num[10];
    int i;
    scanf("%s",num);
    int l=strlen(num);
    
    while(num[i++]!='\0'){
        if(num[i]=='.'){
            if(l==i+1){
                printf("Invalid\n");
                
            }
            else if(l>i+1){
                printf("Valid\n");
                break;
            }
            
        }
    }
        