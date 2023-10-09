#include <iostream>

#include "global.h"

using namespace std;

void* operator new(size_t size)
{
	cout << "Global new is being called\n";
	char* pMem = (char*)malloc(size);
	void* pStartMemBlock = pMem;
	return pStartMemBlock;
}

void operator delete (void* pMem)
{
	cout << "Global delete is being called\n";
	free(pMem);
}