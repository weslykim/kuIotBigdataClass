#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#include <assert.h>

void initStack(Stack *ps, int size, int eleSize)
{
	//ps->pArr = malloc(sizeof(int) * size);
	ps->pArr-> malloc(eleSize * size);
	assert(ps->pArr != NULL);
	ps->eleSize = eleSize;
	ps->size = size;
	ps->tos = 0;
}
void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}
void push(Stack *ps, const void *pData)
{
	assert(ps->tos != ps->size);
	//ps->pArr[ps->tos] = data;
	//memcpy(&ps->pArr[ps->tos], pData, ps->eleSize);
	memcpy((unsigned char *)ps->pArr + ps->tos * ps->eleSize, pData, ps->eleSize);
	++ps->tos;
}
void pop(Stack *ps, void *pData)
{
	assert(ps->tos != 0);

	--ps->tos;
	
	//*pData = ps->pArr[ps->tos];
	//memcpy(pData, &ps->pArr[ps->tos], ps->eleSize);
	memcpy(pData, (unsigned char *)ps->pArr + ps->tos * ps->eleSize, ps->eleSize);

}
