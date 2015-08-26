#ifndef _error_h
#define _error_h

typedef int32_t rberror_t;

#define RBENOERR         0  /*  No error */
#define RBERROR         -1  /*  Generic error return */    
#define RBEINVAL        -2  /*  Invalid return value - use as initial return value */
#define RBEIO           -3  /*  IO error - use if rb handle is NULL */
#define RBENOTIMP       -4  /*  Operation not implemented */
#define RBENOMEM        -5  /*  Insufficient memory */
#define RBENODATA       -6  /*  Insufficient data to read */

#endif