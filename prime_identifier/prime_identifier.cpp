#include <iostream>
using namespace std;
int main(){
	for(;;){
		long int a;
	cin>>a;
	bool b=true;
	for (long int i=2;i<a;i++){
		if(a%i==0){
			b=false;
			
		}
	}
	if(b==true){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	}
	
	
	return 0;
	
}