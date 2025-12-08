#include <iostream>
using namespace std;
int main(){
	
	int num1;
	cout<<"Enter an integer : ";
	cin>>num1;
	
	string r1=(num1%2==0)?"even":"odd";
	cout<<"The number "<<num1<<" is "<<r1<<endl;
	
	
	
	
	return 0;
}
