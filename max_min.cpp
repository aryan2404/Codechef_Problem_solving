#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	// your code goes here
	cin>>test;
	while(test--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int ans=min({a,b,c});
	    int ans1=max({a,b,c});
	    int diff=ans1-ans;
	    cout<<diff<<endl;
	}
	return 0;
}