#include<iostream>
using namespace std;
int is_prime(int n);
int main()
{
    int i;
    cin >> i;
    if(is_prime(i)==1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
int is_prime(int n)
{
    if(n==1)
        return 0;

    int i=2;
    for(; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    
    return 1;
}