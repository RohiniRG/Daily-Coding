#include <bits/stdc++.h>

using namespace std;

int setBits(int N) {
    int count = 0;
    while(N > 0)
    {
        if (N & 1)
        {
            count += 1;
        }
        N = N >> 1;
    }
    return count;
}

int main() {
    int N;
    cout<<"Enter N: ";
    cin>>N;

    cout<<"The number if set bits are: "<<setBits(N)<<endl;

    return 0;
}

