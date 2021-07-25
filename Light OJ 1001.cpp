#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,t,b,a;
    cin>>t;
    while (t--)
    {
        cin>>n;
        a=0;
        if (n>10)
            a=n-10;

        b=n-a;
        cout<<a<<' '<<b<<endl;
    }
    return 0;

}
