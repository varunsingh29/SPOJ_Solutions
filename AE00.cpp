#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i,count=0,j;
    cin >> n;
    for(i=1;i<=pow(n,0.5);i++)
    {
        for(j=i+1;i*j<=n;j++)
            count ++;
    }
    count += (int)pow(n,0.5);
    cout << count << endl;
    return 0;
}

