#include<iostream>
using namespace std;
int main(){

//predict the output
int x = 0, y = 10;
 bool result = (x != 0) && (y/x>2);
cout<<result;
//output will be 0

//EXPLANATION -
//bcz here,comparison is happening
//x not equals to zero (false bcz x is 0) 
//then (y/x>2) it gives false means 0 again
//finally (0 && 0)  0 and 0 gives false ( 0 as output)

}