
#include <iostream> 
#include <iomanip> 
#include <math.h> 
using namespace std;
int main()
{
    double x;
    double y;
    double z;
    double conzap;
    double eq1;
    double con;
    double eq2;
    double eq3;
    double S;
    cout << "---------------------------------------------------------" << endl;
    cout << "|" << setw(6) << 'x' << "|" << setw(6) << 'y' << "|" << setw(6) << 'z' << "|" << setw(6) << "conzap" << "|" << setw(6) << "con" << "|" << setw(6) << "eq1" << "|" << setw(6) << "eq2" << "|" << setw(6) << "eq3" << "|" << endl;
    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            for (z = 0; z <= 1; z++)
            {
                if (y == 1 && z == 1)
                    conzap = 0;
                else
                    conzap = 1;
                if (y == 1 && z == 1)
                    con = 1;
                else
                    con = 0;
                if (x == conzap)
                    eq1 = 1;
                else
                    eq1 = 0;
                if (x == con)
                    eq2 = 1;
                else
                    eq2 = 0;
                if (eq1 == eq2)
                    eq3 = 1;
                else
                    eq3 = 0;
                cout << "---------------------------------------------------------" << endl;
                cout << "|" << setw(6) << x << "|" << setw(6) << y << "|" << setw(6) << z << "|" << setw(6) << conzap << "|" << setw(6) << con << "|" << setw(6) << eq1 << "|" << setw(6) << eq2 << "|" << setw(6) << eq3 << "|" << endl;
            }
        }
    }
    cout << "---------------------------------------------------------" << endl;
}