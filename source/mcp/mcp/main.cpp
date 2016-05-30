#include "mcp.h"

bool adj_matrix[N_v][N_v];		//邻接矩阵
bool mc[N_v];					//最大团
int mc_count = 0;				//最大团计数

int main()
{
	char s[100];
	cin >> s;
	ifstream fin(s);

	int n, m;
	char trash;
	fin >> trash >> trash >> trash >> trash >> trash;
	fin >> n >> m;

	int x, y;
	for (int i = 0; i < m; i++)
	{
		//cin >> trash;
		fin >>trash>> x >> y;
		adj_matrix[x-1][y-1] = 1;
		adj_matrix[y-1][x-1] = 1;
	}
	cout << "start" << endl;
	//find_mc_low(n);
	find_mc_ts(n);
	cout << "最大团包含点数：\n" << mc_count << endl;
	cout << "最大团包含点：\n";
	for (int i = 0; i < n; i++)
	{
		if (mc[i])
			cout << i + 1 << " ";
	}
	cout << endl;

	system("pause");




}