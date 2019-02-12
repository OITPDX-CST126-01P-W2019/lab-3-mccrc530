// W19_CST126_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include "money.h"
using namespace std;

// change these preprocessor constants to 1 as you add each element.
#define TEST_REMOVE_SPACE 1
#define TEST_IS_MONEY 1
#define TEST_ADD_DECIMAL 1

// leave these prototypes alone.  :-)  Do not edit between these lines.
void test_remove_spaces();
void test_is_money(const char * tester, int size);
void test_add_decimal(const char * tester, int size);
bool test();
//  do not edit prototypes above.  

int main()
{
	test();  // leave this line exactly where it is.  
	cout << endl << "Student added tests - Grader may ignore.  " << endl;
	// You may add your own calls to the tester functions below this line. 
}
//  You may not change anything below this line. 

void test_remove_spaces()
{
	char target[MAX_NUMBER];
#if TEST_REMOVE_SPACE

	cout << " ==== Tests for remove_all_spaces ====" << endl;

	remove_all_spaces(target, " 123 . 0 ", SMALL_NUMBER);
	if (strlen(target) != 5)   // you may not use strlen in your part of the program.
		cout << "ERROR - Spaces not removed: ";
	else
		cout << "OK, spaces removed: ";
	cout << " Target is " << target << endl;

	cout << setw(20) << "Empty String: ";
	remove_all_spaces(target, "", SMALL_NUMBER);
	cout << target << " is still empty and did not abort." << endl;

#endif
}
void test_is_money(const char * tester, int size)
{
#if TEST_IS_MONEY
	cout << right << setw(size) << tester << left;
	if (is_money(tester, size))
		cout << " is money." << endl;
	else
		cout << " is NOT money." << endl;


#endif
}
void test_add_decimal(const char * tester, int size) 
{
#if TEST_ADD_DECIMAL
	char target[MAX_NUMBER];

	
		cout << "adding decimal to: " << setw(size) << tester;

		if (!add_decimal(target, tester, size))
			cout << "  ** ERROR - Not enough space" << endl;

		cout << " is " << target << endl;
	
#endif

}
bool test()
{

	test_remove_spaces();

	cout << endl;
	cout << " ==== Tests for is_money ====" << endl;

	// Not money
	test_is_money("Hello World", SMALL_NUMBER);

	// These are valid
	test_is_money("123..123", SMALL_NUMBER);
	test_is_money(" $ 123.00 ", SMALL_NUMBER);
	test_is_money(" $ 12,,123.00 ", SMALL_NUMBER);
	test_is_money(" 12$12 ", SMALL_NUMBER);
	cout << "-- Empty String: --" << endl;
	test_is_money("", SMALL_NUMBER);

	cout << endl;  
	cout << " ==== Tests for add_decimal ====" << endl;
	// these are also valid
	test_add_decimal(" $ 123", SMALL_NUMBER);
	test_add_decimal(" 123.0 ", SMALL_NUMBER);
	cout << endl;
	cout << "-- Empty String: --" << endl;
	test_add_decimal("", SMALL_NUMBER);
	cout << endl;
	cout << "-- Big Numbers -- "<< endl;
	test_add_decimal("1234567890123456789012345", MAX_NUMBER);  // this one works fine.


	// this one fails because there isn't enough room for the .00
	test_add_decimal("12345678901234567890123456789", MAX_NUMBER); 

	
	

	return true;
}


