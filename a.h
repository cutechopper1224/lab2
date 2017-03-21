#include <cmath>
class Score
{
     public:

void calc(double sa)
{
    double Ea = 1.0 / (1 + pow(10.0,(Rb - Ra) / 400.0));
    double Eb = 1.0 / (1 + pow(10.0,(Ra - Rb) / 400.0));
       set_Ra(Ra + K * (sa - Ea));
       set_Rb(Rb + K * ((1 - sa) - Eb));
}

             
  int get_K()
{
   return K;
}

void set_K(int k)
  {
    K = k;
  }

 int get_Ra()
{
    return Ra;
}

void set_Ra(int ra)
{
  Ra = ra;
}
int get_Rb()
{
  return Rb;
}

void set_Rb(int rb)
{
   Rb = rb;
}

    
    private:
 int K;
 int Ra;
  int Rb;

};
