// input
// 8 5
// 10 9 8 7 7 7 5 5
// output
// 6
// input
// 4 2
// 0 0 0 0
// output
// 0
// Note
// In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

// In the second example nobody got a positive score.

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        // cout<<"a"<<a<<endl;
        // cout<<"i"<<i<<endl<<endl;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        // cout<<"b"<<b<<endl;
        // cout<<"i"<<i<<endl;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}
