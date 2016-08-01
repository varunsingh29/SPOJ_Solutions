#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
stack<char> st;
int main(){
    string s;
    int i,j,k,tc;
    scanf("%d",&tc);
    while(tc--){
        cin >> s;
        for(i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
               st.push(s[i]);
            else if(s[i]==')'){
                while(st.top()!='('){
                    printf("%c",st.top());
                    st.pop();
                }
                st.pop();
            }
            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
