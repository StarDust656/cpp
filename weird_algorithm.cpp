#include<iostream>
using namespace std;

int main(){
	
	 long long n;
	cin>>n;
	long long k=n;
	cout<<k<<" ";
	while(k!=1){
		if(k%2==0){
			k=k/2;
			cout<<k<<" ";
		}
		else{
			k=(k*3)+1;
			cout<<k<<" ";
		}
	}
//	cout<<k;
	
	return 0;
}
