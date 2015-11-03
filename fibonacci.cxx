#include <iostream>

using namespace std;

int main() {
  
  int N;
  cout << "N" << endl;
  cin >> N;
  int x0 = 0;
  int x1 = 1;
  int x;
  
  for(int i = 2; i<=N; i++) {
    x = x1 + x0;
    x0 = x1;
    x1 = x;
  }
  
  cout <<x<< endl;
  
  return 0;
}