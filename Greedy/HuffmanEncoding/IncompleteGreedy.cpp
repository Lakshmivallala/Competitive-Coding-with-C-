#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define MAX_TREE_HEIGHT 100 
//can avoid this by explicitly writing a function to find height of tree

struct MinHeapNode
{
	char data;
	unsigned freq;
	struct MinHeapNode *left, *right;
};

struct MinHeapNode * buildHuffmanTree(char data[],int freq[],int size)
{
	struct MinHeapNode *left,*right,*top;
	struct MinHeap * minHeap = create
}

void HuffmanCode(char data[],int freq[],int size)
{
	struct MinHeapNode * root=buildHuffmanTree(data,freq,size);
}

int main()
{
	char data[]={'a','b','c','d','e','f'};
	int freq[]={5,9,12,13,16,45};

	int size=sizeof(data)/sizeof(data[0]);

	HuffmanCode(data,freq,size);

	return 0;
}