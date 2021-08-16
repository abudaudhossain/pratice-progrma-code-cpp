#include <bits/stdc++.h>

using namespace std;
bool even1(int a)
{
    bool b;
    if(a % 2 == 0)
        b = true;
    else b = false;
    return b;
}

int main()
{
   int n, i, j, even = 0, odd = 0, ans,sum = 0;
   cin >> n;
   int arr[n];
   for(i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   sort(arr, arr+n);
   for(i = 0; i < n; i++)
   {
       bool eoro;
       eoro =even1(arr[i]);
       if(eoro)
        even ++;
       else
        odd ++;

   }
   if( even < odd)
   {
        ans = odd - even;
        for(j = 0; j+1 < ans; j++)
        {
            if( even1(arr[j]))
            {ans ++;
            }
            else
                sum += arr[j];

        }
   }

   else{
         ans = even - odd;
     for(j = 0; j+1 < ans; j++)
        {
            if( even1(arr[j]))
            {
                sum += arr[j];
            }
            else ans ++;
        }
   }



   cout <<sum  << endl;


    return 0;
}
