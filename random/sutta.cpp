#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> adj[], int* vis, int* inDeg,
		int* outDeg)
{
	vis[u] = 1;


	for (auto v : adj[u])
	{
		outDeg[u] = 1;
		inDeg[v] = 1;

		if (vis[v] == 0)
		{
			dfs(v, adj, vis, inDeg, outDeg);
		}
	}
}

int findMinimumEdges(int source[], int N, int M, int dest[])
{
	vector<int> adj[N + 1];

	for (int i = 0; i < M; i++)
	{
		adj[i].push_back(dest[i]);
	}

	int inDeg[N + 1] = { 0 };

	int outDeg[N + 1] = { 0 };

	int vis[N + 1] = { 0 };

	dfs(1, adj, vis, inDeg, outDeg);

	int minEdges = 0;

	int totalIndegree = 0;
	int totalOutdegree = 0;

	for (int i = 1; i <= N; i++)
	{
		if (inDeg[i] == 1)
			totalIndegree++;
		if (outDeg[i] == 1)
			totalOutdegree++;
	}

	minEdges = max(N - totalIndegree, N - totalOutdegree);

	return minEdges;
}

int main()
{
	int N = 5, M = 4;

	int source[] = { 1, 1, 3, 4};
	int destination[] = { 2, 3, 4, 5 };

	cout << findMinimumEdges(source, N, M, destination);
	return 0;
}
