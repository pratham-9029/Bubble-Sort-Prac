#include<iostream>
using namespace std;

class Selection_Sort{
public:
    void SelectionSort(int a[],int n)
    {
        int temp,min;

        for(int i=0; i<n-1; i++)
        {
            min = i;
            for(int j=i+1; j<n; j++)
            {
                if(a[j] < a[min])
                {
                    min = j;
                }
            }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    void PrintArray(int a[],int n)
    {
        cout<<"Sorted Array : ";
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Selection_Sort obj;
    
    int n;
    cout<<"Enter Size Of Array : ";
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<endl;
    obj.PrintArray(a,n);
    obj.SelectionSort(a,n);
    obj.PrintArray(a,n);
    return 0;
}