// A STL based C++ program to sort a nearly sorted array. 
//Refer https://www.youtube.com/watch?v=tJK7vjNKdLY
#include <bits/stdc++.h> 
using namespace std; 

// Given an array of size n, where every element 
// is k away from its target position, sorts the 
// array in O(nLogk) time. 
void sortK(int arr[], int n, int k) 
{ 
    // Insert first k+1 items in a priority queue (or min heap) 
    //(A O(k) operation). We assume, k < n. 
    priority_queue<int, vector<int>, greater<int> > pq(arr, arr + k + 1); 

    // i is index for remaining elements in arr[] and index 
    // is target index of for current minimum element in 
    // Min Heapm 'hp'. 
    int index = 0; 
    for (int i = k + 1; i < n; i++) { 
        arr[index++] = pq.top(); 
        pq.pop(); 
        pq.push(arr[i]); 
    } 

    while (pq.empty() == false) { 
        arr[index++] = pq.top(); 
        pq.pop(); 
    } 
} 

// A utility function to print array elements 
void printArray(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

// Driver program to test above functions 
int main() 
{ 
    // int k = 3; 
    // int arr[] = { 2, 6, 1000093, 12, 56, 8,100,986 }; 
    int k,m;
    // int n=k;
    cin>>k>>m;
    int arr[k*m]; 
    // int n = sizeof(arr) / sizeof(arr[0]); 
    for(int i=0;i<k*m;i++)
    {
        cin>>arr[i];
    }
    sortK(arr, k*m, k); 
    printArray(arr, k*m); 

    return 0; 
} 