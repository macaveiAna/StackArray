#pragma once
//=================================================================
// @author:     Ana Macavei
// @version:    1.2
//
//  Demonstrates: intStack class definition
//
//=================================================================

class intStack {
public:
	/*-----------------------------------------
	*Constructor
	*
	*/
	intStack();

	/*-----------------------------------------
	*Pushes item on stack
	* 
	*	@param itemToPush - the item to push onto the stack
	*	@return true if successful, false otherwise
	*
	*/
	bool push(int itemToPush);

	/*-----------------------------------------
	*Pops item off of stack
	*
	*	@param itemPopped - the item removed from the stack (if successful)
	*	@return true if successful, false otherwise
	*/
	bool pop(int& itemPopped);

	/*-----------------------------------------
	* is stack full
	* 
	*	 @return true if full, false otherwise
	*
	*/
	bool full();

	/*-----------------------------------------
	* is stack empty
	*
	*	 @return true if empty, false otherwise
	*
	*/
	bool empty();

private:
	const static int SIZE = 10;
	int topNdx; //index of top item; -1 if empty
	int data[SIZE];

};