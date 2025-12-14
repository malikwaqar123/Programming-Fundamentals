#include <iostream>
using namespace std;
int main(){
	
	char grade;
	int years;
	double basic = 0, bonus = 0,gross = 0, tax = 0,net = 0;
	
	cout<<"Enter grade A,B,C:";
	cin>>grade;
	cout<<"Enter years of Service: ";
	cin>>years;
	
	if (grade == 'A' || grade == 'a')
	basic = 50000;
	
	if (grade == 'B' || grade == 'b')
	basic = 30000;
	
	if (grade == 'C' || grade == 'c')
	basic = 20000;
	
    if (years >=10)
    bonus = basic*0.10;
    
    if (years >=5 && years<=9)
    bonus = basic*0.05;  
	
	if (years < 5)
    bonus = 0;
	
	gross = basic+bonus;
	
	if (gross>40000)
	tax = gross*0.20;
	
	if (gross>=30000 && gross <=40000)
	tax = gross*0.10;
	
	if (gross<30000)
	tax = 0;
	
	net = gross-tax;
	cout<<"Employee Grade: "<<grade<<endl;
	cout<<"Years of Service: "<<years<<endl;
	cout<<"Basic Salary: "<<basic<<endl;
	cout<<"bonus: "<<bonus<<endl;
	cout<<"Gross Salary: "<<gross<<endl;
	cout<<"Tax Deduction: "<<tax<<endl;
	cout<<"Net Salary ="<<net<<endl;
	
	return 0;
}
