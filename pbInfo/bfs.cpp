//https://www.pbinfo.ro/probleme/19/bfs

#include<bits/stdc++.h>
using namespace std;

ifstream f("BFS.in");
ofstream g("BFS.out");

int viz[101], n, m, x, y, pl, k;
vector < int > G[101];
int main() {
  f >> n >> m >> pl;

  for (int i = 1; i <= m; i++) {
    f >> x >> y;
    G[x].push_back(y);
    G[y].push_back(x);
  }

  for (int i = 1; i <= n; i++)
    sort(G[i].begin(), G[i].end());
  queue < int > q;
  q.push(pl);
  viz[pl] = 1;
  while (!q.empty()) {
    k = q.front();
    for (auto it : G[k])
      if (viz[it] == 0) {
        viz[it] = 1;
        q.push(it);
      }

    g << k << ' ';
    q.pop();
  }

}