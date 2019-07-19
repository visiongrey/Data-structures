#include<iostream>
using namespace std;
int a[10],first=-1,rear=-1,n;
void enqueue();
void dequeue();
void print();
int main(){
char ch;
do{
cout<<"Enter choice : \n";
cout<<"1.Insert\n2.Delete\n3.Show\n";
int c;
cin>>c;
switch(c){
case 1: enqueue();break;
case 2: dequeue();break;
case 3: print();break;
default : cout<<"Wrong input!!\n";break;
}
cout<<"Go to menu?\n";
cin>>ch;
}while(ch=='y');
return 0;
}
void enqueue(){
if (rear==9)
    cout<<"Overflow!!\n";
else if ((first==-1)&&(rear==-1))
    { first=0;rear=0;
      cout<<"Enter the item : ";
      cin>>n;
      a[rear]=n;
    }
else
    { rear+=1;
      cout<<"Enter the item : ";
      cin>>n;
      a[rear]=n;
    }
}
void dequeue(){
if (first==rear==-1)
    cout<<"Underflow!!\n";
else
     first+=1;
}
void print(){
int i=0;
for(i=0;i<=rear;i++)
{ cout<<a[i]<<" ";
}
}
