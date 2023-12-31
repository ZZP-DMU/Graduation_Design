#ifndef __POSTPROCESS_H__
#define __POSTPROCESS_H__

/* Include Headers Here */
#include "SPH.H"
#include <fstream>
#include <iomanip>
#include <stdlib.h>

/* Extern Functions Here */
extern void ptc_vtk_mesh(SPH_PARTICLE *,unsigned int ***);
extern void ptc_vtk_direct(SPH_PARTICLE *,double *,char *);
#endif