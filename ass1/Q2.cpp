//Write a C++ program that will ask for a temperature in Celsius and display it in degree Fahrenheit.[F=9C/5+32]
#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"Enter temperature in Celcius"<<endl;
    cin>>c;
    f=(9*c/5)+32;
    cout<<"Temperature in fahrenheit is "<< f <<endl;
}