#include<bits/stdc++.h>
#include<cstdlib>
//macro definition
//#define LIMIT 5
//#define AREA(l, b) (l+b)
int Gcd(long long int a,long long int b ,long long int c)
{
    int temp;
    while(b%a !=0)
    {
        temp=b%a;
        if(temp==0)
        {
            if(c!=0)
            {
                temp=c;
                c=0;
            }
            else
                {break;}
        }
        b=a;
        a=temp;
    }
    return a;

}

using namespace std;

int main()
{


 long long  int arr[4],d;
    cin >>arr[0]>>arr[1]>>arr[2];
    d=Gcd(arr[0],arr[1],arr[2]);
    cout <<d;

    return 0;
}
