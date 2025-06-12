#include<iostream>
using namespace std;

void merge(int a[] ,int left,int mid, int right)
{
mid = (left + right)/2;

int n1 = mid - left + 1;  
int n2 = right - mid;  

int L[n1],R[n2];  
for(int i=0; i<n1; i++)  
{  
    L[i] = a[left+i];  
}  

for(int j=0; j<n2; j++)  
{  
    R[j] = a[mid + 1 + j];  
}  

int i=0;  
int j=0;  
int k = left;  
while(i<n1 && j<n2)  
{  
    if(L[i] < R[j])  
    {  
        a[k++] = L[i++];  
    }else{  
        a[k++] = R[j++];  
    }  
      
}  
while(i<n1)  
{  
    a[k++] = L[i++];  
}  
while(j<n2)  
{  
    a[k++] = R[j++];  
}

}

void mergeSort(int a[] ,int left, int right)
{
if(left < right)
{
int mid = (left + right)/2;

mergeSort(a,left,mid);  
    mergeSort(a,mid+1,right);  
    merge(a,left,mid,right);  
}

}

void PrintArray(int a[],int n)
{
cout<<"Array is: ";
for(int i=0; i<n; i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
}

int main()
{
int n;
cout<<"Enter N :";
cin>>n;
int a[n];
for(int i=0; i<n; i++)
{
cout<<"Enter a["<<i<<"]: ";
cin>>a[i];
}
cout<<endl<<"---orignal---"<<endl;
PrintArray(a,n);

mergeSort(a,0,n-1);  
cout<<endl<<"---Sorted---"<<endl;  
PrintArray(a,n);  


return 0;

}

