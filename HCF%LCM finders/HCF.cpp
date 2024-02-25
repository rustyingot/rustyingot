#include <iostream>
using namespace std;
int main(){
	int n,m,defaul;
	cin>>n;cin>>m;
	if(n<m){
		defaul=n;
	}else if(n>m){
		defaul=m;
	}else{
		cout<<"HCF="<<n<<endl;
		cout<<"Press any key+enter to exit";cin>>defaul;
		return 0;
	}
	for (int i=defaul;i>0;i--){
		if (m%i==0&&n%i==0){
			cout<<"HCF="<<i<<endl;
			cout<<"Press any key+enter to exit";cin>>defaul;
			return 0;
		}
	}
}