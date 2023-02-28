#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,m,n;
	    cin>>x>>y;
	    m=2*x;
	    n=5*y;
	    if(m>n)
	    cout<<"chocolate"<<endl;
	    
	    else if(m<n)
	    cout<<"candy"<<endl;
	    else 
	    cout<<"either"<<endl;
	    
	}
	return 0;
}