#include<iostream>
using namespace std;
int main(){

//predict the output
int x = 5 ,y = 3;
cout<<(x & y)<<" "<<(x && y);

//output will be 1 , 1

//EXPLANATION -
//x and y both integers contains non-zero value which always gives(true == 1)
//only 0 gives false , all positive value gives true means 1
}