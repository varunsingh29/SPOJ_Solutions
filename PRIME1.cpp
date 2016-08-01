// Space can be optimized using bitset by a factor of 1/32 and removing even numbers
// effectively reduces space by 1/32/2 = 1/64. But premature optimization is the
// root of all evil. So simple segmented sieve.

// Can be modified to use multiple segments.
#include <iostream>
#include <cmath>
#include <vector>
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;
void sieve (int n, vector<int> &base)
{
    vector<bool> draft(n+1,true);
    draft[0] = false;
    draft[1] = false;
    int i,j;
    for(i=2; i<=sqrt(n); i++)
    {
        for(j=i*i; j<=n; j+=i)
            draft[j] = false;
    }
    for(i=2; i<=n; i++)
        if( draft[i] )  base.push_back(i);
}
void segmented_sieve (vector<int> &base, int l, int h, vector<bool> &primes, vector<int> &list_primes)
{
    double i;   // So that ceil function works properly else segmentation fault
    // Condition for when l < sqrt(H)
    if (l <= sqrt(h))
        {
            for(i=0; i <= sqrt(h)-l; i++)
                primes[i] = false;
            int newl = sqrt(h)+1;
            tr(base,it)
            {
                if(*it >= l)
                list_primes.push_back(*it);
            }
        }
    for( vector<int>::iterator it = base.begin(); it != base.end(); it++)
    {
        double p = *it;
        for( i= ceil(l/p); (i*p) <= h; i++)
            primes[i*p-l] = false;
    }
    for(i=0;i<=h-l; i++)
        if (primes[i])  list_primes.push_back(i+l);
}
int main()
{
    int h,l,t;
    cin >>t;
    while( t--)
    {
        cin >> l >> h;
        vector<int> base, list_primes;
        sieve(sqrt(h), base);
        vector<bool> primes((h-l)+1, true);
        segmented_sieve(base, l, h, primes, list_primes);
        tr(list_primes,it)
            cout<<*it<<endl;
        cout<<endl;
    }
    return 0;
}
