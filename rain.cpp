#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<3)
	        cout<<"light"<<endl;
	    
	    if(x>=3 &&x<7)
        cout<<"MODERATE"<<endl;
        
        if(x>=7)
        cout<<"HEAVY"<<endl;
	}
	return 0;
}