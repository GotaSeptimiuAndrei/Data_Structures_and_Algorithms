//https://www.pbinfo.ro/probleme/2966/yinyang

#include <bits/stdc++.h>
using namespace std;
ifstream fin("yinyang.in");
ofstream fout("yinyang.out");
int n , m , a[101][101] , cnt , ok;
int swaplinii(int x , int y)
{
    for(int i = 1 ; i <= m ; i++)
        swap(a[x][i] , a[y][i]);
}
int swapcol(int x , int y)
{
    for(int i = 1 ; i <= n ; i++)
        swap(a[i][x] , a[i][y]);
}
int main()
{
    fin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            fin >> a[i][j];
    for(int k = 1 ; k <= m ; k++)
    {
        for(int i = 1 ; i <= n ; i++)
            for(int j = 2 ; j <= m  ; j++)
                if(a[i][j] < a[i][j - 1])
                    swapcol(j , j - 1) , cnt++;
    }
    for(int k = 1 ; k <= n ; k++)
    {
        for(int i = 2 ; i <= n ; i++)
            for(int j = 1 ; j <= m  ; j++)
                if(a[i][j] < a[i-1][j])
                    swaplinii(i , i - 1) , cnt++;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
            if(a[i][j] < a[i][j - 1] || a[i][j] < a[i - 1][j]) ok = 1;
    }
    if(ok == 0) fout << cnt;
    else fout << -1;
}