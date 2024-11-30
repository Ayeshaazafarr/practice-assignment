#include<iostream>
using namespace std;
int main(){
	
	int i=1;
	
	while(i<=50){
		if(i%5==0){
			i++;
			continue;
		}
		if(i%2==0){
			cout<<"The house number is even"<<i<<endl;
		}else{
			cout<<"The house number is odd"<<i<<endl;
		}
		i++;
	}
	
	
	return 0;
}
