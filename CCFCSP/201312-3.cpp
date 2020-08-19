#include<bits/stdc++.h> 
using namespace std;
int area(vector<int>& v,int pos){
	int counter=1;
	for(int i=pos-1;i>=0;i--){
		if(v[i]>=v[pos]){counter++;}else{break;}
	}
	for(int i=pos+1;i<v.size();i++){
		if(v[i]>=v[pos]){counter++;}else{break;}
	}
	return counter*v[pos];
}

int main(){
	int n,tmp;
	vector<int> v;
	cin>>n;
	while(n--){
		cin>>tmp;
		v.push_back(tmp);
	}
	int ans=0;
	for(int i=0;i<v.size();i++){
		if(ans<area(v,i)){
			ans=area(v,i);
		}
	}
	cout<<ans;
	return 0;
}