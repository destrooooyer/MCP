#include "mcp.h"

bool adj_matrix[N_v][N_v];		//�ڽӾ���
bool mc[N_v];					//�����
int mc_count = 0;				//����ż���

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

	//find_mc_low(n);
	find_mc_sa(n);
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