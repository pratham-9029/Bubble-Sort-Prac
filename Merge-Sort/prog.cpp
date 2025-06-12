#include<iostream>
using namespace std;

// Merges two sorted parts of array: arr[left...mid] and arr[mid+1...right]
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;     // Length of left half
    int n2 = right - mid;        // Length of right half

    // Temporary arrays to hold the halves
    int L[n1], R[n2];

    // Copying data into temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];   // Copy left half
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j]; // Copy right half

    // Variables to iterate over L[], R[] and arr[]
    int i = 0;   // index for L[]
    int j = 0;   // index for R[]
    int k = left; // index for arr[]

    // Merge L[] and R[] into arr[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];  // smaller element is L[i]
            i++;
        } else {
            arr[k] = R[j];  // smaller element is R[j]
            j++;
        }
        k++;
    }

    // // If any elements left in L[], copy them
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }






    
    // // If any elements left in R[], copy them
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort Function (recursively sorts array)
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2; // Find the middle point

        // Sort first and second halves
        mergeSort(arr, left, mid);       // sort left half
        mergeSort(arr, mid + 1, right);  // sort right half

        // Merge sorted halves
        merge(arr, left, mid, right);
    }
}








// Prints the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {38, 27, 43, 3};  // array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // total number of elements

    cout << "Original Array: ";
    printArray(arr, n);

    // Call mergeSort function
    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
