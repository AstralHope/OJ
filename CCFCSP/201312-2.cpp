#include<bits/stdc++.h> 
using namespace std;
int main(){
	string str;
	cin>>str;
	//先去掉'-''
	str.erase(11,1);
	str.erase(5,1);
	str.erase(1,1);
	int isbn[9];
	int ans=0;
	for(int i=0;i<9;i++){
		ans+=(str[i]-'0')*(i+1);
	}
	char c='X';//直接先默认余10，方便其他场合处理
	if(ans%11<10){
		c=ans%11+'0';
	}
	if(str[9]==c){
		cout<<"Right";
	}else{
		str[9]=c;
		//把'-'加回来
		str.insert(1,"-");
		str.insert(5,"-");
		str.insert(11,"-");
		cout<<str;
	}
	return 0;
}