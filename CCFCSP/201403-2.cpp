#include<bits/stdc++.h>
using namespace std;
//大模拟，利用数组顺序模拟窗口层次

class Windows{
public:
    Windows(int X1,int Y1,int X2,int Y2,int num);
    int x1;
    int y1;
    int x2;
    int y2;
    int num;
};

Windows::Windows(int X1,int Y1,int X2,int Y2,int Num){
    x1=X1;
    y1=Y1;
    x2=X2;
    y2=Y2;
    num=Num;
}

bool onWindows(Windows w,int x,int y){
    if(x>=w.x1 && x<=w.x2 && y>=w.y1 && y<=w.y2){
        return true;
    }
    return false;
}


int main(){
    int N,M;
    cin>>N>>M;
	vector<Windows> windows;
    int num=0;
	while(N--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        Windows w(x1,y1,x2,y2,++num);
        windows.push_back(w);
    }
    while(M--){
        int x,y;
        cin>>x>>y;
        bool flag=true;
        for(int i=windows.size()-1;i>=0;i--){
            if(onWindows(windows[i],x,y)){
                cout<<windows[i].num;
                Windows tmp = windows[windows.size()-1];
                windows[windows.size()-1] = windows[i];
                windows[i]=tmp;
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"IGNORED";
        }
        cout<<"\n";
    }
	return 0;
}