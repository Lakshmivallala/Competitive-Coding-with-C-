#include<iostream>

using namespace std;

//O/p:
//Queue front 45
//Queue rear 15

//O(1) for enqueue and dequeue
class QueueNode
{
public:
	int data;
	QueueNode * next;
	QueueNode(int val)
	{
		data=val;
		next=NULL;
	}
};

class Queue
{
public:
	QueueNode * front,*rear;

	Queue()
	{
		front=rear=NULL;
	}

	void enqueue(int val)
	{
		QueueNode * temp=new QueueNode(val);
		//if queue is empty, front and rear are both the new node
		if(rear==NULL)
		{
			front=rear=temp;
			return;
		}
		rear->next=temp;
		rear=temp;
	}

	void dequeue()
	{
		if(front==NULL)
			return;
		QueueNode * temp=front;
		front=front->next;
		//if queue is empty, update rear too
		if(front==NULL)
			rear=NULL;
		delete(temp);
	}
};

int main()
{	
	Queue q;
	q.enqueue(20);
	q.dequeue();
	q.enqueue(50);
	q.enqueue(45);
	q.enqueue(30);
	q.enqueue(15);
	q.dequeue();

	cout<<"Queue front "<<(q.front)->data<<endl;
	cout<<"Queue rear "<<(q.rear)->data<<endl;

	return 0;
}