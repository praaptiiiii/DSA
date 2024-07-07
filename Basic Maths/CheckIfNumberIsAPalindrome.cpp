#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n=12321;
    int n2=n;
    int x=0;
    int i=1;
    while (n2>0){
        x=(x*10)+((n2)%10);
        (n2)/=10;
        i++;
    }
    cout<<(x==n);
    return 0; 
}
