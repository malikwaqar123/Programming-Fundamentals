#include <iostream>
using namespace std;
int main(){
	
	int sub1, sub2, sub3;
	int total;
	float percentage;
	char grade1,grade2, grade3;
	
	cout<<"Enter marks of subject 1: ";
	cin>>sub1;
	cout<<"Enter marks of subject 2: ";
	cin>>sub2;
	cout<<"Enter marks of subject 3: ";
	cin>>sub3;
	
	//Garde for subject 1
	
	if (sub1>=90)grade1 = 'A';
	else if(sub1>=80 && sub1<=89)grade1 = 'B';
	else if(sub1>=70 && sub1<=79)grade1 = 'C';
	else if(sub1>=60 && sub1<=69)grade1 = 'D';
	else grade1 = 'F';
	
	//Grade for subject 2
	
	if (sub2>=90)grade2 = 'A';
	else if(sub2>=80 && sub2<=89)grade2 = 'B';
	else if(sub2>=70 && sub2<=79)grade2 = 'C';
	else if(sub2>=60 && sub2<=69)grade2 = 'D';
	else grade2 = 'F';
	
	//Grade for subject 3
	
	if (sub3>=90)grade3 = 'A';
	else if(sub3>=80 && sub3<=89)grade3 = 'B';
	else if(sub3>=70 && sub3<=79)grade3 = 'C';
	else if(sub3>=60 && sub3<=69)grade3 = 'D';
	else grade3 = 'F';
	
  	if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F'){
		cout<<"Failed"<<endl;
	}
	//total /percentage
	total = sub1 + sub2 + sub3;
	percentage = (total/300.0)*100;
	cout<<"Totak Marks: "<<total<<endl;
	cout<<"Percentage: "<<percentage<<"%"<<endl;
	cout<"Grades";
	cout<<"Subject 1: "<<grade1<<endl; 
	cout<<"Subject 2: "<<grade2<<endl;
	cout<<"Subject 3: "<<grade3<<endl;
	
	//scholorship eligiblity.
	if(grade1 == 'A' && grade2 == 'A' && grade3 =='A' && total>=270){
		cout<<"Eligible for Merit Scholorship. "<<endl;
	}
	else if((grade1 == 'A' || grade1 == 'B')&&
	        (grade2 == 'A' || grade2 == 'B')&&
	        (grade3 == 'A' || grade3 == 'B')&&total >=240){
	        	cout<<"Eligible for Regular Scholorship. "<<endl;
			}
	else{
				cout<<"Not eligible for scholorship. "<<endl;
			}
			
	return 0;
	
}
