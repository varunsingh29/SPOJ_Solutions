#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, res, t, n;
    cin >> t;
    while (t--)
    {
        res =0;
      cin >> n;
      vector <int> men(n), women(n);
        for(i=0;i<n;i++)
          cin >> men[i];
          sort(men.begin(), men.end());
        for(i=0;i<n;i++)
        cin>> women[i];
        sort(women.begin(),women.end());
        for(i=0;i<n;i++)
            res += men[i]*women[i];
        cout << res << endl;
    }
    return 0;
}
