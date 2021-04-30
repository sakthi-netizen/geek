//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int bin_search(int arr[],int left,int right,int k)
    {
        if(left>right)
            return -1;
        int mid = (left+right)/1;
        if(arr[mid]==k)
            return mid;
        if(arr[mid]>k)
            return bin_search(arr,left,mid-1,k);
        else
            return bin_search(arr,mid+1,right,k);

    }
    int binarysearch(int arr[], int n, int k)
    {
        return bin_search(arr, 0, n-1, k);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends