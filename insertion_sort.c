#include <stdio.h>
void show(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
} 
void sort(int *a,int n){
    int temp;
    int p=0;
    // int shift=0;
    for(int i=1;i<n;i++){
        temp=a[i];
        p=i;
        for(int j=0;j<i;j++){
            if(temp<a[p-1]){
                a[p]=a[p-1];
                a[p-1]=temp;
                p--;
                // shift++;
            }

        }
    }
}
 
int main(){
    int a[]={4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    show(a,n);
    sort(a,n);
    show(a,n);
    return 0;
}