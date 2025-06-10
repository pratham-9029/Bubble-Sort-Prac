#include<iostream>
using namespace std;

void InsertionSort(int[],int);
void PrintArray(int[], int);

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter a["<<i<<"] : ";
        cin>>a[i];
    }

    PrintArray(a,n);

    InsertionSort(a,n);
    PrintArray(a,n);
    
    return 0;
}

void InsertionSort(int a[],int n)
{
    for(int i=1; i<=n-1; i++)
    {
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        
    }
}

void PrintArray(int a[],int n)
{
    cout<<"Array is : ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}