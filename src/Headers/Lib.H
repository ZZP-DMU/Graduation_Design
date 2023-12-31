#ifndef __LIB_H__
#define __LIB_H__

/* Include Headers Here*/
#include "SPH.H"
#include "sys/resource.h"
#include "cmath"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

/* Extern Function Here*/
extern void ptc_nnps_direct(SPH_PARTICLE *,SPH_PAIR *);
extern void ptc_nnps_mesh(SPH_PARTICLE *,SPH_PAIR *,unsigned int ***);
extern void ptc_nnps_check(SPH_PAIR *,SPH_PAIR *,unsigned int *);
extern void ptc_kernel_serial(SPH_PARTICLE *,SPH_PAIR *,SPH_KERNEL *);
extern void ptc_kernel_parallel(SPH_PARTICLE *,SPH_PAIR *,SPH_KERNEL *);
extern void ptc_mesh_process(SPH_PARTICLE *,unsigned int ***);
extern void ptc_info(SPH_PARTICLE *,SPH_PAIR *,RIGID *,unsigned int);





#endif