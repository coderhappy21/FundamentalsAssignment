#include<iostream>
using namespace std;
int main(){

//predict the output -
int x = 5;
cout<<x++ <<" "<<++x;

//output will be 6 ,7 

//EXPLANATION -
//first we have x = 5
//then we print x++(post increment) it print value first then increment it
//then we print ++x(pre increment) first its increment , then print
//but here , both condition at same time so 5 , 7 (two times increment)



}