#include<iostream>
#include<cmath>

double factorial (double n);
double termino (double n,double m);
double convergencia (double num);

int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double t,suma,n,num;
  num=3.14159;
  n=0;
  suma=0;
  /*do
    { 
      t=termino(n,num);
      suma+=t;
      std::cout<<n<<"\t"<<suma<<"\t"<<t<<std::endl;
      n+=1;
    }
    while(std::abs(t)>=(std::pow(10,-6)));*/
  convergencia(num);
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

double convergencia (double num)
{
  double z,m,w,u,t,suma,n,ex;
  suma=0;
  n=0;
  z=num/(std::log(2));
  if((std::floor(z+0.5)-(z+0.5))>0.5)
    {m=std::ceil(z+0.5);}
  else
    {m=std::floor(z+0.5);}
  w=z-m;
  u=w*(std::log(2));
    do
    { 
      t=termino(n,u);
      suma+=t;
      ex=std::pow(2,m)*suma;
      std::cout<<n<<"\t"<<ex<<"\t"<<m<<"\t"<<u<<std::endl;
      n+=1;
    }
  while(std::abs(t)>=(std::pow(10,-6)));
        
}
