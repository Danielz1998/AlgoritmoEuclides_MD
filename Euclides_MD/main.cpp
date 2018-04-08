#include <iostream>


using namespace std;
int mcd(int a , int b)
{
  int c;

  a = (a < 0) ? -a:a;
  b = (b < 0) ? -b:b;
  c = (a < b) ? a : b;

  while ( (a % c) || (b % c))

    --c;

  return c;
}
int euc(int a,int b)
{
  return (!b) ? a : euc(b,a%b);
}
int main()
{
  int a,b;

  cout << "a: ";
  cin >> a;

  cout << "b: ";
  cin >> b;

  cout << "MCD: " << mcd(a,b) << endl;

  cout << "MCD(Euclides): " << euc(a,b) << endl;
}
