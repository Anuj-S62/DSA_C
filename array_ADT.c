#include <stdio.h>
 
 #include<stdlib.h>

typedef struct MyArr{
        int max_size;
        int used_size;
        int *ptr;
} MyArr;

void CreateArr(MyArr* a,int maxsize,int usedsize){
    int n;
    (*a).max_size=maxsize;
    (*a).used_size=usedsize;
    (*a).ptr=(int *)malloc(maxsize*sizeof(int));
    for(int i=0;i<usedsize;i++){
        printf("Enter the value of element %d:\n",i+1);
        scanf("%d",&n);
        (*a).ptr[i]=n;
    }
    printf("Created\n");
    printf("\n");
}

void Display(MyArr* a){
    for(int i=0;i<((*a).used_size);i++){
        printf("%d \n",(*a).ptr[i]);
    }
    printf("Displayed\n");
    printf("\n");
}

void Insert(MyArr* a,int index,int value){
    (*a).used_size++;
    for(int i=(*a).used_size;i>index;i--){
        (*a).ptr[i]=(*a).ptr[i-1];
    }
    (*a).ptr[index]=value;
    printf("INSERTED\n");
    printf("\n");
}

void Delete(MyArr* a,int index){
    int arr[(*a).max_size];
    for(int i=0;i<(*a).used_size;i++){
        arr[i]=(*a).ptr[i];
    }
    (*a).used_size--;
    for(int i=(*a).used_size;i>index;i--){
        (*a).ptr[i-1]=arr[i];
    }
    printf("DELETED\n");
    printf("\n");
}

void linear_search(MyArr* a,int num){
        for(int i=0;i<(*a).used_size;i++){
            if((*a).ptr[i]==num){
            printf("%d is present at %dth place\n",num,i);
            }
        }
            printf("SEARCH COMPLETED\n");
            printf("\n");
}

int binary_search(MyArr* a,int num){
    int low=0;
    int high=((*a).used_size)-1;
    if(num==(*a).ptr[low]){
        return low;
    }
    else if(num==(*a).ptr[high]){
        return high;
    }
    while(low<=high){
    int mid=(low+high)/2;
        if(num<(*a).ptr[mid]){
            high=mid-1;
        }
        else if(num==(*a).ptr[mid]){
            return mid;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
   MyArr marks;
   CreateArr(&marks,50,8);
   Display(&marks);
   int a=binary_search(&marks,2);
   printf("%d",a);
    return 0;
}