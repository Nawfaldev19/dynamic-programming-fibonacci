#include <iostream>
#include<vector>

using namespace std;


int MemoizedFab(int n, vector<int>& vect)
{
    if (vect[n] != -1)
        return vect[n];

    vect[n] = MemoizedFab(n - 1, vect) + MemoizedFab(n - 2, vect);
    return vect[n];
}

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    vector<int>vect(n + 1, {-1});
    vect[0] = 0, vect[1] = 1;

    MemoizedFab(n, vect);
    return vect[n];
}


int main()
{
    //solved in leetcode-beats 100%
    cout << fib(6);

}
