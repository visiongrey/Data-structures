#include<iostream>
using namespace std;
void insert_hd(int data);
void insert_tl(int data);
void del(int pos);
void print();

struct node{        //doublylinkedlist
int data;
node *next;
node *prev;
};
node *head,*tail;
node *makenode(int data);

int main(){         //driverprogram
head=NULL,tail=NULL;
insert_hd(4);
insert_hd(9);
insert_tl(1);
insert_tl(7);
print();
del(3);
print();
return 0;}

    node *makenode(int data){       //create_anode
    node *t=new node;
    t->data=data;
    t->next=NULL;
    t->prev=NULL;
    return t;
    }

    void insert_hd(int data){       //inserts_athead
    node *t=makenode(data);
    if (head==NULL){
    head=t;
    tail=t;
    return;
    }
    head->prev=t;
    t->next=head;
    head=t;
    }

    void insert_tl(int data){       //inserts_attail
    node *t=makenode(data);
    tail->next=t;
    t->prev=tail;
    tail=t;
    }

    void del(int pos){          //deletesnode
    node *t=head;
    for(int i=0;i<pos-2;i++){       //goto(n-1)node
    t=t->next;
    }
    node *t2,*t3;
    t2=t->next;         //pointto(n)node
    t3=t2->next;        //pointto(n+1)node
    t->next=t2->next;
    t3->prev=t;
    delete(t2);
    }

    void print(){       //printsdata
    node *t =head;
    while(t){
    cout<<"-"<<t->data<<"-";
    t=t->next;
    }
    cout<<"\n";
    }
