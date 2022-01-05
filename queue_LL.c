#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void enqueue(node **f, node **r, int val)
{
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if ((*f) == NULL)
        {
            (*f) = (*r) = n;
        }
        else
        {
            (*r)->next = n;
            (*r) = n;
        }
    }
}

void show(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int dequeue(node **f)
{
    if (*f == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        node *p = (*f);
        (*f) = (*f)->next;
        int a = p->data;
        free(p);
        return a;
    }
}

int main()
{
    node *f = NULL;
    node *r = NULL;
    enqueue(&f, &r, 34);
    enqueue(&f, &r, 87);
    enqueue(&f, &r, 12);
    enqueue(&f, &r, 98);
    enqueue(&f, &r, 18);
    show(f);
    int a = dequeue(&f);
    show(f);
    printf("%d", a);
    return 0;
}