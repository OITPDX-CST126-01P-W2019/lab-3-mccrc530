#include "pch.h"
#include "money.h"
//  These functions are taking the style of the new cstring functions where you always pass in the size.
//    They assume that the character arrays are AT_LEAST size big.  

// Implement these functions one at a time in money.cpp.  When you turn on the tests (in W19_126_3.cpp)
//  the functions will need to be there, otherwise you'll get a linker error.  
//   IOW, don't turn on the test until you at least have a stub of the corresponding function.
void remove_all_spaces(char * target, const char * source, int size) 
{
	int step{};
	for (int i{}; i!= size; i++)
	{
		if (*(source + i) !=  ' ')
		{
			*(target + step++) = *(source + i);
		}
	}
}
//  removes any and all spaces from the source and places the result in target using pointer arithmetic.

bool is_money(const char * source, int size)
{
	return true;
}
//  Determines if the string in source is money and returns true if it is, false if it isn't.
bool add_decimal(char * target, const char * source, int size) 
{
	return true;
}
//  If source is money, add_decimal adds .00  to it if it doesn't already have a decimal.  Places result in target.