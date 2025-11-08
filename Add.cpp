#include <bits/stdc++.h>
using namespace std;

int AddInt(int a, int b) {
	cout << "This is Int adding." << endl;
	a = a + b;
	a = a - b;
	return a + b;
}

double AddDouble(double a, double b) {
	cout << "Double Adding" <<endl;
	return (b + a);
}

int main() {
	cout << AddInt(1, 1) << endl;
	cout << AddDouble(1.0f, 1.0f) << endl;
	return 0;
}
