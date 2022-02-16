//
#include<bits/stdc++.h>
using namespace std;


bool prime(int n) 
{ 
     
    if (n<=1){
        return false;
	}
  
    for(int i=2;i<n/2;i++){
        if (n%i==0){
            return false;
		}
      }
    return true; 
} 

int main(){
	
	int d,p,ans;

	ans=0;
	
	cin>>d>>p;
	int c,m,i,a;
	m=d/p;
    for(i=1;i<=m;i++){
        if(prime(i)==true){
            c=0;
            for(int j=1;j<p;j++){
                a=i+j*m;
                if(prime(a)){
                    c++;
                }
                }
                
            if(c==p-1){
                ans++;
            }
            }
        
    }
    
	cout<<ans<<endl;
	return 0;
}
