#include "add.h"
#include<iostream>
#include<cassert>
using namespace std;

#define MUL(a,b) a*b

int main()
{
	assert(MUL(2, 4) == 8);
	cout << "Hello Cpp" << endl;
	cout << MUL(2, 7) << endl;
	add();
	getchar();

	return 0;
}