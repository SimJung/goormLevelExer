#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	q.pop();
	while (q.size() != 2) {
		for (int i = 0; i < m-1; i++) {
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}

	cout << q.front() << ' ';
	q.pop();
	cout << q.front() << '\n';
	return 0;
}