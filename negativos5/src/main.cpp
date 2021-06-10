#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
  int v[5], cont=0;

  for(int i=0;i<SIZE;i++)
  {
    cin>>v[i];
    if(v[i]<0) cont++;
  }
  cout<<cont;
  cont=0;
  return 0;
}
