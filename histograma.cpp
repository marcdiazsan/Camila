#include<random>
#include<iostream>
#include<cmath>
const double xi=1;
const double xf=2;
const double xmed=1.5;
const double sigma=0.3;
const int n=20;
const int p=100;
int main(void)
{   
  int seed;
  double d,delta,a,x[n];
  delta=(xf-xi)/n;
  double s[n];
  x[0]=xi;
  for(int i=0; i<n; i++)
    {
      s[i]=0;
      x[i]=x[0]+(delta*i);
    }
  seed=5;	
  std::mt19937 gen(seed);	
  std::normal_distribution<>dis(xmed,sigma);
  for(int m=1; m<=p;++m)
    { 
      d=dis(gen);
      //std::cout<<d<<std::endl;
      for(int j=0;j<n;j++)
	{
	  if((d-x[j])<delta)
	    {
	      s[j]+=1;
	    }
	  else continue;

	}
    }
  for(int k=0;k<=n-1;k++)
    {
      std::cout<<x[k]<<"-"<<x[k+1]<<"\t"<<(s[k]-s[k-1])/p<<std::endl;
    }
    
 
}
