#include <stdio.h>
void prtarr(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
} 
void bubble_sort(int *a,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int a[]={34,56,5,9,78,65,9,45};
    int n=sizeof(a)/sizeof(a[0]);
    prtarr(a,n);
    bubble_sort(a,n);
    prtarr(a,n);
    return 0;
}