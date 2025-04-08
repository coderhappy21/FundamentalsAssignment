#include<iostream>
using namespace std;
int main(){

//predict the output -
int x = 5;
cout<<x++<<endl;
cout<<++x;

//output will be 5 ,7 

//EXPLANATION -
//first we have x = 5
// x++(post increment) it means it prints value first then increment it
// ++x(pre increment) it means it increment value first then print it
//means,initially x was 5 then value become 6 after x++ 
//then it becomes 7 after ++x , but bcz of post inc. it prints 5


}