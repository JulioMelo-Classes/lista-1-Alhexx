#include <iostream>
using namespace std;

int main( void )
{
  int a, b;
  bool rodando = true;
  /*blz, não entendendi esse "rodando", mas ok*/
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
