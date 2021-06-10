#include <bits/stdc++.h>
using namespace std;

//Error with class Node?
struct Node {
	int key;
	struct Node* next;
};

Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}

void printList(Node* head)
{
	while (head != NULL) {
		cout << head->key << " ";
		head = head->next;
	}
	cout << endl;
}

Node* detectAndRemoveLoop(Node* head)
{
	// If list is empty or has only one node
	// without loop
	if (head == NULL || head->next == NULL)
		return NULL;

	Node *slow = head, *fast = head;

	slow = slow->next;
	fast = fast->next->next;

	while (fast && fast->next) 
	{
		if (slow == fast)
			break;
		//if they are not equal
		slow = slow->next;
		fast = fast->next->next;
	}

	// If loop does not exist
	if (slow != fast)
		return NULL;

	// If loop exists. Start slow from
	// head and fast from meeting point.
	slow = head;
	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
	}

	return slow;
}

/* Driver program to test above function*/
int main()
{
	Node* head = newNode(50);
	head->next = newNode(20);
	head->next->next = newNode(15);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(10);

	head->next->next->next->next->next = head->next->next;

	Node* res = detectAndRemoveLoop(head);
	if (res == NULL)
		cout << "Loop does not exist";
	else
		cout << "Loop starting node is " << res->key;

	return 0;
}
