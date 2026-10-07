#include<iostream>
using namespace std;
int main ()
{
    cout<<"Program to cheack the given number is even or odd \n";
    int no;
    cout<<"Enter the number : ";
    cin>>no;
    if(no%2==0)
    {
        cout<<"Given number is Even ";
    }
    else{
        cout<<"Given number is odd";
    }
}