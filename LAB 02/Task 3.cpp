#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	double test_score1=85.5;
	double test_score2=90.75;
	double test_score3=88.25;
	
	double average= (test_score1+test_score2+test_score3)/3;
	
	cout<<"The average of "<<test_score1<<" , "<<test_score2<<" and "<<test_score3<<" = "<<fixed<<setprecision(2)<<average<<endl;
	
	
	return 0;
}
