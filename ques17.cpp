#include<iostream>
using namespace std;
int main(){

//predict the output - 
int a = 20 , b = 6 , c = 4;
cout<<a%b + c%a;

//output will be 6

//EXPLANATION -
//acc to the property of modulas(remeinder)-
//a%b = 20%6 = 2
//c%a = 4%20 = 4 bcz, 4 is smaller than 20 so rem will 4
//if a is smaller than b in (a%b) a will be as reminder
//and finally, 2+4 = 6
}