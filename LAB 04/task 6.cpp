#include <iostream>
using namespace std;
int main(){
	
	double balance, withdrawlAmount;
	cout<<"Enter the account balance: ";
	cin >>balance;
	cout<<"Enter withdrawl amount: ";
	cin >>withdrawlAmount;
	
	if(withdrawlAmount <=  balance ){
		balance = balance-withdrawlAmount;
		cout<<"Withdraw successful:"<<endl;
		cout<<"The remaining balance is: "<<balance<<endl;
	}
	else
	{
		cout<<"Insufficient balance."<<endl;
	}

	
	return 0;
}
