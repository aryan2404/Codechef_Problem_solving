#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=100){
	        cout<<x<<endl;
	        
	    } else{
	        cout<<x-10<<endl;
	    }
	}
	return 0;
}