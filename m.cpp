#include <iostream>

using namespace std;

int fib(int n) {
	if (n <= 0) return -1;
	if (n <= 2) return n - 1;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	cout << "Hello, World!";
}
