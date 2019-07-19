#include<iostream>
using namespace std;
struct node{
int data;
node *next=NULL;
};
	class list{
	public:
	node *head;
	list(){
	head=NULL;
	}
	void add(int n){
	node *t=new node;
	t->data=n;
	t->next=NULL;
	if (head==NULL)
	{head=t;
	t=NULL;
	}
	else{
	t->next=head;
	head=t;
	}
	}
  void print(){
  node *t=new node;
  t=head;
  while(t){
  cout<<"-"<< t->data;
  t=t->next;
   }
  }
};

int main(){
list l;
l.add(4);
l.add(8);
l.add(9);
l.print();
cout<<"\n";
return 0;
}

