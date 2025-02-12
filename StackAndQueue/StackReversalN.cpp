// Reverse A Stack With Numbers
#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element)
{
    // base case
    if (s.empty())
    {
        s.push(element);
        return;
    }
    int ans = s.top();
    s.pop();

    // Recursive Call
    insertAtBottom(s, element);
    s.push(ans);
}
void reverseStack(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }
    int ans = st.top();
    st.pop();
    // recursive call
    reverseStack(st);
    insertAtBottom(st, ans);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;


}