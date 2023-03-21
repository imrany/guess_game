#include<iostream>
using namespace std;

//perimeter
int perimeter(int a, int b){
    return 2*(a+b);
}
//area
int area(int a,int b){
    return a*b;
}

int main(){
    cout<<"The perimeter of the rectangle is :"<<perimeter(8,7)<<endl;
    cout<<"The area of the rectangle is :"<<area(8,7)<<endl;
}