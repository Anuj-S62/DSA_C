#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct queue{
    int back;
    int front;
    int size;
    int * arr;
}queue;

queue* enqueue(queue* ptr,int value){
    if(ptr->back==ptr->size-1){
        printf("Queue is full\n");
        return ptr;
    }
    else{
        ptr->back++;
        ptr->arr[ptr->back]=value;      
        return ptr;
    }
}

queue* dequeue(queue*ptr){
    if((ptr)->back==(ptr)->front){
        printf("Queue is empty\n");
        return (ptr);
    }
    else{
        for(int i=0;i<(ptr)->back;i++){
            ptr->front++;
            (ptr)->arr[ptr->front]=ptr->arr[ptr->front+1];      
        }
         ptr->front=-1;
        (ptr)->back--;
        printf("\n");
        printf("DEQUEUED");
        printf("\n");
        return (ptr);
    }
}

void traversal(queue* ptr){
    printf("\n");
    for(int i=0;i<ptr->back+1;i++){
        printf("Element: %d\n",ptr->arr[i]);
    }
}

void peek(queue* ptr,int pos){
     printf("Element at %d position is: %d \n",pos,ptr->arr[pos-1]);
}

int queue_front(queue* ptr){
    return ptr->arr[0];
}

int queue_back(queue* ptr){
    return ptr->arr[ptr->back];
}

void is_empty(queue* ptr){
    if(ptr->front==ptr->back){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }
}

void is_full(queue* ptr){
    if(ptr->back==ptr->size-1){
        printf("Queue is full\n");
    }
    else{
        printf("Queue is not full\n");
    }
}

int main(){
    queue* que;
    que->size=6;
    que->arr=(int *)malloc(que->size*sizeof(int));
    que->back=-1;
    que->front=-1;
    enqueue(que,3);
    enqueue(que,34);
    enqueue(que,56);
    enqueue(que,87);
    enqueue(que,12);
    enqueue(que,16);
    return 0;
}