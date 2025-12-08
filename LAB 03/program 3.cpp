#include <iostream>
using namespace std;
int main(){
	
	int num1,loyal;
	cout<<"Enter your account balance: $";
	cin>>num1;
	cout<<"Are you a loyal coustmer ? (1 for yes , 0 for no): ";
	cin>>loyal;
	
	string AccountType = (num1<100)?"Low Balance Account":(num1<=500)?"Standard Account":"Premium Account";
	cout<<"Account type: "<<AccountType<<endl;
	
	string offerStatus = (num1>=200 && loyal ==1)?"Eligible":"Not Eligible";
	cout<<"Special Offer Status : "<<offerStatus<<endl;
	
	return 0;
}
