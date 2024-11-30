#include<iostream>
using namespace std;
int main(){
	
	int items;
	
	cout<<"Enter number of items";
	cin>>items;
	
	double total=0.0;
	double price;
	int i=1;
	
	while(i<=items){
		 cout<<"Enter price of items"<<endl;
		 cin>>price;
	
		 if(price < 0){
		 	cout<<"Negative price ignored"<<endl;
		 	continue;
	}
		 if(price==0){
		 	cout<<"Zero price entered"<<endl;
		 	break;
		 	
		 }
		 total+=price;
		 i++;
	}
	
	cout<<"Your Total bill is $"<<total<<endl;
	
	
	
	
	return 0;
}
