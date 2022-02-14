//Changes 2
#include<bits/stdc++.h>


using namespace std;

int main(){
	long long n,count=0;
	vector<long long> a;
	long long k;
	cin>>n;
	cin>>k;
  long long m;
	long long i,j;
	for(i=0;i<n;i++){
      	cin>>m;
		a.push_back(m);
	}
	
	sort(a.begin(),a.end());
	
	
	
	for(i=0;i<n;i++){
		if(i==0 ){
			if((a[i]+k)>=a[i+1]){
			++count;
			
		} 
		}
		else if(i==(n-1)){
		
		  if((a[i]-k)<=a[i-1])
			++count;
			
		}
		else{
		
		if(((a[i]-k)<=a[i-1]) || ((a[i]+k)>=a[i+1]))
			++count ;
	}
		
	}
				
		
	
	
	cout<<count;

	return 0;
}
