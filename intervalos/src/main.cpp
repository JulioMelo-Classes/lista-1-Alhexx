
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setprecision;
#include <vector>

int main(void)
{
  int x, n1=0, n2=0, n3=0, n4=0, n5=0;
  double p1=0, p2=0, p3=0, p4=0, p5=0, nx=0;
  std::vector<int> v;

  /*realmente não precisava de um vetor neste caso, mas ok*/
  while(cin >> std::ws >> x)
  {
    v.push_back(x);
  }
  nx=v.size();
  for(int i=0; i<nx;i++)
  {
    if(v[i]>=0 && v[i]<25)
    {
      n1+=1;
    }
    else if(v[i]>=25 && v[i]<50)
    {
      n2+=1;
    }
    else if(v[i]>=50 && v[i]<75)
    {
      n3+=1;
    }
    else if(v[i]>=75 && v[i]<100)
    {
      n4+=1;
    }
    else
    {
      n5+=1;
    }
  }
    
  p1=(n1/nx)*100;
  p2=(n2/nx)*100;
  p3=(n3/nx)*100;
  p4=(n4/nx)*100;
  p5=(n5/nx)*100;
  
  cout<<setprecision(4)<<p1<<endl;
  cout<<setprecision(4)<<p2<<endl;
  cout<<setprecision(4)<<p3<<endl;
  cout<<setprecision(4)<<p4<<endl;
  cout<<setprecision(4)<<p5<<endl;
    
  return 0;
}
