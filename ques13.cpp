#include<iostream>
#include<cmath>
using namespace std;
int main(){

//take two point from user and find its euclidean distance
float x1,y1;
cout<<"enter first point :";
cin>>x1>>y1;

float x2,y2;
cout<<"enter second point :";
cin>>x2>>y2;

float distance;

distance = sqrt((x2-x1)*2 + (y2-y1)*2);

cout<<"distance of two points is: "<<distance;


}