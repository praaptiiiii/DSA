#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n=371;
    int n2=n;
    int x=0;
    
    while (n2 >0){
        int digit=(n2 % 10);
        x+=pow(digit,3);
        n2=n2 /10;
    }
    cout<<(n==x);
    return 0; 
}
