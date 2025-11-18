#include <iostream>
using namespace std;
inline int sum(int n1, int n2);
int main (){
  
int s;
s=sum(10,20);
cout<<"sum is"<<s;


return 0;
}
inline int sum(int n1,int n2){

return n1+n2;
}
