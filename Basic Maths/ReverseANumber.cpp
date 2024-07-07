#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n=12300;
    int x=0;
    int i=1;
    while (n>0){
        x=(x*10)+(n%10);
        n/=10;
        i++;
    }
    cout<<x;
    return 0; 
}
