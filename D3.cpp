#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;	
	vector<int>start;
	vector<int>stop;
	
	for(int i=0;i<n;i++){
	  int a,b;
	  cin>>a>>b;
	  start.push_back(a);
	  stop.push_back(a+b);
  }
   
   sort(start.begin(),start.end());
	sort(stop.begin(),stop.end());
  
   int ans[n];
   for(int i=0;i<n;i++){
   	
       int X,Y;
   
        X=i+1;
	    Y= lower_bound(stop.begin(), stop.end(), start[i])-stop.begin();
        int total_intersection=X-Y;
       ans[i]=total_intersection;
	}


   cout<<*max_element(ans,ans+n);
   return 0;
}
