// nullptr.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

#ifndef NULL
#define NULL 0 /* standard C++ definition */
#endif

void f( int g ) {
	printf("the int is %d\n", g);
}

void f( char * s ) {
	printf("the pointer is %p\t", s);
}

int main( int argc, char ** argv ) {
	f(NULL);
	return 0;
}
