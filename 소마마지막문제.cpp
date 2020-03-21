#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cstring>
#include<queue>

using namespace std;
int n, k, num, r, l, answer, cen;
vector<int> v;

int penalty(vector<int> v)
{
	return *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
}

bool isPossible(int val)
{
	vector<int> temp;
	int partition = 1;
	bool chk;
	for (int i = 0; i < n; i++)
	{
		temp.push_back(v[i]);
		if (penalty(temp) > val)
		{
			partition++;
			temp.clear();
			temp.push_back(v[0]);
		}
	}
	if (partition <= k)
		chk = true;
	else
		chk = false;
	return chk;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	r = *max_element(v.begin(), v.end());
	l = 0;
	answer = r;
	while (l <= r)
	{
		cen = (l + r) / 2;

		if (isPossible(cen))
		{
			r = cen - 1;
			answer = (answer > cen) ? cen : answer;
		}
		else
			l = cen + 1;

		cout << "Left    : " << l << '\n';
		cout << "Right   : " << r << '\n';
		cout << "Center  : " << cen << "\n\n";

	}
	cout << answer << '\n';
}