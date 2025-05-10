#include <iostream>
using namespace std;
int main() {
 int a, b =0 , x ;
 cin >> x;
        while(x>0){
        a = x % 10;
        b = b*10+a;
        x=x/10;
         }
  cout << b;
    return 0;
}