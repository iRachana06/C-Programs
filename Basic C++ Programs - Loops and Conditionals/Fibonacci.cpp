//C++ Program to Print Fibonacci Series
//Each number is the sum of the two preceding ones

#include<iostream>
using namespace std;
int main()
{
int i,j,n, term[20];
 term[0]=0;
 term[1]=1;
 cout<<"How many terms you want in Fibonacci Series? ";
 cin>>n;
 cout<<"\n Fibonacci Series: " ;
 cout << term[0] << " " <<term[1] << " ";
 for(i=2;i<n;i++)  //i starts from 2 as we directly printed 1st and 2nd term
 {
     term[i]=term[i-1]+term[i-2]; // adding the 2 preceding terms
     cout<<term[i]<< " ";
 }
   return 0;
}
