#include<stdio.h>
int main(){
    char mail[100];
    scanf("%s",mail);
    int i,p1,p2;
    p1=p2=0;
    
    for(i=0;mail[i]!='\0';i++){
        if(mail[i]=='@')
          p1=i;
        if(mail[i]=='.')  
          p2=i;
    }
    if(p1>3 && (p2-p1)>3){
        printf("Valid");
        printf("\n");
    }
    else {
        printf("Invalid");
    }
}