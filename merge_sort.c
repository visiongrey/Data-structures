#include<stdio.h>
#include<stdlib.h>

void merge(int *a,int *l,int lc,int *r,int rc){
int i,j,k;
i=0;j=0;k=0;
while(i<lc && j<rc){
 if(l[i] < r[j]) a[k++]=l[i++];     //putvaluesinarray
 else a[k++]=r[j++];
}
while(i < lc) a[k++]=l[i++];        //putremainingvalues
while(j < rc) a[k++]=r[j++];        //ineitherarray
}

void mergesort(int *a,int n){
int i,*l,*r,mid;
if(n < 2)
 return;
mid=n/2;
 l=(int*)malloc(mid*sizeof(int));           //createleftarray
 r=(int*)malloc((n-mid)*sizeof(int));       //createrightarray
for(i=0;i<mid;i++)          //putthevalues
 l[i]=a[i];
for(i=mid;i<n;i++)
 r[i-mid]=a[i];
mergesort(l,mid);           //recursivecalls
mergesort(r,n-mid);
merge(a,l,mid,r,n-mid);
 free(l);
 free(r);
}

int main(){
int A[] = {3,5,1,7,9,2,8};
int i,s;
s= sizeof(A)/sizeof(A[0]);
mergesort(A,s);
for(i=0;i<s;i++)
printf("-%d ",A[i]);
return 0;}
