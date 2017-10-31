#include <cstdlib>
#include <iostream>

using namespace std;

class stack
{
private:
	typedef struct node
	{
		int data;
		node * next;
	}*nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public:
	stack();
	void push(int addData);
	void pop();
	void printStack();
	void length();
};

stack::stack()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void stack::push(int addDAta)
{
	int z;
	nodePtr n = new node;
	n->next = NULL;
	n->data = addDAta;
		curr = head;
		if (curr == NULL)
		{
			temp = head;
			curr = head;
			n->next = temp;
			head = n;
			cout << addDAta << " was added in the stack \n";
		}
		else
		{
			
			n->next = curr;
			head=n;
			cout << addDAta << " was added in the stack \n";
		}
	
}

void stack::pop()
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	if (curr == NULL)
	{
		cout << endl << "Stack is empty!\n";
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value " << " was deleted\n";
	}
}

void stack::printStack()
{
	curr = head;
	if (curr != NULL) {
		cout << endl;
		while (curr != NULL)
		{
			cout << curr->data << endl;
			curr = curr->next;
		}
		cout << endl;
	}
	else 	cout << endl << "Stack is empty!\n";
}

void stack::length()
{
	int h = 0;
	curr = head;
	if (curr != NULL) {
		cout << endl;
		while (curr != NULL)
		{
			curr = curr->next;
			h++;
		}
		cout << h << " Lenght of the stack \n" << endl;
	}
	else 	cout << endl << "Stack is empty!\n";
}

int menu()
{
	cout << "\n 1 : Push \n";
	cout << " 2 : Show Stack \n";
	cout << " 3 : Pop \n";
	cout << " 4 : Length of the Stack \n";
	cout << " 5 : Exit \n";
	return 0;
}

int main()
{
	int a, p, v, d;
	int h = 0;
	stack Stack;
	do
	{
		menu();
		cout << " Enter you choice\n";
		cin >> a;
		switch (a)
		{
		case 1: cout << "Enter Value of new element\n ";
			cin >> v;
				Stack.push(v);
			break;

		case 2:
			Stack.printStack();
			break;

		case 3:
			Stack.pop();
			break;

		case 4: Stack.length();
			break;

		case 5: a= 8525842; exit;
			break;
		default: cout << "Bad choise! Enter you choice\n";
			break;
		}
	} while (a != 8525842);
		return 0;
	
}