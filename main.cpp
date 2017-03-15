#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d=0;
    cin>>a>>b;
    if(a%2==0)
        a+=1;
    for(c=a;c<=b;)
    {
        d+=c;
        c+=2;
    }
    cout<<d;
    return 0;
}
