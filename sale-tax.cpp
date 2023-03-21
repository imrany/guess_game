#include<iostream>
using namespace std;

int main(){
    const double tax = 0.05;
    int sale;

    sale=4000000;
	    
    int sale_tax= tax*sale;

    cout<<"The sale tax is: "<<sale_tax<<endl;
    return 0;
}
