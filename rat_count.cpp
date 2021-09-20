//Input:
// r: 7
// unit: 2
// n: 8
// arr: 2 8 3 5 7 4 1 2
// Output:
// 4

// Explanation:
// Total amount of food required for all rats = r * unit
// = 7 * 2 = 14.
// The amount of food in 1st houses = 2+8+3+5 = 18. Since, amount of food in 1st 4 houses is sufficient for all the rats. Thus, output is 4.
#include<iostream>
using namespace std;
int main(){
    int r,unit,n,s=0,o=0;
    cout<<"rats:-";
    cin>>r;
    cout<<"Units: -";
    cin>>unit;
    cout<<"number of array: -";
    cin>>n;
    int arr[n],i=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(r*unit<=s)
            break;
        else{
            s+=arr[i];
            o++;
        }
    }
    cout<<"Output: -" << o;
    return 0;
}
