#include <cstdlib>
#include <iostream>
#include "ulam.hh"
 
int main(const int argc, const char* argv[]) {
    using namespace std;
 
    cout << Ulam<9>() << endl;
    const Ulam<9> v(1, '*');
    cout << v << endl;
 
	return EXIT_SUCCESS;
}