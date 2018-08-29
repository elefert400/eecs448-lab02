/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedList.h"
#include "Test_LinkedList.h"
using namespace std;

int main(int argc, char** argv)
{
	const int TEST_SIZE = 50;
	Test_LinkedList tester(TEST_SIZE);
	int i;
	
	tester.runTests();
	cin >> i;
	
	return (0);

}

