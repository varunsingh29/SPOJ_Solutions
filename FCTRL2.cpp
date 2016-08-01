#include <iostream>
using namespace std;
int main()
{
    int size = 200, i, temp, x, n, m, j, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int result [size];
        result[0] = 1; m=1;
        temp =0;
        for ( i=1; i<=n; i++)
        {
           for(j=0; j<m; j++)
           {
               x = result[j] * i + temp;
               temp = x/10;
               result[j] = x%10;
           }
           // For accomadating carry
           while (temp > 0)
           {
                result[m] = temp%10;
                temp /= 10;
                m++;
           }
        }
        //Printing the result
        for(i=m-1; i>=0; i--)
            cout << result[i];
        cout<<endl;
    }
    return 0;
}
