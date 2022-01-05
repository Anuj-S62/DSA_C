#include <stdio.h>
void show(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
} 
void insert(int *a,int *n,int num){
    int i=(*n)-1;
    while(num<a[i] || num==a[i]){
        if(num<=a[i]){
            a[i+1]=a[i];
            i--;  
        }
    }
    a[i+1]=num;
    (*n)++;
}
 
int main(){
    int a[100]={2,45,67,89,98};
    int n=5;
    show(a,n);
    insert(a,&n,45);
    show(a,n);
    return 0;
}