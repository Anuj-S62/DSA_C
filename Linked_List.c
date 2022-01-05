#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void show(struct node * ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

struct node * insertAtFirst(struct node* head,int data){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
}

struct node* insertAtIndex(struct node* head,int index,int data){
    struct node* ptr;
    int i=0;
    ptr=(struct node *)malloc(sizeof(struct node*));
    ptr->data=data;
    struct node* p=head;
    while(i!=index-1){
    p=p->next;
    i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node* insertAtEnd(struct node* head,int data){
    struct node* ptr;
    ptr=(struct node* )malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    return head;
}

struct node* insertAfterNode(struct node* head,struct node* node,int data){
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=node->next;
    node->next=ptr;
    return head;
}

struct node* deleteFirstNode(struct node* head){
    struct node* ptr;
    ptr=head;
    ptr=ptr->next;
    free(head);
    head=ptr;
    return head;

}

struct node* deleteNodeAtIndex(struct node* head,int index){
    struct node* ptr;
    ptr=head;
    int i=0;
    while(i!=index-1){
        ptr=ptr->next;
        i++;
    }
    struct node* q;
    q=ptr->next;
    ptr->next=q->next;
    free(q);
    return head;
    
}

struct node* deleteLastNode(struct node* head){
    struct node* ptr=head;
    struct node* r;
    while(ptr->next!=NULL){
       r=ptr;
        ptr=ptr->next;
    }
    r->next=NULL;
    free(ptr);
    return head;
}

struct node* deleteAfterNode(struct node* head,struct node* node){
    struct node* ptr;
    ptr=node;
    ptr=ptr->next;
    node->next=ptr->next;
    free(ptr);
    return head;
}

int main(){
struct node * head;
struct node * second;
struct node * third;
struct node * fourth;
head=(struct node *)malloc(sizeof(struct node*));
second=(struct node *)malloc(sizeof(struct node*));
third=(struct node *)malloc(sizeof(struct node*));
fourth=(struct node *)malloc(sizeof(struct node*));
head->data=12;
head->next=second;
second->data=45;
second->next=third;
third->data=88;
third->next=fourth;
fourth->data=96;
fourth->next=NULL;
printf("\nBefore insertion\n");
show(head);
 head=deleteAfterNode(head,second);
printf("\nAfter insertion\n");
show(head);
    return 0;
}