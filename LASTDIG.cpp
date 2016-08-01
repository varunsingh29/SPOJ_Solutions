#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,res,x,y;
    cin >> t;
    vector<vector<int>> look = {{0,0,0,0},
        {1,1,1,1},
        {2,4,8,6},
        {3,9,7,1},
        {4,6,4,6},
        {5,5,5,5},
        {6,6,6,6},
        {7,9,3,1},
        {8,4,2,6},
        {9,1,9,1}};
    while (t--)
    {
        cin >> a >> b;
        x = a%10;
        y = b%4;
        if ( b == 0)
        res = 1;
        else if ( y == 0)
           res = look[x][3];
        else
           res = look[x][y-1];
        cout << res << endl;
    }
    return 0;
}
