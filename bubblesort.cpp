#include<iostream>
using namespace std;
int main()
{
    int a[5]={4,1,3,7,9};
    for(int i=3;i>=0;i--)
    {    bool swapped=0;
        for(int j=0;j<=i;j++)
        {
            if(a[j]>a[j+1])
               {
                 swap(a[j],a[j+1]) ;
                 swapped=1;
               }
        }
        if(swapped==0)
        {
            break;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
