#include <iostream>
using namespace std;

int addition1(int) // this is valid, but not recommended
{
    int j;
    int k = 0;
    int sum = j + k; 
    return sum;
}
int addition2(int a) // function with one parameter
{
    return a + 0;
}

int addition2(int a, int b, int c) // overloading the function with more parameters
{
    return a + b + c;
}
void multiply(int x, char y, string firstName) // void type means, no return value
{
    int sum1 = x + y; // as x is int, so char will be converted to int first then addition will happen.
    int sum2 = y + x; // as y is char, so int will be converted to char first then concatenation will happen.
    string sum3 = y + firstName; // as y is char and name is string here string concatenation will happen.
    string sum4 = firstName + y; // string concatenation of name and y
    cout<<sum1<<endl; // 5 + 97 = 102
    cout<<sum2<<endl; // 97 + 5 = 102
    cout<<sum3<<endl; // a + man = aman
    cout<<sum4<<endl; // man + a = mana
}
void multiply(int v, int x, char y, char z, string firstName, string lastName) // overloading multiply function with two more parameters
{   
    char vx = v + x; // 97 + 5 -> 102 = f
    char xy = x + y; // 5 + a -> 5 + 97 -> 102 = f
    char yz1 = y + z; // �
    int yz2 = y + z; // a + r -> 97 + 114 = 211
    string yz = y + " " + z; // a + " " + r = �
    string fullName = y + firstName + z + lastName; // a + "man" + r + "aman" = amanraman
    cout<<vx<<endl;
    cout<<xy<<endl;
    cout<<yz1<<endl;
    cout<<yz2<<endl;
    cout<<yz<<endl;
    cout<<fullName<<endl;
}
int main(){
    // cout<<addition1(5)<<"\n"; // garbage value
    // cout<<addition2(5,5,5)<<"\n"; // 15
    multiply(97,5,'a','r',"man","aman");
}