#include<iostream>
#include "add1.h"
using namespace std;

// Many libraries are header only (so this info is all in the add.h file
// See compilation and linking -> declaration and definition

int add1(int n)
{
	cout << "This is the add.h class/method" << endl;
	return n + 1;
}