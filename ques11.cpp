#include<iostream>
using namespace std;
int main(){

//predict the output -
int a = 3 ,b = 5 , c;
c = a++ + ++b;
cout<<a<<" "<<b<<" "<<c<<endl;

//Ans will be a = 4 , b = 6 , c  = 9

//EXPLANATION -
//first we have a = 3 , b = 5 , c
//then into c first we use value of a = 3 then makes it 4 by increment
//and into c first we increment value of b = 5 become 6 then use it
//so c will be 3+6 = 9
//when we print value of a will 4 bcz of increment and b will 6


}