#include<iostream>
using namespace std;
void solve(){
	int a,b;
	cin >>a;
	cin>>b;
	cout<<a+b<<endl;
}
int main(){
	int a;
	cin>>a;
	while(a>0){
		solve();
		a--;
	}
	return 0;
}