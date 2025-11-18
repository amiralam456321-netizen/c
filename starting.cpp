#include <iostream>
using namespace std;
int main() {
    int a,b,c,max;
    cout<<"Enter the number of a,b,c";
    cin>>a>>b>>c;
    if (a>b){
        if(a>c)
        max=a;
        else
        max=c;
    }
     else{
        if(b>c)
        max=b;
        else
        max=c;
        
        }
        cout << "largest value is"<<max;

    return 0;
}