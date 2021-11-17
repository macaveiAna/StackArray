//=================================================================
// @author:     Ana Macavei
// @version:    1.2
//
//  Demonstrates: Stack LL class definition for stack implemented 
//  with a linked list.
//
//=================================================================
#include "intStack.h"

intStack::intStack()
{
	topNdx = -1;
}

bool intStack::push(int itemToPush)
{
	if (full())
	return false;

	topNdx++;
	data[topNdx] = itemToPush;
	return true;
}

bool intStack::pop(int& itemPopped)
{
	if (empty())
	return false;

	itemPopped = data[topNdx];
	topNdx--;
	return true;
}

bool intStack::full()
{
	if (topNdx == SIZE - 1)
		return true;
	else
	return false;
}

bool intStack::empty()
{
	if (topNdx < 0)
		return true;
	else
	return false;
}
