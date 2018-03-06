#include<iostream>
#include<cmath>

double factorial (double n);
double termino (double n,double m);

int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double t,suma,n,num;
  num=3.14159;
  n=0;
  suma=0;
  do
    { 
      t=termino(n,num);
      suma+=t;
      std::cout<<n<<"\t"<<suma<<"\t"<<t<<std::endl;
      n+=1;
    }
  while(std::abs(t)>=(std::pow(10,-6)));
}

double factorial (double n)
{
  double i;
  if (n==1||n==0)
    {i=1;}
  else
    {i=n*factorial(n-1);}
  return i;
}

double termino (double n,double m)
{
  double valor;
  valor=(std::pow(m,n))/(factorial(n));
  return valor;
  
}
