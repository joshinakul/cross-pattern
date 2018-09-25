#include <iostream>

using namespace std;

int main()
{
    int n,i,j,c=1;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        cout<<" ";
        cout<<c;
        for(j=2*(i-1);j>1;j--)
        cout<<" ";
            if(i!=1)
           cout<<c;
           c++;
          cout<<endl; }
         c=n-1;
    for(i=1;i<n;i++)
    {
        for(j=n-1;j>i;j--)

            cout<<" ";
            cout<<c;
            for(j=(2*i)-1;j>=1;j--)
                cout<<" ";
            if(i!=0)
                cout<<c;
            c--;
            cout<<endl;

    }


return 0;

    }

