#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
//#define q_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

const long long val = 1000000007;
const long long v = 100001;

bool prime(ll n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int main(){
	//q_io;
	ll d, p, ans, c, ed, i, a;

	ans=0;
	cin>>d>>p;
	ed = d/p;
    for (i = 1; i <= ed; i++)
    {
        if (prime(i)==true)
        {
            c=0;
            for (ll j = 1; j < p; j++)
            {
                a=i+j*ed;
                if (prime(a))
                {
                    c++;
                }
                
            }
            if (c==p-1)
            {
                ans++;
            }
            
            
        }
        
    }
    
	cout<<ans<<endl;
	return 0;
}
