#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "a.h"
using namespace std;
int main()
{
  ifstream input("file.in",ios::in);
  if(!input)
{
cerr << "Failed opening" << endl;
exit(1);
}
Score sc;
int ra,rb;
int k;
double sa;
input >> k >> ra >> rb;
sc.set_K(k);
sc.set_Ra(ra);
sc.set_Rb(rb);

ofstream output("file.out",ios::out);
if(!output)
{
cerr << "Failed opening" << endl;
exit(1);
}
output << sc.get_Ra() << "\t" << sc.get_Rb() << endl;
for(int i = 1;i <= 7;i++)
{
          cout << sc.get_Ra() << "\t" << sc.get_Rb() << endl;
    input >> sa;
    sc.calc(sa);
        
   output << sc.get_Ra() << "\t" << sc.get_Rb() << endl;
            
}


return 0;
}
