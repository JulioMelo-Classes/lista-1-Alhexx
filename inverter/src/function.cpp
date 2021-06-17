#include <iostream>
#include <array>
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
  std::string aux1, aux2;
  
  for(int i= 0;i<(tam_v/2);i++)
  {
    aux1=arr[(tam_v-1)-i];
    aux2=arr[i];
    arr[i]=arr[(tam_v-1)-i];
    arr[(tam_v-1)-i]=aux2;
  }
 
}
