#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void circular_ll_traversal(struct node* head){
    struct node* ptr=head;
    do{
        printf("Element is :%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

struct node* insert_at_first(struct node* head,int data){
    struct node* ptr=head;
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    do{
        
    ptr=ptr->next;

    }while(ptr->next!=head);
    node->next=ptr->next;
    ptr->next=node;
    head=node;
    return head;
}

struct node* insert_at_index(struct node* head,int index,int data){
    struct node* p=head;
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    int i=0;
    while(i<index-1){
        p=p->next;
        i++;
    }
    node->next=p->next;
    p->next=node;
    return head;
}

struct node* insert_at_end(struct node * head,int data){
    struct node* ptr=head;
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    do{
        
    ptr=ptr->next;

    }while(ptr->next!=head);
    node->next=ptr->next;
    ptr->next=node;
    return head;

}

struct node* insert_after_node(struct node* head,struct node* node,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=node->next;
    node->next=ptr;
    return head;
}

struct node* delete_first(struct node* head){
    struct node* ptr=head;
    struct node* q=head;
    struct node* fre=head;
    q=q->next;
    do{
        
    ptr=ptr->next;

    }while(ptr->next!=head);
    ptr->next=q;
    head=q;
    free(fre);
    return head;
}



int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node *));
    third = (struct node *)malloc(sizeof(struct node *));
    fourth = (struct node *)malloc(sizeof(struct node *));
    head->data = 12;
    head->next = second;
    second->data = 45;
    second->next = third;
    third->data = 88;
    third->next = fourth;
    fourth->data = 96;
    fourth->next = head;
    printf("\nBefore insertion\n");
    circular_ll_traversal(head);
    head=delete_first(head);
    printf("\nAfter insertion\n");
    circular_ll_traversal(head);
    return 0;
}