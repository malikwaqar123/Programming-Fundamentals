#include <iostream>
using namespace std;
int main(){
	
	int temp;
	cout<<"Enter the temprature: ";
	cin>>temp;
	
	if(temp>=40){
		cout<<"Stay indoors it is extremely hotd and could be dangerous for health. ";
	}
	else if(temp >=30 && temp <=39){
		cout<<"Drink plenty of water and stay hydrated. ";
	}
	else if(temp>=20 && temp<=29){
	    cout<<"The weather is pleasent and suitable for outdoor activities. ";	
	}
	else{ 
		cout<<"Wearing warm clothes to stay comfortable. ";
	}
	
	return 0;
}
