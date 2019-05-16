#pragma once
/*
This problem was asked by Google.

An XOR linked list is a more memory efficient doubly linked list.
Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node.
Implement an XOR linked list; it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.

If using a language that has no pointers (such as Python), you can assume you have access to get_pointer and dereference_pointer functions that converts between nodes and memory addresses.
*/

struct XORLinkedListNode
{
	int value;
	
	XORLinkedListNode* both;//a NODE that is an XOR of previous and next node's address
};

class XORLinkedList
{
	XORLinkedListNode* head = nullptr;
	XORLinkedListNode* tail = nullptr;

public:
	void add(XORLinkedListNode* node)
	{

		
		 
		if (tail == nullptr)
		{
			tail = node;
			node->both = nullptr;
		
		}
		else
		{

		}

		else
		{
			XORLinkedListNode* prev, *next;
			/*
			with tail node {
				de-xor prev node 
				de-xor next node
				xor the de-xored next node with the newly created node
				apply xor to its both
			}
			with new node {
				
			}
			*/

		}
	}
	XORLinkedListNode* get(int index);
};