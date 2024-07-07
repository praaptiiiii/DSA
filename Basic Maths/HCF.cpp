#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x=92;
    int y=64;
    while (x>0 && y>0){
        if (x>y){
            x=x%y;
        }
        else{
            y=y%x;
        }
    }
    cout<<max(x,y);
    return 0; 
}
