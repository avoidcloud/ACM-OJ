#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bookpage,fRead,limRead,speed,reRead;
    cin>>bookpage>>fRead>>limRead>>speed>>reRead;
    int remain=bookpage; remain-=fRead; int days=1;
    if(remain>0)
    {
        while(remain>0)
        {
            fRead=min(limRead,fRead+speed);
            remain+=reRead;
            remain-=fRead;
            days++;
            if(remain<=0) break;
        }
    }
    cout<<days<<endl;
}
