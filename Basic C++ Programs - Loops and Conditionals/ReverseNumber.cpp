// C++ Program to Reverse a Number

#include <iostream>
using namespace std;
int main() {
    int num, rem=0, numrev=0;
    cout<<"Enter the number to reverse";
    cin>> num;
    while (num!=0)
    {
    rem=num%10; // This step stores last digit of number - we get remainder using % operator in variable rem
    numrev =numrev*10 + rem; //initially numrev=0, value in rem variable is added to numrev*10
    num=num/10;  //Remove last digit from the num variable- If input is 3 digit number ->After 1 while loop it has 2 digits, after 2nd-> has 1 digit and after 3rd no digit   
    }
        cout<<"Reverse of Number is : "<<numrev;
return 0;
}
