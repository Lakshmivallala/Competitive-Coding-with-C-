#include<iostream>

using namespace std;

#define SIZE 101;

// https://gist.github.com/mycodeschool/7331785

class Queue
{
private:
	int front;
	int rear;
	int arr[SIZE];
public:
	Queue()
	{
		front=-1;
		rear=-1;
	}

	bool isEmpty()
	{
		return (front==-1 && rear==-1);
	}

	bool isFull()
	{
		return (rear+1)%SIZE == front ? true:false;
	}

	void enqueue(int val)
	{
		cout<<"Enqueuing "<<val<<endl;
		if(isFull())
		{
			cout<<"Queue is full "<<endl;
			return;
		}
		if(isEmpty())
			front=rear=0;
		else
			rear=(rear+1)%SIZE;
		arr[rear]=val;
	}	

	void dequeue()
	{
		cout<<"Dequeuing"<<endl; 
		if(isEmpty())
		{
			cout<<"Queue is empty"<<endl;
			return;
		}
		else if(front==rear)
			rear=front=-1;
		else
			front=(front+1)%SIZE;
	}

	int front()
	{
		if(front==-1)
		{
			cout<<"Empty Queue"<<endl;
			return;
		}
		return arr[front];
	}

	void print()
	{	
		int c=(rear+SIZE-front)%SIZE+1;
		cout<<"Queue: "<<endl;
		for(int i=0;i<c;i++)
		{
			int idx=(front+i)%SIZE;
			cout<<arr[idx]<<" ";
		}
		cout<<endl;
	}
};

int main()
{	
	Queue q;
	q.enqueue(20);
	q.print();
	q.dequeue();
	q.print();
	q.enqueue(50);
	q.print();
	q.enqueue(45);
	q.print();
	q.enqueue(30);
	q.print();
	q.enqueue(15);
	q.print();
	q.dequeue();
	q.print();


	return 0;
}