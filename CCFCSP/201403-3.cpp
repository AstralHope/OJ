#include<bits/stdc++.h>
using namespace std;
int main(){
	string command;
	cin>>command;
	int option[26]={0};//0为无该选项，1为无参数；2为有参数
	vector<char> nopara,para;
	for(int i=0;i<command.size();i++){
		if(i<command.size()-1 && command[i+1] == ':'){
			option[command[i++]-'a']=2;
		}else{
			option[command[i]-'a']=1;
		}
	}
	int N;
	cin>>N;
	cin.ignore();
	for(int i=1;i<=N;i++){
		string para[26]={""};//存放参数
		string tmp;
		getline(cin,tmp);
		istringstream iss(tmp);
		iss>>tmp;
		while(iss>>tmp){
			if(tmp[0]!='-' || tmp.size()!=2 || option[tmp[1]-'a'] == 0){break;}
			if(option[tmp[1]-'a'] == 1){para[tmp[1]-'a']=" ";}
			if(option[tmp[1]-'a'] == 2){
				string temp;
				if(iss>>temp){
					para[tmp[1]-'a']=temp;
				}else{break;}
			}
		}
		cout<<"Case "<<i<<":";
		for(int j=0;j<26;j++){
			if(para[j]==" "){
				cout<<" -"<<(char)(j+'a');
			}else if(para[j]!=""){
				cout<<" -"<<(char)(j+'a')<<" "<<para[j];
			}
		}
		cout<<endl;
	}
	return 0;
}