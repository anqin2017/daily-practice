#include"stdafx.h"
#include "xianxingbiao.h"
#include<iostream>
using namespace std;

Seqlist::list* Seqlist::Seqlist_create(int mycapacity)
{
	Seqlist::seqlist *listtemp=NULL;
	listtemp = (seqlist*)malloc(sizeof(seqlist));
	if (listtemp == NULL)
	{
		cout << "func listtemp = (seqlist*)malloc error\n" << endl;
		return NULL;
	}
	memset(listtemp, 0, sizeof(listtemp));
	listtemp->node = (unsigned int*)malloc(mycapacity * sizeof(unsigned int));
	if (listtemp == NULL)
	{
		cout << "func listtemp->node = (unsigned int*)malloc error\n " << endl;
		return NULL;
	}
	listtemp->capacity = mycapacity;
	listtemp->length = 0;
	return listtemp;
}
void Seqlist::Seqlist_destroy(list *mylist)
{
	Seqlist::seqlist *listtemp = NULL;
	if (mylist == NULL)
	{
		cout << "Seqlist_destroy error\n" << endl;
		return;
	}
	listtemp = (Seqlist::seqlist *)mylist;
	if (listtemp->node != NULL)
	{
		free(listtemp->node);
	}
	free(listtemp);
	return;
}
int Seqlist::Seqlist_length(list *mylist)
{
	Seqlist::seqlist *listtemp = NULL;
	if (mylist == NULL)
	{
		cout << "Seqlist_length error\n" << endl;
		return -1;
	}
	listtemp = (Seqlist::seqlist *)mylist;
	return listtemp->length;
}
int Seqlist::Seqlist_capacity(list *mylist)
{
	Seqlist::seqlist *listtemp = NULL;
	if (mylist == NULL)
	{
		cout << "Seqlist_capacity error\n" << endl;
		return -1;
	}
	listtemp = (Seqlist::seqlist *)mylist;
	return listtemp->capacity;
	return 0;
}
int Seqlist::Seqlist_insert(list* mylist, listnode*mynode, int myposition)
{
	int i = 0;
	Seqlist::seqlist *listtemp=NULL;
	if (mylist == NULL||mynode==NULL)
	{
		cout << "Seqlist_insert error\n" << endl;
		return -1;
	}
	listtemp = (Seqlist::seqlist *)mylist;
	if (listtemp->length >= listtemp->capacity)
	{
		cout << "listtemp->length >= listtemp->capacity error\n" << endl;
		return -2;
	}
	if (myposition >= listtemp->length)
	{
		myposition = listtemp->length;
	}
	for (int i = listtemp->length; i > myposition; i--)
	{
		listtemp->node[i] = listtemp->node[i - 1];
	}
	listtemp->node[i] = (unsigned int)mynode;	
	listtemp->length++;
	return 0;
}
Seqlist::listnode* Seqlist::Seqlist_get(list*mylist, int myposition)
{
	Seqlist::seqlist *listtemp = NULL;
	Seqlist::listnode *listnode1 = NULL;
	if (mylist == NULL)
	{
		cout << "Seqlist_get error\n" << endl;
		return NULL ;
	}
	listtemp = (Seqlist::seqlist *)mylist;
	if (myposition >= listtemp->length)
	{
		cout << "Seqlist_get myposition error " << endl;
		return NULL;
	}
	listnode1 =(void*) listtemp->node[myposition];
	return listnode1;
}
int Seqlist::Seqlist_delete(list*mylist, int myposition)
{
	return 0;
}