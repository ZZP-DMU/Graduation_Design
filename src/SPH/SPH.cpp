#include "SPH.H"
#include <fstream>
#include <iomanip>
using namespace std;

int main(void)
{ 
    SPH_PARTICLE particle;
    SPH_KERNEL kernel;
    SPH_PAIR pair;

    /************stack is too small,so init data in heap***************/
    particle.x = (double *)(malloc(sizeof(double)*PTC_TOL_NUM));
    particle.y = (double *)(malloc(sizeof(double)*PTC_TOL_NUM));
    particle.vx = (double *)(malloc(sizeof(double)*PTC_TOL_NUM));
    particle.vy = (double *)(malloc(sizeof(double)*PTC_TOL_NUM));
    particle.pressure = (double *)(malloc(sizeof(double)*PTC_TOL_NUM));
    particle.type = (char *)(malloc(sizeof(char)*PTC_TOL_NUM));  
    ptc_generate(&particle);//generate the fluid solid and dummy particles
    ptc_init(&particle); //particles init values

    ofstream writefile;
    writefile.open("../data/init.vtk");

    writefile << "# vtk DataFile Version 3.0" << endl;
    writefile << "init data" << endl;
    writefile << "ASCII" << endl;
    writefile << "DATASET UNSTRUCTURED_GRID" << endl;
    writefile << "POINTS " << FLUID_PTC_NUM<< " " << "double" << endl;

    for(int i=0;i<FLUID_PTC_NUM;i++)
    {
        writefile << setiosflags(ios::scientific) << particle.x[i]<< " " << particle.y[i]<< " " << 0.0 << endl;
    }
    
    writefile.close();
    return 0;
}


