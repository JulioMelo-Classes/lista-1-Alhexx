/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
/*
using std::cout;
using std::cin;
using std::endl;
*/
using namespace std;

int main( void )
{
  int a, b;
  bool rodando = true;
  while(cin>>a>>b)
  {
    int soma=0;
      
    if(b>0)
    {
      for(int i=a; i<a+b;i++)
      {
        
        soma+=i;
        //cout<<i<<" ";
      }
      cout<<soma<<endl;
    }
    else if(b<0)
    {
      for(int i=0; i<-b;i++)
      {
        soma+=a;
        a-=1;
        //cout<<a<<" ";
      }
      //cout<<endl;
      cout<<soma<<endl;
    }
    else
    {
      cout<<a<<endl;
    }
}
  return 0;
}
