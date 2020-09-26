#include <iostream>
using namespace std;
struct node{
	int data;
	struct node *ptr;
};
typedef struct node nodeType;  //nodeType now denotes datatype for structure linked list
class LinkList {
	nodeType *head,  *first;
public: 
LinkList(){     //constructor
	head = NULL;
	first=NULL;
	}
void ins(int data){
   nodeType *newnode = new nodeType;
   nodeType *prev=NULL, *next=NULL;
     
    if(head == NULL)
    {
   	newnode->data = data;   
	newnode->ptr = head;  //ptr of newly inserted value is pointing to NULL head
	head = newnode; 
	prev = head;
	 first=head;
    }   
    else if(head !=NULL)
    {
    cout<<"Enter else loop";   //1 2 
    while(head != NULL)        //1 2 3
      {
          prev= head;        //prev=1
          head = head->ptr;  // 2
          cout<<"prev is:"<<prev;
      }
  
    prev->ptr= newnode;
    newnode-> data=data;
    newnode-> ptr= NULL;
 
head=newnode;
    }
}
void display()
{
nodeType *temp ;
	temp= first;
	if (temp == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe elements in the List are :";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->ptr;
		}
}
}
};
int main(){
	int data, val, ch;
	LinkList list;
	do{
	  cout<<"\n 1.Insertion at the end of Linked List";
	  cout<<"\n 2.Display thr list";
      cout<<"\n Enter your choice, Enter 3 to Exit";
	  cin >> ch;
   		switch (ch)
		{
		case 1 : 
			cout << "\n Enter the element : ";
			cin >> data;
			list.ins(data);
			break;
	
		case 2 :
			cout << "\n The linked list is : ";
			list.display();
			break;
		default : cout<<"Invalid choice";
		}
	}while (ch!=3);
}
