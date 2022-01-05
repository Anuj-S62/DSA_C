#include <stdio.h>
#include <stdlib.h>
#include <string.h.>
struct node
{
    char data;
    struct node *next;
};

struct node *push(struct node *top, char a)
{
    struct node *node;
    node = (struct node *)malloc(sizeof(struct node));
    if (node == NULL)
    {
        printf("stack overflow");
        return top;
    }
    else
    {
        node->data = a;
        node->next = top;
        top = node;
        return top;
    }
}

struct node *pop(struct node *top)
{
    if (top == NULL)
    {
        printf("stack is under flow\n");
        return top;
    }
    else
    {
        struct node *p = top;
        top = top->next;
        free(p);
        return top;
    }
}

int main(){
    struct node *top = NULL;
    char str[1000];
    gets(str);
    char *ptr = str;
    char a, b, c, d, e, f;
    a = '(';
    b = ')';
    c = '{';
    d = '}';
    e = '[';
    f = ']';
    for (int i = 0; i < strlen(str); i++){
        if (*ptr == a){
            top = push(top, a);
        }
        else if (*ptr == b){
            if (top == NULL){
                printf("NOT BALANCED\n");
                return 0;
            }
            else if (top->data != a){
                printf("NOT BALANCED\n");
                return 0;
            }
            top = pop(top);
        }
        else if (*ptr == c){
            top = push(top, c);
        }
        else if (*ptr == d){
            if (top == NULL){
                printf("NOT BALANCED\n");
                return 0;
            }
            else if (top->data != c){
                printf("NOT BALANCED\n");
                return 0;
            }
            top = pop(top);
        }
        else if (*ptr == e){
            top = push(top, e);
        }
        else if (*ptr == f){
            if (top == NULL){
                printf("NOT BALANCED\n");
                return 0;
            }
            else if (top->data != e){
                printf("NOT BALANCED\n");
                return 0;
            }
            top = pop(top);
        }
        ptr++;
    }
    if (top == NULL){
        printf("BALANCED\n");
    }
    else{
        printf("NOT BALANCED\n");
    }

    return 0;
}