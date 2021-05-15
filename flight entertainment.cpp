#include<bits/stdc++.h>

using namespace std;

bool search(vector <int> p,int key);

int main(){
	int flt_len;
	cout<<"Enter the flight length"<<endl;
	
	cin>>flt_len;
	
	vector<int> mtime;
	int k,sec,flag=0;
	cout<<"Enter the movie length and enter -1 to stop"<<endl;
	while(1){
		cin>>k;
		if(k == -1)
		break;
		else
		cout<<"Enter the movie length"<<endl;
		mtime.push_back(k);
	}
	bool check;
	for(int i=0;i<mtime.size();i++){
		sec = flt_len-mtime[i];
		check = search(mtime,sec);
		if(sec!=mtime[i] && check)
		flag=1;
	}
if(flag==1)
cout<<"Two movies exist";
else
cout<<"There are no such movies";	

return 0;
}

bool search(vector<int> p, int key ){
	
	int high,mid,low;
	low = 0;
	high = p.size()-1;

	
	while(low<high){
			mid = low + (high-low)/2;
			
			if(key==p[mid])
			return true;
			else if(p[mid]<key)
			low = mid+1;
			else
			high = mid-1;
			
		
	}
	
	return false;
	
}
