#include<iostream>
using namespace std;
int main(){

//predict the output -
int a = 4;
int b = 5;
a++, b-- ;
cout<<++a<<" "<<b--;

//Ans will be a  = 6 , b = 4

//EXPLANATION -
//first we have a = 4 , b = 5
//then we do a++ , b-- values will changed a = 5 , b = 4
//then we print ++a(pre increment) it makes value a = 6
//then we print b--(post decrement) it makes value b = 3 but , 
//b value will print 4 bcz it prints first then it decrement 
//if we print value of b again it gives  b  = 3



}