#include "function.h"

#include <iterator>
using std::iter_swap;


/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
  int tam_v=arr.size();
  
  if(tam_v%2==0)
  {
    for(int i= 0;i<(tam_v/2);i--)
    {
      iter_swap((arr.begin()+i), (arr.end()-i));     
    }
  }
  else
  {
    for(int i= 0;i<((tam_v-1)/2);i--)
    {
      iter_swap((arr.begin()+i), (arr.end()-i));     
    }
  }
}
