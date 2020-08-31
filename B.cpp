#include<bits/stdc++.h>
using namespace std;


int prime(int n)
{
  int  flag = 0;

  for(int i=2;i<=n/2;i++)
  {
      if(n%i == 0)
      {
          flag = 1;
          break;
      }
  }
  return flag;
}

int main(){

int d;
int p;
cin>>d;
cin>>p;
int flag1=0;
int m=d/p;
int count = 0;
int i,k;
int l,o;
for(int i=1;i<=m;i++){
	l=prime(i);
	if(l==0){
		k=i;
		while(k+m<d ){
			k=k+m;
			o=prime(k);
			if(o!=0){
				flag1=1;
				break;
			}
			
			
		}
		
		if(flag1==0){
			count++;
		}
		
	}
}

cout<<count;

return 0;}
