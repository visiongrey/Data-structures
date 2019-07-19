#include <iostream>
using namespace std;

void insert(int data,int n);
void del(int pos);
void print();

struct node{        //node_creation
int data;
node *next;
};

node *head;

int main(){          //driver_program
head = NULL;        //empty_list
insert(4,1);
insert(3,2);
insert(8,2);
insert(6,4);
print();
del(3);
print();
    return 0;
}

    void insert(int data,int n){
    node *t=new node;
    t->data=data;
    t->next=NULL;
    if (n==1){           //for_pos1
    t->next=head;
    head=t;
    return;
    }
    node *t2 = head;
    for (int i=0;i<n-2;i++){        //goto (n-1) node
    t2=t2->next;
    }
    t->next=t2->next;
    t2->next=t;
    }

    void del(int pos){
    node *t=head;
    for(int i=0;i<pos-2;i++){
    t=t->next;
    }
    node *t2 = t->next;
    t->next=t2->next;
    delete(t2);
    }

    void print(){
    node *t = head;
    while(t){
    cout<<"-"<<t->data;
    t=t->next;
    }
    cout<<"\n";
    }
