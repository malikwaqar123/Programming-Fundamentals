#include<iostream>
using namespace std;
int main(){
	
	int salary , workExperience;
    cout<<"Enter your salary: $";
    cin>>salary;
    cout<<"Enter you work experience: ";
    cin>>workExperience;
    if(salary>=25000){
    	cout<<"you are eligible for loan."<<endl;
	}
    else{
    	if(workExperience>5 && salary >= 20000){
    		cout<<"you are eligible for loan."<<endl;
		}
		else{
			cout<<"You are not eligible for loan."<<endl;
		}
	}
    
	return 0;
}

