#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> hash(n, 0);
        vector<int> ans;
        for(int i=0; i<n; i++){
            hash[arr[i]] += 1;
        }
        for(int i=0; i<n; i++){
            if(hash[i] > 1){
                ans.push_back(i);
            }
        }
        if(ans.empty())
            ans.push_back(-1);
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}