#include<bits/stdc++.h> 
using namespace std;
//利用数组的对应位置存储对应数字出现的次数
int main(){
	int n;
	int s[10001]={0};
	cin>>n;
	int time=0;
	while(n--){
		int tmp;
		cin >>tmp;
		s[tmp]++;
	}
	int ans=time=0;
	for(int i=10000;i>0;i--){
		if (s[i]>=time){
			ans = i;
			time = s[i];
		}
	}
	cout<<ans;
	return 0;
}