//https://www.pbinfo.ro/probleme/2631/h4

#include <bits/stdc++.h>


using namespace std;
map <string , int> r;
int n , maxi;
int main()
{
    string s;
    while(cin >> s)
    {
        sort(s.begin() , s.end());
        r[s]++;
        if(r[s] > maxi) maxi = r[s];
    }
    cout << maxi;
    return 0;
}