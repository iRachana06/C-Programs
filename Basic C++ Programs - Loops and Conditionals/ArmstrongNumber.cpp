// C++ Program to check a number is Armstrong Number or Not
// Armstrong number- If sum of cubes of its digits is equal to that number
#include <iostream>
using namespace std;
int main() {
    int num, sumcube=0, rem, temp;
    cout<<"Enter the number to check";
    cin>> num;
    temp=num; //store the original value in separate variable for comparison
    while (num>0)
    {
    rem=num%10;    
    sumcube =sumcube +(rem*rem*rem);    
    num=num/10;    
    }
    if(temp==sumcube)
    {
        cout<<"Number is Armstrong Number";
    }
    else 
        cout<<"Number is not Armstrong Number";
return 0;
}
