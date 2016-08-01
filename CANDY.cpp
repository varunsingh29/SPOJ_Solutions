#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, res=0, i, avg, sum=0;
    while(1)
    {
        cin >> n;
        res=0; sum=0;
        if ( n == -1 )  break;
        vector<int> arr(n);
        for( i=0; i<n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        avg = sum/n;
        if (sum%n == 0)
        {
           for(i=0; i<n; i++)
           {
                if ( arr[i] > avg )
                    res += arr[i] - avg;
           }
            cout << res << endl;
        }
        else cout << "-1" << endl;
    }
    return 0;
}
