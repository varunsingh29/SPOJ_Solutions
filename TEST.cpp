#include <iostream>
using namespace std;
int main()
{
    int temp;
    while(1)
    {
        cin >> temp;
        if ( temp == 42 )   break;
        else    cout << temp << endl;
    }
    return 0;
}
