#include<iostream>
#include<cmath>
double suma1 (double N);
double suma2 (double N);
double suma3 (double N);
int main()
{std::cout.precision(16);
  std::cerr.precision(16);
  double a,b,c,jj,err1,err2;
  for(jj=1;jj<=1000.0;jj++)
    {
      a=suma1(jj);
      b=suma2(jj);
      c=suma3(jj);
      err1=((std::abs(a-c))/c)*100;
      err2=((std::abs(b-c))/c)*100;
      std::cout<<jj<<"   "<<err1<<"    " <<err2<<std::endl;
    }
  
}
double suma1 (double N)
{double ter, sum,i;
  sum=0;
  for(i=1.0;i<=(2*N);i++)
    {ter=(std::pow(-1,i)*i)/(i+1);
      sum+=ter;
    }
  return sum;
}

double suma2 (double N)
{double ter, sum,i;
  sum=0;
  for(i=1.0;i<=N;i++)
    {ter=(-((2*i)-1)/(2*i))+((2*i)/((2*i)+1));
      sum+=ter;
    }
  return sum;
  
}
double suma3 (double N)
{double ter, sum,i;
  sum=0;
  for(i=1.0;i<=N;i++)
    {ter=(1)/((2*i)*((2*i)+1));
      sum+=ter;
    }
  return sum;
  
}
