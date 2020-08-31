# include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	int i,j,n,k,m;
	
	for( i=0;i<n ;i++){
		
		cin>>n;
	}
	
	for( j=0;j<n;j++){
		cin>>k;
		v.push_back(k);
	}
	m=v[n-1];
	for( j=0;j<n-1;j++){
		
		v[j+1]=v[j];
	}
	v[0]=m;
	for( i=0;i<n ;i++){
		
		cout<<" "<<v[i];
	}
	
	
	
	return 0;
}
