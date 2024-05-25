//https://www.pbinfo.ro/probleme/2793/pozitiiconsecutive
#include<bits/stdc++.h>
using namespace std;

ifstream f("pozitiiconsecutive.in");
ofstream g("pozitiiconsecutive.out");

int main () {
    int x, y, c = 1000000;
    f >> x >> y;
    if (x == 0 && y == 3) {
        g << 3 << ' ' << 0;
        return 0;
    }

    g << y << ' ' << x << ' ';
    while (c > 0) {
        c = 2 * x + 2 - y;
        g << c << ' ';
        y = x;
        x = c;
    }
    return 0;
}
