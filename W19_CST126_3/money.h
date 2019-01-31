#ifndef MONEY_H
#define MONEY_H

const int MAX_NUMBER = 30;
const int SMALL_NUMBER = 20;

//  These functions are taking the style of the new cstring functions where you always pass in the size.
//    They assume that the character arrays are AT_LEAST size big.  

// uncomment each function and add it to your money.cpp.
void remove_all_spaces(char * target, const char * source, int size);
//  removes any and all spaces from the source and places the result in target using pointer arithmetic.

bool is_money(const char * source, int size);
//  Determines if the string in source is money and returns true if it is, false if it isn't.
bool add_decimal(char * target, const char * source, int size);
//  If source is money, add_decimal adds .00  to it if it doesn't already have a decimal.  Places result in target.
#endif
