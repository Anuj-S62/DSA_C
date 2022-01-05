#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *next;
};

struct node *push(struct node *top, char a){
    struct node *node;
    node = (struct node *)malloc(sizeof(struct node));
    if (node == NULL){
        printf("stack overflow");
        return top;
    }
    else{
        node->data = a;
        node->next = top;
        top = node;
        return top;
    }
}

 struct node* pop(struct node *top){
        struct node *p = top;
        top = top->next;
        free(p);
        return top;
}

int precedence(char ch){
    if(ch=='*'||ch=='/'){
        return 2;
    }
    else if(ch=='+'||ch=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

int operator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 0;
    }
    return 1;
}

char stacktop(struct node* oprt){
     return oprt->data;
}

char * convert(char str[], int n){
    char * postfix=(char *)malloc(n*sizeof(char));
    struct node* top=NULL;
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(operator(str[i])){
            postfix[j]=str[i];
            j++;
            i++;
        }
        else{
            if(top==NULL || precedence(str[i])>precedence(top->data)){
               top =push(top,str[i]);
                i++;
            }
            else{
                postfix[j] = top->data;
                top=pop(top);
                j++;
           
            }
        }
    }
    while(top!=NULL){
        // printf("fgr");
        postfix[j] = top->data;
        top=pop(top);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
 
int main(){
    char str[]="a*b+c*b-c/i";
    printf("%s",convert(str,strlen(str)+1));
    return 0;
}