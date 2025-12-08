#include <iostream>
using namespace std;
int main(){
	
	double item1= 12.95;
	double item2= 24.95;
	double item3= 6.95;
	double item4= 14.95;
	double item5= 3.95;
	
	const double sales_tax_rate= 0.06;   //6% is equal to 6/100 and it is equal to 0.06.
	
	cout<<"Price of item 1: $"<<item1<<endl;
	cout<<"Price of item 2: $"<<item2<<endl;
	cout<<"Price of item 3: $"<<item3<<endl;
	cout<<"Price of item 4: $"<<item4<<endl;
	cout<<"Price of item 5: $"<<item5<<endl;			
	
	double subtotal= item1+item2+item3+item4+item5;
	
	cout<<"Subtotal: $"<<subtotal<<endl;
	
	double sale_tax= subtotal*0.06;        //ab ham ny sales_tax_rate ko yahan par use kia ha.
	
	cout<<"Sales Tax (6%): $"<<sale_tax<<endl;
	
	double total_amount= subtotal+sale_tax;
	
	cout<<"Total: $"<<total_amount<<endl;
	
	
	return 0;
}
