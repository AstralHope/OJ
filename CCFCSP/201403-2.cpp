#include<bits/stdc++.h> 
using namespace std;
//利用数组的对应位置记录对应数字是否出现

class Windows
{
public:
	Windows(int x1,int y1,int x2,int y2);
	~Windows();
	int x1,y1,x2,y2;
};

Windows::Windows(int x1,int y1,int x2,int y2){
	this -> x1=x1;
	this -> y1=y1;
	this -> x2=x2;
	this -> y2=y2;
}


int main(){
	int N,M;
	cin>>N>>M;
	vector<Windows> v;
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	v.push_back(w);
	while(N--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		Windows w(x1,y1,x2,y2);
		v.push_back(w);
	}
	cout<<v[0].x1;
	return 0;
}