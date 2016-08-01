#include <iostream>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (!n) break;
        cout << ((n+1)*(2*n+1)*n)/6 << endl;
    }
    return 0;
}
