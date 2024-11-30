#include<iostream>
using namespace std;
int main(){
	float balance , withdraw;
	
	cout<<"Enter your balance "<<endl;
	cin>>balance;
	
	do{
		cout<<"Enter your amount to withdraw (press 0 to exit)"<<endl;
		cin>>withdraw;
		
		if(withdraw==0){
		cout<<"Transaction cancelled"<<endl;
		break;
}
		if(withdraw>balance || withdraw % 500!=0){
			cout<<"Transaction invalid"<<endl;
			continue;
		}
		balance-=withdraw;
		cout<<"Your withdrawal amount is $"<<balance<<endl;
	}
	while(withdraw!=0);
	
	
	

	
	
	
	return 0;
}
