#include <bits/stdc++.h>
using namespace std;
string powerof2(long long n)
{
    if(n==0)
     return "NO";
    while(n!=1){
        if(n%2!=0)
         return "NO";
         n=n/2;
    }
    return "YES";
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	   cout<< powerof2(n)<<endl;
	}
	return 0;
}
// another solution

#include <bits/stdc++.h>
using namespace std;
string powerof2(long long n)
{
    if(n==0)
     return "NO";
    if(ceil(log2(n))==floor(log2(n)))
      return "YES";
      return "NO";
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	   cout<< powerof2(n)<<endl;
	}
	return 0;
}