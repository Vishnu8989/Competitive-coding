#include <iostream>
#include<string>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int temp = 0;
	for (int i = 0; i < a; ++i)
	{
		string A;
		cin>>A;
		if(A[1]=='+'){
			temp++;
		}else{
			temp--;
		}
	}
	cout<<temp;
	return 0;
}