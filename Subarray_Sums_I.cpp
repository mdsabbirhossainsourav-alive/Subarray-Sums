#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> arr(n);
    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }
    long long sum = 0;
    int lf = 0;
    int cnt = 0;
    for(int i=0; i<n; i++) 
    {
        sum += arr[i];
        while(sum > x) 
        {
            sum -= arr[lf];
            lf++;
        }
        if(sum == x) 
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}