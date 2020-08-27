#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> data;
	data.clear();
	while(n--){
		int tmp;
		cin>>tmp;
		data.push_back(tmp);
	} 
	int ans=0;
	for(int i=0;i<data.size()-1;i++){
		for(int j=i+1;j<data.size();j++){
			if(data[i]-data[j] == -1 || data[i]-data[j] == 1){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
