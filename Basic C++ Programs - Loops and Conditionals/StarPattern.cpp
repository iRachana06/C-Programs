// Demonstrate For Loops by Printing Star Pattern

#include<iostream>
using namespace std;

int main()
{
   int i,j,n;
   cout<<"How many rows of stars you want? ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i; j++)
       {
           cout<<"*" <<" "; //for every row , same no of stars:row 1 has 1 , 2 has 2 stars
       }
       cout<<"\n"; //After evry row, new row to be created
   }
   
    return 0;
}
