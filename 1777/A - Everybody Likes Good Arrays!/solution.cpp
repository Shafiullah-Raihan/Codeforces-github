#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n;cin>>t;
	while(t--){
	    cin>>n; int cnt =0;
	    int arr[n]; cin>>arr[0];
	    for(int i=1;i<n;i++){
	        cin>>arr[i];
	        if((arr[i] &1) == (arr[i-1]&1)) cnt++;
	    }
	    cout<<cnt<<endl;
	    
	}
 
}