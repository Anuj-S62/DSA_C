#include <stdio.h>
#include<string.h>

void count(char str[],int n){
    char vowel[]="aeiouAEIOU";
    int a=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<=n;j++){
            if(str[j]==vowel[i]){
            a=a+1;
            }
            else{
                a=a;
            }
        }
    }
    printf("%d",a);
}


int main(){
   char str[1000];
   gets(str);
   int n=strlen(str);
   printf("%d\n",n);
   count(str,n); 
    return 0;
}