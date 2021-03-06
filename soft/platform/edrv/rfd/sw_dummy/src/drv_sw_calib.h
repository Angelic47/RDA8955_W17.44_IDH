/* Copyright (C) 2016 RDA Technologies Limited and/or its affiliates("RDA").
* All rights reserved.
*
* This software is supplied "AS IS" without any warranties.
* RDA assumes no responsibility or liability for the use of the software,
* conveys no license or title under any patent, copyright, or mask work
* right to the product. RDA reserves the right to make changes in the
* software without notification.  RDA also make no representation or
* warranty that such application will be suitable for the specified use
* without further testing or modification.
*/





















#ifndef SW_DUMMY_CALIB_H
#define SW_DUMMY_CALIB_H

#include "calib_m.h"
#include "rf_names.h"



// Calibration parameter accessors
// ------------------------------------------------------------------------
#define SW_TIME(n)                  (g_rfdCalibPtr->sw->times[(n)])

// Default calibration times.
// ------------------------------------------------------------------------
#define DEFAULT_CALIB_SW_TIMES          {}

// Default calibration parameters.
// ------------------------------------------------------------------------
#define DEFAULT_CALIB_SW_PARAM          {}

// Default calibration PAL custom parameters.
// ------------------------------------------------------------------------
#define DEFAULT_CALIB_SW_SPARE          {0, 0, 0, 0, 0, 0, 0, 0}

#define DEFAULT_CALIB_SW_PALCUST        {DEFAULT_CALIB_SW_DUMMY, \
                                         DEFAULT_CALIB_SW_SPARE}

#endif // SW_DUMMY_CALIB_H
