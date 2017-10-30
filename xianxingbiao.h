#pragma once
#include "stdafx.h"

class Seqlist
{
public:
	typedef void list;
	typedef void listnode;
	typedef struct seqlist
	{
		int length;
		int capacity;
		unsigned int* node;
	}seqlist;
public:
	list*Seqlist_create(int mycapacity);
	void Seqlist_destroy(list *mylist);
	int Seqlist_length(list *mylist);
	int Seqlist_capacity(list *mylist);
	int Seqlist_insert(list* mylist, listnode*mynode, int myposition);
	listnode* Seqlist_get(list* mylist, int myposition);
	int Seqlist_delete(list*mylist, int myposition);

};

