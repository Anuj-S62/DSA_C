#include <stdio.h>
#include <stdlib.h>

struct c_queue{
    int f;
    int r;
    int *arr;
    int size;
};

void enqueue(struct c_queue* *ptr,int val){
    if(((*ptr)->r+1)%((*ptr)->size)==(*ptr)->f){
        printf("Queue OverFlow\n");
    }
    else{
        (*ptr)->r=((*ptr)->r+1)%((*ptr)->size);
        (*ptr)->arr[(*ptr)->r]=val;
    }
}

int dequeue(struct c_queue* *ptr){
    if((*ptr)->r==(*ptr)->f){
        printf("Queue is Empty\n"); 
        return -1; 
    }
    else{
        (*ptr)->f=((*ptr)->f+1)%((*ptr)->size);
        printf("\n");
        return ((*ptr)->arr[(*ptr)->f]);
    }
}

void traversal(struct c_queue* ptr){
    int a=ptr->f;
    a=(a+1)%ptr->size;
    while(a!=(ptr->r+1)%(ptr->size)){
        printf("%d ",ptr->arr[a]);
        a=(a+1)%ptr->size;
    }
    printf("\n");
}
 
int main(){
    struct c_queue* c_queue=(struct c_queue* )malloc(sizeof(struct c_queue));
    c_queue->size=10;
    c_queue->f=c_queue->size-1;
    c_queue->r=c_queue->size-1;
    c_queue->arr=(int *)malloc(c_queue->size*sizeof(int));
    enqueue(&c_queue,45);
    enqueue(&c_queue,4);
    enqueue(&c_queue,5);
    enqueue(&c_queue,23);
    enqueue(&c_queue,56);
    enqueue(&c_queue,98);
    enqueue(&c_queue,90);
    enqueue(&c_queue,34);
    enqueue(&c_queue,71);
    
    traversal(c_queue);
    int a=dequeue(&c_queue);
    printf("dequeued_elem is: %d\n",a);
    traversal(c_queue);
    // traversal(c_queue);
    return 0;
}