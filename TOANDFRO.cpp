#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t, i, j, k;
    cin >> t;
    while(t)
    {
        string text;
        vector < vector<char>> inp;
        cin >> text;
        int rows = (text.length()/t);
        bool direction = true;
        for(i=0, k=0; i<rows; i++,direction = !direction)
        {
            vector<char> temp;
            for(j=0;j<t;j++)
                temp.push_back(text[k++]);
            if(!direction)
                reverse(temp.begin(),temp.end());
            inp.push_back(temp);
        }
        for(i=0;i<t;i++)
        {
            for(j=0;j<rows;j++)
            cout<<inp[j][i];
        }
        cout<<endl;
        cin>>t;
    }
    return 0;;
}
