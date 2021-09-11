//C++ Program to Check if a number is palindrom sequence
#include<iostream>
using namespace std;
int main()
{
    int val,org, rev, remainder;
    rev = 0; //initialization
    cout<<"Enter number to check";
    cin>>val;
    org= val;//assign value to another variable
    while(val!=0)
    {
        remainder= val%10;
        rev= rev*10+remainder;
        val=val/10;
    }
    if(org==rev){
        cout<<"Number is palindrome";
    }
    else
       cout<<"Number is not Palindrome";
    return 0;
}
