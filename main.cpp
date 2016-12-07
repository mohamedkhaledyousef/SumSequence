#include <iostream>

using namespace std;

int main()
{
    int n,m;

    while (true)
        {
        cin >>n>>m;

        if (n <=0 || m <=0)
            break;

        else if (n<m && m >0 && n >0) //if (n<m)
        {
            int sum=0;
            for (int i=n ; i<=m ; ++i)
                {
                cout <<i<<" ";
                sum=sum+i;

                }
            cout<<"Sum="<<sum<<endl;
        }

        else if (n>m && m>0 && n>0)  //if (n>m)
        {
            int sum=0;
            for (int i=m ; i<=n ; ++i)
                {
                cout <<i<<" ";
                sum=sum+i;

                }

            cout<<"Sum="<<sum<<endl;
        }
        }

    return 0;
}
