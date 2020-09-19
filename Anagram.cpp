#include<bits/stdc++.h>

using namespace std;

int main(){
	int flag=0;
	string s1,s2;
	cin>>s1>>s2;
	
	int l1=s1.size();
	int l2=s2.size();
	if(l1!=l2){
		cout<<"Not an Anagram";
	return 0;	
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	for(int i=0;i<l1;i++){
		if(s1[i]!=s2[i]){
			flag=1;
			break;
		}
		
	}
	
	if(flag==0)
		cout<<"Anagram Found";
	else
		cout<<"Not an anagram";	
		
			
	
	
	return 0;
}
