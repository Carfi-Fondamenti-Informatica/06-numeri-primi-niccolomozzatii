#include <iostream>
#include "lib.h"
int main(){
  int n=0; cin >> n;
  int m=(n-1);
  if (primo (n, m) == true) {
    cout << "numero primo" << endl;
  } else if (primo (n, m) == false) {
    cout << "numero non primo" << endl;
  }
  return 0;
}
