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
