//Dennis kilel
//BSE-01-0059/2025
//Functions in C++
//8/6/2025

#include<iostream> 
#include <cmath> 

using namespace std;
int addition(int x, int y){
	return x + y;
}

int division(int x, int y){
	return x/y;
}

int multiplication(int x, int y){
	return x * y;
}
int main(){
	int sum,quotient,multiply;
//addition	
	sum=addition(10,20);
	cout<<"calling addition: "<<sum<<endl;
//division
	quotient=division(10,5);
	cout<<"calling division: "<<quotient<<endl;
//multiplication	
	multiply=multiplication(40,12);
	cout<<"calling multiplication: "<<multiply<<endl;


	return 0;
}