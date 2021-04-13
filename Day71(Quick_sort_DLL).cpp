/*
Sort the given doubly linked list of size N using quicksort. 
Just complete the partition function using the quicksort technique.

Example:

Input:
LinkedList: 4->2->9
Output:
2 4 9
*/

// *************************************************************************************************************

#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	Node *prev;
};

void swap ( int* a, int* b )
{ int t = *a; *a = *b; *b = t; }


Node *lastNode(Node *root)
{
	while (root && root->next)
		root = root->next;
	return root;
}


Node* partition(Node *l, Node *h)
{
	int x = h->data;

	Node *i = l->prev;

	for (Node *j = l; j != h; j = j->next)
	{
		if (j->data <= x)
		{
			i = (i == NULL)? l : i->next;

			swap(&(i->data), &(j->data));
		}
	}
	i = (i == NULL)? l : i->next; 
	swap(&(i->data), &(h->data));
	return i;
}


void _quickSort(Node* l, Node *h)
{
	if (h != NULL && l != h && l != h->next)
	{
		Node *p = partition(l, h);
		_quickSort(l, p->prev);
		_quickSort(p->next, h);
	}
}


void quickSort(Node *head)
{
	Node *h = lastNode(head);

	_quickSort(head, h);
}


void printList(Node *head)
{
	while (head)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}


void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node; 
	new_node->data = new_data;

	new_node->prev = NULL;

	new_node->next = (*head_ref);

	if ((*head_ref) != NULL) (*head_ref)->prev = new_node ;

	(*head_ref) = new_node;
}


int main()
{
	Node *a = NULL;
	push(&a, 5);
	push(&a, 20);
	push(&a, 4);
	push(&a, 3);
	push(&a, 30);

	cout << "Linked List before sorting \n";
	printList(a);

	quickSort(a);

	cout << "Linked List after sorting \n";
	printList(a);

	return 0;
}

