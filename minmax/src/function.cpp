#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*ok!!*/
std::pair<int,int> min_max( int V[], std::size_t n )
{
  int ma=0, mi=0;
  if(n==0) return { -1, -1 };

  for(int i=0; i<n; i++)
  {
      if(V[i]<V[mi]) mi=i;
      if(V[i]>=V[ma]) ma=i;
      
  }
  return { mi, ma };
}

//cat ../tests/main.cpp
