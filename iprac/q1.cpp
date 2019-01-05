#include <iostream>
using namespace std;


void run(){
 int n, m;
 int q, n1, n2;
 cin >> n >> m;
   q = n/m; 
   n1 = m * q;
   n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
   if (abs(n - n1) < abs(n - n2)) cout << n1 <<endl;
   else cout << n2 <<endl;
}


int main(){
    int T;
    cin >> T;
    while(T){
        run();
        T--;
    }
    return 0;
}
