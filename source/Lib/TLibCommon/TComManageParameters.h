/* 
 * File:   TComManageParameters.h
 * Author: brunno
 *
 * Created on February 11, 2016, 3:47 PM
 */

#ifndef TCOMMANAGEPARAMETERS_H
#define	TCOMMANAGEPARAMETERS_H

#define EN_NEW_PARS 1
#define EN_SR_ADJUSTMENT 1

class TComManageParameters {
public:
  static bool tzFirst,tzRaster, tzRefinement, disable8x8SMP, SMP;
  static unsigned int numPred, SADSubsampling;
  static unsigned int cuDimension;

};

#endif	/* TCOMMANAGEPARAMETERS_H */

