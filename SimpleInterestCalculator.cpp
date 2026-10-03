#include<iostream>
using namespace std;
int main()
{
    float  prin, rate, time, si;
    cout<<"Program to calculat Simple Interest\n ";
    cout<<"Enter Princpel Amount : ";
    cin>>prin;
     cout<<"Enter Rate Of Interest  : ";
    cin>>rate;
     cout<<"Enter Time Period : ";
    cin>>time;
    si = (prin*rate*time )/100;
    cout<<si;



}