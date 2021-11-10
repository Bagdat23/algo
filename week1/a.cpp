#include <iostream>
using namespace std;
struct st{
	int kol[100];
	int cnt = 0;
	void push(long long x){
		kol[cnt++] = x;
	}
	void pop(){
		if(cnt == 0){
			cout << "error\n";
		}
		else{
			cout << kol[cnt-1] << endl;
			kol[cnt-1]=100;
			cnt--;
		}
	}
	void back(){
		if(cnt == 0){
			cout << "error\n";
		}
		else{
			cout << kol[cnt-1] << endl;
		}
	}
	void size(){
		cout << cnt << endl;
	}
	void clear(){
		for(int i=0;i<cnt;++i)
			kol[cnt] = 100;
		cnt = 0;
		cout << "ok\n";

	}
};
int main(){
	st xxx;
	string sss;
	long long nnn;
	while(cin >> sss){
		if(sss == "exit"){
			cout << "bye";
			break;}
		if(sss=="push"){
			cin >> nnn;
			xxx.push(nnn);
			cout << "ok\n";
		}
		if(sss=="size") xxx.size();
		if(sss=="pop") xxx.pop();
		if(sss=="back") xxx.back();
		if(sss=="clear") xxx.clear();
	}
}