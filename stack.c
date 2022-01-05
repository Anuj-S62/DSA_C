#include <stdio.h>
#include<stdlib.h>

typedef struct stack{
    int top;
    int *arr;
    int size;
}stack;
 
int is_empty(stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int is_full(stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(stack* ptr,int value){
    if(is_full(ptr)){
        printf("stack over full");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }

}

void show(stack* ptr){
    for(int i=0;i<=ptr->top;i++){
        printf("%d\n",ptr->arr[i]);
    }
}

int pop(stack* ptr){
    int a;
    if(is_empty(ptr)){
        printf("stack is empty");
        return -1;
    }
    else{
        a=ptr->arr[ptr->top];
        ptr->arr[ptr->top]=0;
        ptr->top--;
        return a;
    }
    //use:-
        // if(is_empty(s)){
    //     printf("stack is under flow\n");
    // }
    // else{
    //     int a=pop(s);
    // printf("removed value is: %d",a);

    // }

}

void peek(stack * ptr,int i){
    printf("%d\n",ptr->arr[(ptr->top)-i+1]);
}
int stack_top(stack* ptr){
    return ptr->arr[ptr->top];
}
int stack_bottom(stack* ptr){
    return ptr->arr[0];
}

int main(){
    stack* s;
    s->size=6;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    s->arr[0]=34;
    s->top++;
    s->arr[1]=45;
    s->top++;
    s->arr[2]=34;
    s->top++;
    s->arr[3]=78;
    s->top++;
    s->arr[4]=12;
    s->top++;
    s->arr[5]=65;
    s->top++;
    // printf("before\n\n");
    // show(s);
    // printf("\nafter\n");
    // show(s);
    // peek(s,6);
    int a=stack_bottom(s);
    printf("%d",a);
    return 0;
}