#include <stdio.h>
void show(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int minidx(int* a,int n,int j){
    int minidx=j;
    for(j;j<n-1;j++){
        if(a[minidx]>a[j+1]){
            minidx=j+1;
        }
    }
    return minidx;
}
void sort(int *a,int n){
    int low=0;
    int high=n-1;
    int j=0;
    int temp;
    while(low<high){
        low=minidx(a,n,j);
        // printf("%d\n",low);
        temp=a[low];
        a[low]=a[j];
        a[j]=temp;
        j++;
        low=j;
    }
}
 
int main(){
    int a[]={56,76,2,5,87,43,34,1,98,34,6,52,4,-3,5,6,0,43,98,-18,34,3,76,6,546,3,3,43,43,5,64,34,4434,4,4,4,4,5,4};
    int n=sizeof(a)/sizeof(int);
    show(a,n);
    sort(a,n);
    show(a,n);
    // printf("%d",minidx(a,n,0));
    
    return 0;
}