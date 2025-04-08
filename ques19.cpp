#include<iostream>
using namespace std;
int main(){

//predict the output -
int a = 10 , b = 5;
int c = a+=b -= 2;
cout<<a<<" "<<b<<" "<<c;

//output will be 13 , 3 ,13 

//EXPLANATION -
//bcz here, we solve it from right to left bcz of same hirerchy operator
//+ and - has same hirechy 
//first solve b-=2 , b was 5 but now b is 3
//then add current value of b to a (a+=b) 10+3 = 13 , now a is 13
//so, c is 13
}