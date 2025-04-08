#include<iostream>
using namespace std;
int main(){

//predict the output
int a = 6 , b = 3;
 a+= b *=2;
cout<<a<<" "<<b;

//output will be 12 ,6

//EXPLANATION -
//bcz here, * hirerchy is more than + so solve it first
//first solve b*=2 , b was 3 but now b is 6
//then add current value of b to a (a+=b) 6+6 = 12 , now a is 12
}