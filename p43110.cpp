#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string a;
	getline(cin, a, '\n');

	int b, c;
	b = 0;
	c = a.length() - 1;

	while (b <= c) {
		cout << a[b];
		
		if (b != c)
			cout << a[c];

		b++; c--;
	}

	return 0;
}