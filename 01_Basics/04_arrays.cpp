#include <iostream>
using namespace std;

int main(){
    int a1[] = {1,2,3};
    int n = sizeof(a1)/sizeof(a1[0]);
    int a2[n];
    for(auto j=0; j<n; ++j){
        cout<<a1[j];
    }
    for(auto j=0; j<n; ++j){
        a2[j]=a1[j];
        cout<<a2[j];
    }
    int sum = 0;
    for(auto j=0; j<n; ++j){
        sum += a1[j];
    }
    cout<<sum;
    // range for loop
    int s = 0;
    for (auto j : a1)
    {
        s += j;
    }
    cout<<s; // 6
}