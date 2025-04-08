#include<iostream>
using namespace std;
int main(){

//take two fraction num as input and print their sum
float num1,deno1;
cout<<"enter the numerator & denominator of first num :";
cin>>num1>>deno1;

float num2,deno2;
cout<<"enter the numerator & denominator of second num :";
cin>>num2>>deno2;

float sum;
sum =( num1/deno1) + (num2/deno2);
cout<<"Sum of two fractions: "<<sum;


}