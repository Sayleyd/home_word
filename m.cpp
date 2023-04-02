#include <iostream>

#define forn(i, n) for(int i = 0; i < int(n); ++i)

using namespace std;


void fib(int n) {
	int a = 0, b = 1;
	forn(i, n) {
		cout << a << '\n';
		b = a + b, a = b - a;
	}
}


int main() {
	cout << "Hello, World!";
}
