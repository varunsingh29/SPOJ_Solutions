#include <bits/stdc++.h>
using namespace std;
void get_sum (string &sum, string &s1, string &s2)
{
    int carry = 0,len1,len2,i,temp,num;
    len1 = s1.length();
    len2 = s2.length();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(i=len2;i<len1;i++)
        s2  += '0';
    for(i=0;i<=len1;i++)
    {
        if(carry == 1 && i == len1)
        {
            sum += '1';
            break;
        }
        else if(i == len1)  break;
        temp = (int)((s1[i]-'0') + (s2[i] - '0')) + carry;
        num = (char)(temp%10)+'0';
        sum += num;
        if(temp/10) carry=1;
        else    carry=0;
    }
    reverse(sum.begin(),sum.end());
}
void result(string &res, string &sum, string &fin)
{
    int p=0,i,len,temp,num;
    size_t pos;
    len = sum.length();
    for(i=0;i<len;i++)
    {
        temp = ((int)(sum[i]-'0')) + (10*p);
        num = ((char)(temp/2))+'0';
        res += num;
        if(temp % 2)    p=1;
        else    p=0;
    }
    pos  = res.find_first_not_of('0');
    fin = res.substr(pos,string::npos);
    reverse(res.begin(),res.end());
}
void calcx(string &x, string &res, string &s1)
{
    int borrow = 0, temp,i,num,dig;
    size_t pos;
    for(i=0;i<s1.length();i++)
    {
        temp = (((int)s1[i]-'0') - borrow);
        if((temp+'0')<res[i])
        {
            num = temp+10 - ((int)res[i]-'0');
            dig = (char)(num)+'0';
            x += dig;
            borrow = 1;
        }
        else
        {
            num = temp - ((int)res[i]-'0');
            dig = (char)(num) + '0';
            x += dig;
            borrow = 0;
        }
    }
    reverse(x.begin(),x.end());
    pos = x.find_first_not_of('0');
    x = x.substr(pos,string::npos);
}
int main()
{
    int t = 10,i;
    while(t--)
    {
        string s1,s2,sum,res,x,fin;
        cin >> s1 >> s2;
        if( s1 == "1")
        {
            cout << "1" << endl<< "0" << endl;
            continue;
        }
        else if (s1 == s2)
        {
            cout << s1 << endl << "0" << endl;
            continue;
        }
        get_sum(sum,s1,s2);
        result(res,sum,fin);
        calcx(x,res,s1);
        cout << fin << endl;
        cout << x << endl;
    }
    return 0;
}

