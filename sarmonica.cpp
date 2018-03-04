#include<iostream>
#include<cmath>
double sumaarmonica(double N);
int main()
{std::cout.precision(16);
  double i,s,r1,r2,n;
  for (i=1;i<=5000;i++)
    {n=i;
      s=sumaarmonica(n);
      r1=s-std::log(n);
      r2=s-std::log(n+0.5);
      std::cout<<n<<"    "<<r1<<"   "<<r2<<std::endl;
    }


}
double sumaarmonica (double N)
{double i, termino, suma;
  suma=0;
  for(i=1;i<=N;i++)
    {
      termino=1/i;
      suma+=termino;
    }
  return suma;
}
