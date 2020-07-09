#include <iostream>
using namespace std;
int countsetbits(int n){
    int cnt=0;
      while(n>0){
       if(n&1)
        cnt++;
        n=n>>1;
      }
    return cnt;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<countsetbits(n)<<endl;
	}
	return 0;
}