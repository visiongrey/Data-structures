#include<stdio.h>
int top=-1,s[5],n;
int main(){
push();
push();
push();
show();
pop();
push();
show();
return 0;
}
void push(){
if(top==4)
    printf("\nStack is full");
else{
    printf("\nEnter the value : ");
    scanf("%d",&n);
    s[++top]=n;
}
}
void pop(){
if(top==-1)
    printf("\nStack is empty");
else{
    top--;
    printf("\nValue popped!!");
    }
}
void show(){
int i;
printf("\nStack is:");
for(i=top;i>=0;i--)
    printf("\n%d",s[i]);
}
