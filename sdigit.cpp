#include<iostream>
using namespace std;
int sundigit(int n){
    int sum=0;
    while(n!=0){
        int last=n%10;
        sum+=last;
        n/=10;
    }
return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sundigit(n)<<endl;


}