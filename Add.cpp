#include <bits/stdc++.h>
using namespace std;

int AddInt(int a, int b) {
	cout << "This is Int adding." << endl;
	a = a + b;
	a = a - b;
	return a + b;
}

int main() {
	cout << AddInt(1, 1) <<endl;
	return 0;
}
