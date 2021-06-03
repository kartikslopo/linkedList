#include<iostream>
#include<stdlib.h>
using namespace std;

struct lStack{
    int data;
    struct lStack *next;
};

void traversal(struct lStack *top)
{
    struct lStack *ptr;
    ptr=(struct lStack*) malloc(sizeof(lStack));

    ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct lStack * push(struct lStack *top,int data)
{
    struct lStack *ptr;
    ptr=(struct lStack*) malloc(sizeof(lStack));

    ptr->data=data;
    ptr->next=top;
    return ptr;
}

struct lStack * pop(struct lStack *top)
{
    struct lStack *ptr;
    ptr=(struct lStack*) malloc(sizeof(lStack));
    
    ptr=top;
    top=top->next;
    free(ptr);
    return top;
}


int main()
{
    struct lStack *top;
    top=(struct lStack*) malloc(sizeof(lStack));

    struct lStack *first;
    first=(struct lStack*) malloc(sizeof(lStack));

    struct lStack *second;
    second=(struct lStack*) malloc(sizeof(lStack));   

    struct lStack *third;
    third=(struct lStack*) malloc(sizeof(lStack)); 

    top->data=7;
    top->next=first;

    first->data=75;
    first->next=second;

    second->data=30;
    second->next=third;

    third->data=22;
    third->next=NULL;

    traversal(top);
    top=push(top,6);
    top=push(top,89);
    cout<<"After Push\n";
    traversal(top);
    cout<<"After Pop"<<endl;
    top=pop(top);
    traversal(top);

    return 0;
}