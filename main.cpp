#include "add.h"
#include<iostream>
#include<cassert>
using namespace std;

#if _DEBUG
void foo()
{
	cout << "Debugging beep boop" << endl;
}
#endif

#define MUL(a,b) a*b

int main()
{
	foo();
	int x = 2;
	int y = add1(x);
	assert(MUL(2, 4) == 8);
	cout << "Hello Cpp" << endl;
	cout << MUL(2, 7) << endl;
	getchar();

	return 0;
}