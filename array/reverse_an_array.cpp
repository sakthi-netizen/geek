#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	        cin>>a[n-i-1];
	    for(int i=0; i<n; i++)
	        cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}