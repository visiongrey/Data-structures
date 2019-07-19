#include<iostream>
using namespace std;
int i,j,pivot;
void qs(int a[],int first,int last);

 int main(){
 int n;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
 cin>>a[i];
 }
 for(i=0;i<n;i++){
 cout<<a[i];
 }
 qs(a,0,n-1);
 for(i=0;i<n;i++){
 cout<<a[i];
 }
 return 0;
 }
 void qs(int a[],int first,int last){
     if(first<last){
     i=first;
     j=last;
     pivot=first;
     while(i<j){
      while((a[i]<=a[pivot])&&(i<last))
      i++;
      while(a[pivot]<=a[j])
      j--;
     if(i<j)
     { a[i]=a[i]+a[j];
       a[j]=a[i]-a[j];
       a[i]=a[i]-a[j];
     }
      }
     }
       a[j]=a[j]+a[pivot];
       a[pivot]=a[j]-a[pivot];
       a[j]=a[j]-a[pivot];
    qs(a,first,j-1);
    qs(a,j+1,last);
}



