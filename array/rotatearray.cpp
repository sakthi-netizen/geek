#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int N,D;
	    cin>>N>>D;
	    int arr[N];
	    
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<N; i++){
	        cout<<arr[(i+D) % N]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
