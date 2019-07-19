#include<stdio.h>

struct node{
int data;
struct node* next;
};

struct node *head;

void insert(int pos,int data){
struct node* temp=(struct node*)malloc(sizeof(struct node));
struct node* temp2;
int i;
temp->data=data;
temp->next=NULL;
if(pos==1){
temp->next=head;
head=temp;
return;
}
temp2=head;
for(i=0;i<pos-2;i++){
temp2=temp2->next;
}
temp->next=temp2->next;
temp2->next=temp;
}

void del(int pos){
struct node* t=head;
struct node* t2;
int i;
for(i=0;i<pos-2;i++){
t=t->next;
}
t2=t->next;
t->next=t2->next;
free(t2);
}

void print(){
struct node* t=head;
while(t){
printf("-%d",t->data);
t=t->next;
}
printf("\n");
}

int main(){
head=NULL;
insert(1,5);
insert(2,1);
insert(2,8);
print();
del(2);
print();
return 0;
}
