#include<iostream>
using namespace std;

int main(){
	int r;
	int num;
	cout<<"Enter Number : ";
	cin>>num;
	while(num>0){
		r=num%10;
		cout<<r;
		num=num/10;
	}
}
	
	
