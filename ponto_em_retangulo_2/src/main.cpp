/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
  /*blz, faltou adicionar algumas condições caso o retângulo não fosse no formato esperado, mas vou considerar!*/
  Ponto IE, SD, P;
  while(cin>>IE.x>>IE.y>>SD.x>>SD.y>>P.x>>P.y)
  {
    if(pt_in_rect(IE, SD, P) == location_t::BORDER)
    {
      cout<<"border"<<endl;
    }
    else if(pt_in_rect(IE, SD, P) == location_t::INSIDE)
    {
      cout<<"inside"<<endl;
    }
    else if(pt_in_rect(IE, SD, P) == location_t::OUTSIDE)
    {
      cout<<"outside"<<endl;
    }
    else
    {
      cout<<"invalid"<<endl;
    }
  }
  return 0;
}
