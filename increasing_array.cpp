#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	int k;
	vector <long long> v;
	for(long long i=0;i<(n);i++){
		cin>>k;
		v.push_back(k);
	}
	long long  p;
	long long  steps=0;
	for(long long j=0;j<(n-1);j++){
		if(v[j]>v[j+1]){
			steps = steps + (v[j]-v[j+1]);
			p=0;
			p=v[j]-v[j+1];
			v[j+1] = v[j+1] + p;
		}
		
		
	}
	
	cout<< steps;
	return 0;
	
}
