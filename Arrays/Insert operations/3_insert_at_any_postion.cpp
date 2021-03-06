// Insertion at any given position
// Time - O(N)
// Space - O(1)


#include<bits/stdc++.h>
using namespace std;

int insertAtIndex(int arr[], int idx, int n, int l)
{
    for(int i=l; i>idx; i--)
    {
        arr[i] = arr[i-1];
    }
    // Assign the given index with 20 (i.e insert at a given index)
    arr[idx] = 20;

    cout<<"\nAfter insertion: "<<endl; 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    // Initialized array with 0 of size 8
    int arr[8] = {0};
    int len = 0;

    // Input array element upto size 5
    cout<<"Enter array elements of size 6 "<<endl;
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
        len++;
    }

    cout<<"Before insertion: "<<endl;
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }

    // Calling function with input array, given index, its size and index of first empty block 
    insertAtIndex(arr, 2, 8, len);
    return 0;
}



