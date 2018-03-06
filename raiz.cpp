#include<iostream>
#include<cmath>
float raiz(float n);
int main ()
{std::cout.precision(7);
  int i;
  float a, b;
  b=0;
  for(i=0;i<=100;i++)
    {
      a=raiz(b);
      std::cout<<b<<"   "<<a<<std::endl;
      b+=0.0100000000000;
    }
}
float raiz(float n)
{float r;
  r=5.0-(std::sqrt(25-(std::pow(n,2))));
  return r;

}
