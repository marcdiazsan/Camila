#include<iostream>
#include<cmath>
double numero (double n);
int main()
{ double x,b,u,tn,c;
  std::cout.precision(16);
  x=(4*M_PI)/3;
  b=numero(x);
  if(std::abs(b)<=1.7*std::pow(10,-9))
    {
      tn=b;
    }
  if(std::abs(b)>(M_PI/4))
    {
      u=(M_PI/2)-b;
    }
  else
    {
      u=b;
	}
  c=u*((135135-17336.106*std::pow(u,2)+379.23564*std::pow(u,4)-1.0118625*pow(u,6))/(135135-62381.106*std::pow(u,2)+3154.9377*std::pow(u,4)+28.17694*std::pow(u,6)));
    if(std::abs(b)>(M_PI/4))
    {
      tn=1/(c);
    }
  else
    {tn=c;
      
	}

  std::cout<<tn<<std::endl;
}
double numero (double n)
{double num;
  if(n<=((M_PI)/2)&& n>=-((M_PI)/2))
    {num=n;}
  else
    {
      num=numero(n-(M_PI));
    }
  return num; 
}
