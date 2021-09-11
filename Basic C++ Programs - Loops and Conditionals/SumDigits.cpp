// C++ Program to find the Sum of Digits of a Number
#include <iostream>
using namespace std;
int main() {
    int num, rem=0, sum=0, temp;
    cout<<"Enter the number to find Sum of Digits";
    cin>> num;
    temp = num;
    while (num!=0)
    {
    rem=num%10;    
    sum =sum + rem;  // Similar logic as reversing a number
    num=num/10;    
    }
        cout<<"Sum of digits of " << temp << " is : "<<sum;
return 0;
}
