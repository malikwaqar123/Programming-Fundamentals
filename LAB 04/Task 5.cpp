#include <iostream>
using namespace std;
int main(){
	
    char signal;
	cout<<"Enter the color of the signal as R (red), G(green), Y(yellow): ";
	cin>>signal;
	
	if(signal == 'R'||  signal == 'r'){
		cout<<"Stop"<<endl;
	}
	if(signal == 'G' || signal == 'g'){
		cout<<"Go"<<endl;
	}
	if(signal == 'Y' || signal == 'y'){
		cout<<"Slow down"<<endl;
	}
	
	
	return 0;
}
