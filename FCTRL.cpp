#include <iostream>
using namespace std;
int main()
{
    int t,n,prod,res;
    cin >> t;
    while ( t-- )
    {
        cin >> n;
        res =0; prod =5;
        while(prod <= n)
        {
            res += n/prod;
            prod *= 5;
        }
        cout << res << endl;
    }
    return 0;
}
