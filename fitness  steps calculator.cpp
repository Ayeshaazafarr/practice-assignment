#include<iostream>
using namespace std;
int main(){
	
	int days=1;
	double totalsteps=0.0 , steps;
	
	while(days<=7){
		
		cout<<"Enter no of steps on day  "<<days<<endl;
		cin>>steps;
		
		if(steps<1000){
			cout<<"WARNING: YOUR AVERAGE STEPS IS LOW";
			
		}
		totalsteps+=steps;
		days++;
	}
	
	
	cout<<"Your average steps this week is "<<totalsteps/7<<endl;
	
	
	return 0;
}
