#include <iostream>     // 1-> 2-> 3->4 ->null
using namespace std;    //HEAD, PREV  4
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
void ins(int data){                                       //Insert at end   5
   nodeType *newnode = new nodeType;    //1 -> 2-> 3-> 4 -> 5 -> null     // first
    // nodeType *curr;			    // head =4   ;  head->ptr=newnode  newnode->null
     nodeType *prev=NULL, *next=NULL;
     if(head == NULL)
    {
   	newnode->data = data;   
	newnode->ptr = NULL;  //ptr of newly inserted value is pointing to NULL head
	head = newnode; 
	first=head;
    }   
    head->ptr= newnode;
   	newnode->data = data;   
	newnode->ptr = NULL;  //ptr of newly inserted value is pointing to NULL head
	head = newnode; 
}

void insAtLoc(int data, int pos)
{
    nodeType *newnode = new nodeType;   
    nodeType *one=NULL, *two=NULL , *temp,*prev=NULL;
    int counter=1;
    temp=first;
   while (counter!= pos)
   {
    prev=temp;    
    temp = temp->ptr;
    counter++;
       }
  one= prev;
  two= temp;
  cout<<"1st:"<<one;
  cout<<"2nd is:"<<two;
 one->ptr = newnode;
 newnode->data= data;
 newnode->ptr= two;
}
void display()
{
	if (first == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe elements in the List are :";
		while (first != NULL){
			cout<<first->data<<" ";
			first = first->ptr;
		}
}
}
};
int main(){
	int data, val, ch,pos;
	LinkList list;
	do{
	  cout<<"\n 1.Insertion at the end of Linked List";
	  cout<<"\n 2.Display the list";
	  cout<<"\n 3.Insert at random position";
      cout<<"\n Enter your choice, Enter 4 to Exit";
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
		case 3 :
		cout<<"\n Enter position to enter data";
		cin>> pos;
		cout << "\n Enter the element : ";
			cin >> data;
		   list.insAtLoc(data, pos);
		}
	}while (ch!=4);
}
