#include "mcp.h"

bool adj_matrix[N_v][N_v];		//�ڽӾ���
bool mc[N_v];					//�����
int mc_count = 0;				//����ż���

int main()
{
	ifstream fin("in.txt");

	int n, m;
	cin >> n;
	cin >> m;

	char trash;
	int x, y;
	for (int i = 0; i < m; i++)
	{
		//cin >> trash;
		cin >> x >> y;
		adj_matrix[x][y] = 1;
		adj_matrix[y][x] = 1;
	}

	find_mc_low(n);

	cout << "����Ű���������\n" << mc_count << endl;
	cout << "����Ű����㣺\n";
	for (int i = 0; i < n; i++)
	{
		if (mc[i])
			cout << i + 1 << " ";
	}
	cout << endl;

	system("pause");




}