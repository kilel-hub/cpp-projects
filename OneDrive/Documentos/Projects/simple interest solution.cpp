//Dennis kilel
//BSE-01-0059/2025
//Simple interst funnction
//8/6/2025

#include<iostream> 
#include <cmath> 

using namespace std;

int interest(int p, int t,int r){
	return (p*r*t)/100;
}

int main(){
	int ammount,principle,time,rate;
	
	cout<<"enter your principle: "<<endl;
	cin>>principle;
	
	cout<<"enter the time taken: "<<endl;
	cin>>time;
	
	cout<<"enter the rate: "<<endl;
	cin>>rate;
	
	ammount=interest(principle,time,rate);
	cout<<"calling simple interest: "<<ammount<<endl;
	
	
	
	return 0;
}