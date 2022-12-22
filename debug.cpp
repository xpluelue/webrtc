#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> b={"a","b"};
    vector<string> result={"a","b"};
    for(auto it:b)
    {
        for(auto j:result)
        {
            string n=j+it;
            cout<<n<<endl;
        }
    }
}