
#include <iostream>
using namespace std;

int main()
{
  int prev, cur;
  cin >> prev;
  cur = prev;

  while (prev <= cur){
    cout << prev << " " << cur;
    prev = cur;
    cin >> cur;
  }

}