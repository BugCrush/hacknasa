// nullptr.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

#ifndef NULL
#define NULL 0 /* standard C++ definition */
#endif

void f( int i ) {
	printf("The integer is %d\n", i);
}

void f( char * s ) {
	printf("The pointer value is %p\n", s);
}

int main( int argc, char ** argv ) {
	f(NULL);
	return 0;
}
