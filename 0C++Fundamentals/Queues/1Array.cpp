#include<iostream>
#include<climits>

using namespace std;

/*
O/p:
20 enqueue into queue
50 enqueue into queue
45 enqueue into queue
30 enqueue into queue
15 enqueue into queue
Dequeued: 20
Front item: 50
Rear item: 15
*/

// Insertion, enque: O(1)
// deletion,deque : O(1)
// front : O(1)
// rear : O(1)

//Space complexity: O(n) auxillary space for storing elements in array of size n
class Queue
{
public:
	int front;
	int rear;
	int size;
	unsigned capacity;
	int *arr;
};

Queue * createQ(unsigned capacity)
{
	Queue * q=new Queue(); //allocate memory to queue
	q->capacity=capacity;
	q->front=q->size=0; //front and size = 0
	q->rear=capacity-1; //basically pointing at last index of queue
	q->arr=new int[q->capacity];
	return q;
}

//queue = full when size = capacity
int isFull(Queue * q)
{
	return (q->size==q->capacity);
}

//queue = empty when size = 0
int isEmpty(Queue * q)
{
	return (q->size==0);
}

void enqueue(Queue * q,int val)
{
	if(isFull(q))
		return;
	q->rear=(q->rear+1)%(q->capacity); //reset to 0 when it reaches max capacity
	q->arr[q->rear]=val;
	q->size=q->size+1;
	cout<<val<<" enqueue into queue"<<endl;
}

int dequeue(Queue * q)
{
	if(isEmpty(q))
		return INT_MIN;
	int val=q->arr[q->front];
	//updating front and size
	q->front=(q->front+1)%(q->capacity);
	q->size=q->size-1;

	return val;
}

int front(Queue *q)
{
	if(isEmpty(q))
		return INT_MIN;
	return q->arr[q->front];
}

int rear(Queue *q)
{
	if(isEmpty(q))
		return INT_MIN;
	return q->arr[q->rear];
}

int main()
{	
	Queue * q=createQ(100); //capacity=100
	enqueue(q,20);
	enqueue(q,50);
	enqueue(q,45);
	enqueue(q,30);
	enqueue(q,15);

	cout<<"Dequeued: "<<dequeue(q)<<endl;
	cout<<"Front item: "<<front(q)<<endl;
	cout<<"Rear item: "<<rear(q)<<endl;


	return 0;
}