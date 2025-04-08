#include<iostream>
using namespace std;
int main(){

//predict the output -
int a = 5 , b = 10 , c = 15;
bool result = a<b && b<c || c == 10;
cout <<result;

//output will be 1 means true

//EXPLANATION -
//bcz here, comparison is happening
//(a<b) computer see it as a is less than b or not (true == 1) yes , a is less than b
//(b<c) computer see it as b is less than c or not (true == 1)
//bcz && hirerchy is more so calculate it first (1 and 1) means true and true = (1)
//then c == 10 (false == 0 ) bcz c is 15
//then 1 || 0 (true or false always be true)
//so , ans is true means 1 stored in result
}