#include<bits/stdc++.h>
using namespace std;
int main(){
	string command;
	cin>>command;
	int option[26]={0};//0Ϊ�޸�ѡ�1Ϊ�޲�����2Ϊ�в���
	vector<char> nopara,para;
	for(int i=0;i<command.size();i++){
		if(i<command.size()-1 && command[i+1] == ':'){
			option[command[i++]-'a']=2;
		}else{
			option[command[i]-'a']=1;
		}
	}
	// cout<<"����������ѡ�\n";
	// for(int i=0;i<26;i++){
	// 	if(option[i]==1){
	// 		cout<<(char)(i+'a')<<" ";
	// 	}
	// }
	// cout<<endl;
	// cout<<"��������ѡ�\n";
	// for(int i=0;i<26;i++){
	// 	if(option[i]==2){
	// 		cout<<(char)(i+'a')<<" ";
	// 	}
	// }
	int n;
    cin >> n;
    cin.ignore();
    for(int i=1; i<=n; i++) {
    	string argument[26];
        string temp;
        getline(cin, temp);
        stringstream ss(temp);
        ss >> temp;
        while(ss >> temp) {
            if(temp[0] == '-') {
                int last_arg = temp[1] - 'a';
                if(option[last_arg] == 0) { // �ǺϷ�ѡ�� 
                    break;
                }
                else if(option[last_arg] == 1) {
                    argument[last_arg] = " ";
                }
                else if(option[last_arg] == 2) {
                    if(ss.eof()) break; // �в���ѡ��û��������� 
                    ss >> temp;
                    argument[last_arg] = temp;
                }
            }
            else { // �ǺϷ�����
                break;
            }
        }

        cout << "Case " << i << ":";
        for(int j=0; j<26; j++) {
            if(option[j] == 1 && argument[j] != "") {
                cout << " -" << char(j + 'a');
            }
            if(option[j] == 2 && argument[j] != "") {
                cout << " -" << char(j + 'a') << ' ' << argument[j];
            }
            argument[j] = "";
        }
        cout << endl;

    }
//	int N;
//	cin>>N;
//	string tmp;
//	getline(cin,tmp);
//	for(int i=1;i<=N;i++){
//		string para[26]={""};//��Ų���
//		getline(cin,tmp);
//		istringstream iss(tmp);
//		iss>>tmp;
//		while(iss>>tmp){
//			if(tmp[0]!='-' || tmp.size()!=2 || option[tmp[1]-'a'] == 0){break;}
//			if(option[tmp[1]-'a'] == 1){para[tmp[1]-'a']=" ";}
//			if(option[tmp[1]-'a'] == 2){
//				string temp;
//				if(iss>>temp){
//					cout<<tmp<<" ";
//					para[tmp[1]-'a']=temp;
//				}else{break;}
//			}
//		}
//		cout<<"Case "<<i<<":";
////		for(int j=0;j<26;j++){
////			cout<<para[j];
////		}
//		for(int j=0;j<26;j++){
//			if(para[j]==" "){
//				cout<<" -"<<(char)(j+'a');
//			}else if(para[j]!=""){
//				cout<<" -"<<(char)(j+'a')<<" "<<para[j];
//			}
//		}
//		cout<<endl;
//	}
	return 0;
}
