#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{

    int data;
    struct Node * next;
};

void traversal(struct Node* head)
{
   struct  Node *ptr;
   ptr=(struct Node*) malloc(sizeof(Node));
   ptr=head;
   while(ptr!=NULL)
   {
       cout<<ptr->data<<endl;
       ptr=ptr->next;
   }
}


int main()
{
    struct Node* head;
    head = (struct Node*) malloc(sizeof(Node));

    struct Node* one;
    one = (struct Node*) malloc(sizeof(Node));

    struct Node* two;
    two = (struct Node*) malloc(sizeof(Node));

    struct Node* three;
    three = (struct Node*) malloc(sizeof(Node));

    struct Node* four;
    four = (struct Node*) malloc(sizeof(Node));

    head->data=6;
    head->next=one;

    one->data=87;
    one->next=two;

    two->data=93;
    two->next=three;

    three->data=4;
    three->next = four ;

    four->data=8;
    four->next=NULL;

    traversal(head);
}