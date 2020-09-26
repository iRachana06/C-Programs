#include <iostream>
using namespace std;
struct node{
	int data;
	struct node *ptr;
};
typedef struct node nodeType;  
class LinkList {
	nodeType *head,*temp;
public: 
LinkList(){     //constructor
	head = NULL;
	temp=NULL;
	}
void ins(int data){
	nodeType *newnode = new nodeType;
	newnode->data = data;   
	newnode->ptr = head;  //ptr of newly inserted value is pointing to NULL head
	head = newnode;      //newly inserted nodeType becomes head
}
void delatBeginning(){
	nodeType *temp = head;
	if (head == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe deleted element is :" << head->data<<"\n";
		head = head->ptr;
		delete temp;
	}
}
void delatEnd(){
    	nodeType *temp = head;
    	nodeType *prev=NULL;
    if (temp == NULL)
		cout << "\nList is Empty\n";
	else {
		while (temp->ptr!=NULL){
		prev=temp;
 		temp = temp->ptr;
		}
	cout << "\nThe deleted element is :"<<temp->data ;
		delete temp;
		prev->ptr=NULL;
	}
}
void show(){
	nodeType *temp ;
	temp= head;
	if (head == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe elements in the List are :";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->ptr;
		}
		cout << endl;
	}
}
};
int main(){
	int data, ch;
	LinkList list;
	do{
	  cout<<"\n 1.Insertion into Linked List";
      cout<<"\n 2.Delete at Beginning of Linked List";
      cout<<"\n 3.Delete at End of Linked List";   
      cout<<"\n 4.Display";
      cout<<"\n 5.Exit";
      cout<<"\n Enter your choice:";
	  cin >> ch;
   		switch (ch)
		{
		case 1 : 
			cout << "\n Enter the element : ";
			cin >> data;
			list.ins(data);
			break;
		case 2 : 
			list.delatBeginning();
			break;
		case 3 :
		    list.delatEnd();
		    break;
		case 4:
			list.show();
			break;
		case 5 :	exit(0);
		}
	}while (ch!=6);
}