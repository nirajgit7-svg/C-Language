#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    if(number%5==0)
    {
        cout<<"Given number is divisible by 5";
    }
    else{
        cout<<"Given number is not divisible by 5";
    }
}