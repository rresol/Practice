#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int freq[n];
    for(int i=0;i<n;i++)
    {
        cin>>freq[i];
    }
    sort(freq,freq+n);
    int k;
    cin>>k;
    int key[k];
    int sum =0;
    int tot =0;
    for(int i=0;i<k;i++)
    {
        cin>>key[i];
        sum+=key[i];
    }
    if(sum<n)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int j =0;
        int it = 1;
        for(int i=0;i<n;i++)
        {
                if(key[j])
                {

                }
                else
                {
                    while(!key[j])
                    {
                        j++;
                        if(j==k)
                        {
                            it++;
                            j=0;
                        }
                    }
                }
                tot += (freq[n-i-1]*it);
                    key[j]--;
                    j++;
                    if(j==k)
                    {
                        it++;
                        j = 0;
                    }

        }

    cout<<tot<<endl;
    }

    return 0;
}
