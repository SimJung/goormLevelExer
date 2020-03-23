#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
#define pi pair<int, int>

int arr[301][301];
bool visit[301][301];
int l, di, dj;
queue<pi> q;

void check(pi p, int a, int b) {
	if (!visit[p.first + a][p.second + b]) {
		visit[p.first + a][p.second + b] = 1;
		arr[p.first + a][p.second + b] = arr[p.first][p.second] + 1;
		q.push(make_pair(p.first + a, p.second + b));
	}
}

void bfs() {
	while (!q.empty()) {
		pi p;
		p.first = q.front().first;
		p.second = q.front().second;
		q.pop();

		if (p.first == di && p.second == dj)
			return;

		if (p.first >= 1) {
			if (p.second >= 2) {
				check(p, -1, -2);
			}
			if (p.first >= 2) {
				if (p.second >= 1) {
					check(p, -2, -1);
				}

				if (p.second < l-2) {
					check(p, -2, 1);
				}
			}
			if (p.second < l - 1) {
				check(p, -1, 2);
			}
		}

		if (p.first < l-1) {
			if (p.second >= 2) {
				check(p, 1, -2);
			}
			if (p.first < l-2) {
				if (p.second >= 1) {
					check(p, 2, -1);
				}

				if (p.second < l - 2) {
					check(p, 2, 1);
				}
			}
			if (p.second < l - 1) {
				check(p, 1, 2);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int ki, kj;
	cin >> l >> ki >> kj>>di>>dj;
	q.push(make_pair(ki, kj));
	bfs();

	cout << arr[di][dj] << '\n';

	return 0;
}