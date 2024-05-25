//https://www.pbinfo.ro/probleme/422/graf-partial-2

#include <bits/stdc++.h>
using namespace std;
ifstream fin ("graf_partial_2.in");
ofstream fout ("graf_partial_2.out");
int a[101][101], n, x, y, mx, nr, m, mn = 1000000000;
int main()
{
    fin >> n;
    while(fin >> x >> y)
    {
        if (a[x][y] == 0)
        {
            a[x][0]++;
            a[y][0]++;
        }
        a[x][y] = 1;
        a[y][x] = 1;
        mx = max(mx, max(a[x][0], a[y][0]));
    }
    m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((a[i][0] == mx || a[j][0] == mx)&&(a[i][j] == 1))
            {
                m++;
                a[i][j] = 0;
                a[j][i] = 0;
            }
        }
    }
    fout << m << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)fout << a[i][j] << ' ';
        fout << endl;
    }
    return 0;
}