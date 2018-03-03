#include<iostream>
#include<cmath>
float suma(float N);
float resta(float N);
int main()
{float jj, s,r,d;
  std::cout.precision(16);
  for(jj=1;jj<=500; jj++)
    {s=suma(jj);
      r=resta(jj);
      d=r/s;
      std::cout<<jj<<"    "<<d<<std::endl;

    }
}
float suma(float N)
{float i, ter, suma;
  suma=0;
  for(i=1; i<=N;i++)
    {ter=1/i;
      suma+=ter;
    }
  return suma;
}
float resta(float N)
{float i, ter, suma;
  suma=0;
  for(i=N;i>=1;i--)
    {ter=1/i;
      suma+=ter;

    }
  return suma;
}
