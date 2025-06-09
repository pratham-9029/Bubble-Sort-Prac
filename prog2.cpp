#include<iostream>
using namespace std;

void Sorting(int [],int ){};
void PrintArray(int [], int ){};

int main()
{
    int n;
    cout<<"Enter Size Of Array : ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter a["<<i<<"] : ";
        cin>>a[i];
    }

    PrintArray(a,n);

    
    return 0;
}

void Sorting(int a[], int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    cout<<endl;
    
}

void PrintArray(int a[],int n)
{
    cout<<"Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}