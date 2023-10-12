#pragma once
#include<iostream>
#include<string>
using namespace std;

template <class S>
class doublyLinkedList
{
private:
	class node
	{
	public:
		S data;
		node* next;
		node* prev;

		node(S x)
		{
			data = x;
			next = nullptr;
			prev = nullptr;
		}
	};
	node* head;
	node* tail;

public:
	doublyLinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}

	void addBack(S x)
	{
		if (head == nullptr)
		{
			node* baby = new node(x);
			head = baby;
			tail = baby;
		}
		else
		{
			node* baby = new node(x);
			baby->prev = tail;
			tail->next = baby;
			tail = baby;
		}
	}

	void printBackwards()
	{
		for (node* iptr = tail; iptr != nullptr; iptr = iptr->prev)
		{
			cout << iptr->data << endl;

			iptr->next;
		}
	}

	bool remove(S x)
	{
		node* target = find(x);
		bool success = target != nullptr;
		if (success)
		{
			if (target->next != nullptr)
			{
				target->next->prev = target->prev;
			}
			else
			{
				tail = target->prev;
			}

			if (target->prev != nullptr)
			{
				target->prev->next = target->next;
			}
			else
			{
				head = target->next;
			}
			delete target;
		}
		return success;
	}

	node* find(S x)
	{
		for (node* iptr = head; iptr != nullptr; iptr = iptr->next)
		{
			if (iptr->data == x)
			{
				return iptr;
			}
		}
		return nullptr;
	}


	void printList()
	{
		node* current = head;

		while (current != nullptr)
		{
			cout << current->data << endl;
			
			current = current->next;
		}
	}
};