#include<bits/stdc++.h>
using namespace std;


bool prime(int n){
	 if(n<=1) 
        return false; 
    if(n<=3) 
        return true;
    if(n%2==0 || n%3==0) 
        return false; 
    for(int i=5;i*i<=n;i=i+6) 
        if(n%i==0 || n%(i+2)== 0) 
            return false; 
  
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
