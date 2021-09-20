// # CodeForces
// For Competitive Coding
// inputCopy
// 8
// outputCopy
// YES
// Note
// For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).
#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
