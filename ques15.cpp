#include<iostream>
using namespace std;
int main(){

//take input n and print sum of square of all natural num till n
int n;
cout<<"enter a number :";
cin>>n;

int sum = 0;
int square = 0;
for(int i = 1; i<=n ; i++){
    square = i*i;
    sum+=square;
    cout<<"square of "<<i<<" is : "<<square<<endl;
}

cout<<"Sum of squares from 1 to n: "<<sum;


}