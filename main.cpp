
#include <iostream>
using namespace std;

int main()
{
  int prev, cur, flag; 
  
  flag == 1;
  cin >> prev >> cur;
  cout << prev << " ";

  while ((flag == 1) || (prev > cur)){
	flag = 0;
    cout << cur << " ";
    prev = cur;
    cin >> cur;
  }
cout << endl;
}