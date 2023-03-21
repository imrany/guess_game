#include<iostream>
using namespace std; 

int sum(int a,int b){
	return a+b;
}

int main(){
	string name="The sum is: ";
	
	cout<<name<<sum(3,5)<<endl;
}
