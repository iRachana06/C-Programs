#include <iostream>
using namespace std;   //Implementing Double Ended Linked List
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node nodeType;  //nodeType now denotes datatype for structure linked list
class LinkList {
	nodeType *head,*temp,*first;
public: 
LinkList(){     //constructor
	head = NULL;
	temp=NULL;
	first=NULL;
	}
void ins(int data){
   nodeType *newnode = new nodeType;
    // nodeType *curr;
     nodeType *prev=NULL, *next=NULL;
     
    if(head == NULL)
    {
   	newnode->data = data;   
	newnode->next = NULL;  //ptr of newly inserted value is pointing to NULL head
	newnode->prev=NULL;
	head = newnode; 
    first=head;
    }   
    else
    {
          newnode->prev = head; 
          head->next= newnode;        //prev=1
           newnode->data = data;// 2
          newnode->next= NULL;
          head=newnode;
          
      }   
}
void displayNext(){
	nodeType *temp ;
	temp= first;
	if (first == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe elements in the List are :";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout << endl;
	}
}
void displayPrev()
{
   nodeType *temp ;
	temp= head;
	if (first == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe elements in the List are :";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->prev;
		}
		cout << endl;
	} 
}
};
int main(){
	int data, ch;
	LinkList list;
	do{
	  cout<<"\n 1.Insertion";
      cout<<"\n 2.Display Next";
      cout<<"\n 3.Display Prev";   
      cout<<"\n Enter your choice, Enter 4 to Exit! ";
	  cin >> ch;
   		switch (ch)
		{
		case 1 : 
			cout << "\n Enter the element : ";
			cin >> data;
			list.ins(data);
			break;
		case 2 : 
			list.displayNext();
			break;
		case 3 :
		    list.displayPrev();
		    break;
		case 4 :	exit(0);
		}
	}while (ch!=5);
}
#include <iostream>
using namespace std;
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node nodeType;  //nodeType now denotes datatype for structure linked list
class LinkList {
	nodeType *head,*temp,*first;
public: 
LinkList(){     //constructor
	head = NULL;
	temp=NULL;
	first=NULL;
	}
void ins(int data){
   nodeType *newnode = new nodeType;
     nodeType *prev=NULL, *next=NULL;
     
    if(head == NULL)
    {
   	newnode->data = data;   
	newnode->next = NULL;  //ptr of newly inserted value is pointing to NULL head
	newnode->prev=NULL;
	head = newnode; 
    first=head;
    }   
    else
    {
          newnode->prev = head; 
          head->next= newnode;        //prev=1
           newnode->data = data;// 2
          newnode->next= NULL;
          head=newnode;      
      }   
}
void displayNext(){
	nodeType *temp ;
	temp= first;
	if (first == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe elements in the List are :";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout << endl;
	}
}
void displayPrev()
{
   nodeType *temp ;
	temp= head;
	if (first == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe elements in the List are :";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->prev;
		}
		cout << endl;
	} 
}
};
int main(){
	int data, ch;
	LinkList list;
	do{
	  cout<<"\n 1.Insertion";
      cout<<"\n 2.Display Next nodes";
      cout<<"\n 3.Display Previous nodes";   
      cout<<"\n Enter your choice, Enter 4 to Exit! ";
	  cin >> ch;
   		switch (ch)
		{
		case 1 : 
			cout << "\n Enter the element : ";
			cin >> data;
			list.ins(data);
			break;
		case 2 : 
			list.displayNext();
			break;
		case 3 :
		    list.displayPrev();
		    break;
		case 4 :	exit(0);
		}
	}while (ch!=5);
}
