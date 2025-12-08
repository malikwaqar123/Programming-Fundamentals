#include <iostream>
using namespace std;
int main(){
	
	int marks;
    cout<<"Enter marks out of 100: ";
    cin>>marks;
    
    string grade="";
    
    if(marks>=90){
    	grade = "A+";
	}
	if(marks>=80 && marks<90){
		grade = "A";
	}
	if (marks>=70 && marks<80){
		grade = "B";
	}
	if (marks>=60 && marks<70){
		grade = "C";
	}
	if (marks<60){
		grade = "Fail";
	}
	
	cout<<"Grade: "<<grade<<endl;
	
	
	return 0;
}
