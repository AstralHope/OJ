#include<bits/stdc++.h> 
using namespace std;
//利用数组的对应位置记录对应数字是否出现
int main(){
	int N;
	cin>>N;
	vector<bool> v(1001,false);
	int ans=0;
	while(N--){
		int tmp;
		cin >> tmp;
		tmp = abs(tmp);
		if(v[tmp]){
			ans++;
		}else{
			v[tmp]=true;
		}
	}
	cout<<ans;
	return 0;
}