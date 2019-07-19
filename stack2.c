#include<stdio.h>
struct node{
int data;
struct node* next;
};
struct node* head;
int main(){
head=NULL;
push();
push();
push();
show();
pop();
show();
return 0;
}
void push(){
int data;
struct node* t=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the value :");
scanf("%d",&data);
t->data=data;
t->next=head;
head=t;
}
void pop(){
if (head==NULL)
    printf("\nUnderflow!!");
else{
struct node* t=head;
head=t->next;
free(t);
 }
}
void show(){
if (head==NULL)
    printf("\nNo values to show");
else{
 struct node* t=head;
 while(t){
 printf("-%d",t->data);
 t=t->next;
 }
 printf("\n");
}
}
