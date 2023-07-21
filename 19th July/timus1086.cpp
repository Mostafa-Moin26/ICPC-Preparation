#include <bits/stdc++.h>

using namespace std;

#define MAX 1000005

void Sieve(vector<int> &primes)
{
    bool IsPrime[MAX];
    memset(IsPrime, true, sizeof(IsPrime));
    for (int p = 2; p * p < MAX; p++)
    {
        if (IsPrime[p] == true)
        {
            for (int i = p * p; i < MAX; i += p)
                IsPrime[i] = false;
        }
    }
    for (int p = 2; p < MAX; p++)
    if (IsPrime[p])
            primes.push_back(p);
}

int main()
{
    int t;
    cin>>t;
    
    vector<int> primes;
    Sieve(primes);

    while(t--){
        int n;
    cin>>n;
    cout<<primes[n-1]<<endl;
    }
    return 0;
}