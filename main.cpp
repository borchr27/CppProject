#include<iostream>
#include<cassert>
#include "add1.h"
#include "../StaticLib/foo.h"

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
	
	cout << "2+3= " << add(2, 3) << endl;
	
	getchar();

	return 0;
}