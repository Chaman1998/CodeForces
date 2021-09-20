
// # CodeForces
// For Competitive Coding
// Examples
// input
// 512 4
// output
// 50
// input
// 1000000000 9
// output
// 1
// Note
// The first example corresponds to the following sequence: 512→511→510→51→50.
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<n%10<<endl;
    cout<<n/10<<endl;
    for(int i=0;i<k;i++){
        if(n%10==0)
        {
            n/=10;
            cout<<n<<endl;
        }
            
        else
        {
            n--;
            cout<<n<<endl;
        }
            
    }

    cout<<n;
}
