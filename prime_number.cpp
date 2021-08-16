#include<bits/stdc++.h>

using namespace std;

const int MAX = 1000;
bool marked[MAX+ 4];

void prime_sive()
{
    for( int i = 3; i * i <= MAX; i += 2)
    {
        if(marked[i] == false)
        {
            for(int j = i * i; j <= MAX; j += i)
            {
                marked[j] = true;
            }
        }
    }
}
bool prime(int n)
{
    if(n % 2 == 0)
    {
        return false;
    }
    else
    {
        return marked[n] == false;
    }

}
int main()
{
    prime_sive();
    int a;
    cin >> a;
    bool x = prime(a);
//cout <<x;
    if(x)
    {
        cout <<"Yes" <<endl;
    }
    else
    {
        cout <<"No"<<endl;
    }

    return 0;
}
