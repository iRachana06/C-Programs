#include <iostream>
using namespace std;
struct node{
	int data;
	struct node *ptr;   //int *ptr; char *ptr;
};
typedef struct node nodeType;  //nodeType now denotes datatype for structure linked list 
class LinkList {
	nodeType *head;

public: 

LinkList(){     //constructor
	head = NULL;
	}
void ins(int data){
	nodeType *newnode = new nodeType;//    (3):HEAD -> NULL
	newnode->data = data;   
	newnode->ptr = head;  //ptr of newly inserted value is pointing to NULL head
	head = newnode;      //newly inserted nodeType becomes head
}
void del(){
	nodeType *temp = head;
	if (head == NULL)
		cout << "\nList is Empty\n";
	else {
		cout << "\nThe deleted element is :" << head->data<<"\n";
		head = head->ptr;
		delete temp;
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
      cout<<"\n 2.Delete from Linked List";
      cout<<"\n 3.Display";
      cout<<"\n 4.Exit";
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
			list.del();
			break;
		case 3 :
			list.show();
			break;
		case 4 :	exit(0);
		}
	}while (ch!=5);
}


