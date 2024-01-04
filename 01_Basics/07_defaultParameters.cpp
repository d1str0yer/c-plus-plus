// In this program we will see functions with default parameters.

#include <iostream>
using namespace std;

// A default paramenter can't be at first place as it's not allowed, it can only come at last place after other parameters.
void sum(int x = 10, int y) // after calling this function, it will give an compile time error.
{
    /// .... some code
} 
int sumOfNumbers(int x, bool z, int y = 10) // here y is a default parameter, if no value passed to y then 10 will be used.
{
    int sum = x + y + z;
    return sum;
}

int main()
{
    cout<<"I am main function"<<endl;
    cout<<sumOfNumbers(20,true)<<endl; // without an argument of y   // 20 + 10 + 1 = 31
    cout<<sumOfNumbers(20,false,5)<<endl; // with an argument of y    // 20 + 5 + 0 = 25
}