#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
#include <utility>

#define PAIR pair<int, string>

using namespace std;

const int dx[4] = { -3, -1, 3, 1 };
queue<PAIR> q;
unordered_map<string, int> m;
string goal = "123456780";

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string start;

	for (int i = 0; i < 9; i++)
	{
		char c;
		cin >> c;
		start += c;
	}

	m[start] = 0;
	q.push({ 0, start });

	while (!q.empty())
	{
		PAIR c = q.front();
		q.pop();

		if (c.second.compare(goal) == 0)
		{
			cout << c.first;
			return 0;
		}

		int cx = 0;

		for (int i = 0; i < 9; i++)
		{
			if (c.second[i] == '0')
			{
				cx = i;
				break;
			}
		}

		for (int i = 0; i < 4; i++)
		{
			int nx = cx + dx[i];

			if (nx < 0 || nx >= 9)
				continue;

			if (i == 1 && nx % 3 == 2)
				continue;

			if (i == 3 && nx % 3 == 0)
				continue;

			string ns = c.second;
			swap(ns[cx], ns[nx]);

			if (m.find(ns) != m.end())
				continue;

			m[ns] = c.first + 1;

			q.push({ m[ns], ns });
		}
	}

	cout << -1;

	return 0;
}