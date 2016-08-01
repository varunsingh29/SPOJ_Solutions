#include <iostream>
#include <cmath>
using namespace std;
void rev(int &num)
{
    int temp =0;
    while( num > 0 )
    {
        temp = (temp*10)+(num % 10);
        num /= 10;
    }
    num = temp;
}
int main()
{
    int n, i, tempsum, a, b;
    cin >> n;
    while ( n-- )
    {
        cin >> a >> b;
        int l1 = (int) log10(a);
        int l2 = (int) log10(b);
        int t = abs(l1 - l2);
        l1 > l2 ?  b*= pow(10,t) : a*= pow(10,t);
        rev(a);
        rev(b);
        tempsum = a + b;
        while ( tempsum % 10 == 0)
            tempsum /= 10;
        rev(tempsum);
        cout << tempsum << endl;
    }
    return 0;
}


