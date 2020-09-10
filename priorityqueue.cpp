#include<iostream>
using namespace std;
class priority
{
int arr[10];
int front,rear,data,max,i,j;
public:
priority() //constructor should be used or call create function separately
{
front=-1;
rear=-1;
i=0;j=0;
}
void priority_ins(int data,int max)
{
    cout<<"\n Data to be inserted is: "<<data;
if(rear>=max-1)
{
cout<<"overflow\n";
}
else if((front==-1)&&(rear==-1))
{
front=0;
rear++;
cout<<"\nRear: "<<rear;
arr[rear]=data;
cout<<"inserted element is:"<<arr[rear]<<"\n";
}
else
{
cout<<"\n Rear is :"<<rear;
cout<<"\n Passed data is:"<<data;
check(data);
rear++;
}
}
void check(int data)
{
    int i,j;
 
    for (i = 0; i <= rear; i++)
    {
        if (data >= arr[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = data;
            return;
        }
    }
    arr[i] = data;
}

void priority_del()
{
if(front==max-1)
{
cout<<"underflow";
}
else
{
cout<<"Deleted Element is :"<<arr[front];
front=front+1;
}
}
void dis()
{
cout<<"\n Rear is: "<<rear;
cout<<"\n Front is: "<<front;
cout<<"\nthe queue consists of the following elements:\n";

for(i=front;i<=rear;i++)
{
cout<<arr[i]<<"\t";
}
}
};
int main()
{
priority x;
int max;
cout<<"enter the size of the queue\n";
cin>>max;
x.priority_ins(10,max);
x.dis();
x.priority_ins(5,max);
x.dis();
x.priority_ins(20,max);
x.dis();
x.priority_del();
x.dis();

return 0;
}
