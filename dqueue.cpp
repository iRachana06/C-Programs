#include<iostream>
using namespace std;
#define SIZE 10
class dequeue {
   int a[20],front,rear;
   public:
      dequeue();
      void FrontIns(int);
      void RearIns(int);
      void DelFront();
      void DelRear();
      void display();
};
dequeue::dequeue() {
   front=-1;
   rear=-1;
}
void dequeue::RearIns(int i) {
   if(rear>=SIZE-1) {
      cout<<"\n Queue Overflow";
   } else {
      if(front==-1) {
         front++;
         rear++;
      } else {
         rear=rear+1;
      }
      a[rear]=i;
      cout<<"\nInserted item is"<<a[rear];
   }
}
void dequeue::FrontIns(int x) {
   if(front==-1) {
      front=0;
      a[++rear]=x;
      cout<<"\n inserted element is:"<<x;
   } else if(front!=0) {
      a[--front]=x;
      cout<<"\n inserted element is:"<<x;
   } else {
      cout<<"\n Queue Overflow";
   }
}
void dequeue::DelFront() {
   if(front==-1) {
      cout<<"\nDequeue Empty-No elements to delete";
      return;
   }
   else {
      cout<<"The Deleted element is: "<<a[front];
      if(front==rear) {
         front=rear=-1;
         return;
      } else
         front=front+1;
      }
   }
   void dequeue::DelRear() {
      if(front==-1) {
         cout<<"deletion is not possible::dequeue is empty";
         return;
      }
      else {
         cout<<"the deleted element is:"<<a[rear];
         if(front==rear) {
            front=rear=-1;
         } else
            rear=rear-1;
      }
   }
   void dequeue::display() {
      if(front==-1) {
         cout<<"Dequeue is empty";
      } else {
         for(int i=front;i<=rear;i++) {
            cout<<a[i]<<" ";
         }
      }
   }
   int main() {
      int c,i;
      dequeue d;
      do//perform switch opeartion 
      {
      cout<<"\n 1.Insertion at Front";
      cout<<"\n 2.Insertion at Rear";
      cout<<"\n 3.Deletion from front";
      cout<<"\n 4.Deletion from rear";
      cout<<"\n 5.Display Queue";
      cout<<"\n 6.exit";
      cout<<"\n Enter your choice:";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Enter the element to be inserted";
            cin>>i;
            d.FrontIns(i);
         break;
         case 2:
            cout<<"enter the element to be inserted";
            cin>>i;
            d.RearIns(i);
         break;
        case 3:
            d.DelFront();
         break;
         case 4:
            d.DelRear();
         break;
        case 5:
            d.display();
         break;
         case 6:
            exit(1);
         break;
         default:
            cout<<"invalid choice";
         break;
      }
   } while(c!=7);
}
