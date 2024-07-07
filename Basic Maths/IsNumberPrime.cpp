#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n=230;
    bool ans=true;
    int limit=sqrt(n);
    for (int i=2; i<=limit; i++){
        if (n%i==0){
            ans=false;
            break;
        }
    }
    cout<<ans;
    return 0; 
}
