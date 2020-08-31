#include<iostream>

using namespace std;

int main(){
	int n,flag;
	long long a[100000];
	long long k;
	cin>>n;
	cin>>k;
	int i,j;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	int count=0;
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<n;j++){
			
			
			if(i==j){
			
				continue;
			}
			if(((a[i]-k)<=a[j] ) && (a[j]<=(a[i]+k))){
				flag = 1;
				
				break;
			}
			
		}
		if (flag == 1 ){
				count++;
		}
	
	}
	cout<<count<<endl;

	return 0;
}
