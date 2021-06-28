#include "function.h"

/*ok*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
  if (n <= 1)
  {
    vector<unsigned int> v1;
    return v1;
  }
    
  int n1=1, n2=1, aux=0;
  vector<unsigned int> v={1, 1};


  while(aux<n)
  {
    aux=n1+n2;
    n1=n2;
    n2=aux;
    if (aux >= n)
      break;
    v.push_back(aux);
  }

    
  return v;
}
