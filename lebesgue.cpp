#include<iostream>
#include<cmath>
double suma(double n);
int main()
{std::cout.precision(16);
  double i, ro,t;
  for(i=1.0;i<=100.0;i++)
    {
      ro=(1/((2*i)+1))+suma(i);
      t=(4/(std::pow(M_PI,2)))*(std::log((2*i)+1))+1-ro;
      std::cout<<i<<"\t"<<ro<<"\t"<<t<<std::endl;
    }
}
double suma(double n)
{double k, ter, sum,a;
  for(k=1;k<=n;k++)
    {
      ter=(1/k)*(std::tan(((M_PI)*k)/((2*n)+1)));
      sum+=ter;	 
    }
	a=(2*sum)/M_PI;
      return a;
}
