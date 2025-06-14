#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int st,int end)
{
    int pivot = arr[st];
    int cnt = 0;
    for(int i=st+1; i<=end; i++)
    {
        if(arr[i] <= pivot )
        {
            cnt++;
        }
    }
    int pivotIndex = st + cnt;
    swap(arr[pivotIndex], arr[st]);

    int i=st;
    int j=end;


    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        while(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
}

void quickSort(vector<int>& arr, int st, int end)
{
    if(st >= end) return;

    //partition
    int p = partition(arr,st,end);

    //sorting left part
    quickSort(arr,st,p-1);

    //sorting right part
    quickSort(arr,p+1,end);
    
}

void printArray(vector<int>& arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<endl<<"---Orignal---"<<endl;
    printArray(arr,n);

    quickSort(arr, 0, arr.size()-1);
    
    cout<<endl<<"---Sorted---"<<endl;
    printArray(arr,n);

    return 0;
}