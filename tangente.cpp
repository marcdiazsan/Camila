#include<iostream>
#include<cmath>
double numero (double n);
int main()
{ double x,u;
  x=(5*M_PI)/2;
  u=numero(x);
  std::cout<<u<<std::endl;
}
double numero (double n)
{double num;
  if(n<=(M_PI/2)||n>=-(M_PI/2))
    {num=n;}
  else
    {
      num=numero(num-M_PI);
    }
  return num;   
}
