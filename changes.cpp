#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int cont;
    int money[] = {0 , 1 , 5 , 10 , 25 , 50};
    while(cin>>cont)
    {
        long long d[6][cont + 1];
        memset(d , 0 , sizeof(d));
        d[1][1] = 1;
        //cout << d[5][cont];
        for(int i = 1 ; i < 6 ; i++)
        {
            d[i][1] = 1;
            d[i][0] = 1;
        }

        for(int j = 1 ; j <= cont ; j++)
        {
            for(int i = 1 ; i <= 5 ; i++)
            {
                if(j < money[i])
                {
                    d[i][j] = d[i - 1][j];
                    continue;
                }
                d[i][j] = d[i - 1 ][j] + d[i][j - money[i]];
            }
        }
        cout<<d[5][cont]<<endl;
    }
    return 0;
}