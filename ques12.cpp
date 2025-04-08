#include<iostream>
using namespace std;
int main(){

//predict the output -
int x = 4 ,y = 2 ,z ;
z = x++ * --y  + ++x;
cout<<x<<" "<<y<<" "<<z<<endl;

//Ans will be x = 6 , y = 1 , c  = 10

//EXPLANATION -
//first we have x = 4 , y = 2 , z
// into z first we use value of x = 4 then makes it 5 by increment
//then, into z first we decrement value of y = 2 become 1 then use it
//then, into z first we decrement value of y = 2 become 1 then use it
//but again value of x preincremnt , it will be 6 and then use
//so z will be 4*1 + 6 = 10
//after we print it x value will 6 bcz of two times increment and y = 1 bcz decrement


}