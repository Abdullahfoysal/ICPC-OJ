#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        int temp=num;
        if(num==0)
            break;
        int Count=0,i=0;
        while(num>=3)
        {
            num-=3;
            Count++;
            num+=1;
        }
        if(num==2)
            Count++;
        cout<<temp+Count<<endl;
    }
}
