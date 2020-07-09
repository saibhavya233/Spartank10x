#include <iostream>
using namespace std;
string kthbit(int n,int k){
     n=n>>k;
     if(n&1)
     return "Yes";
     else
     return "No";
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    cout<<kthbit(n,k)<<endl;
	}
	return 0;
}