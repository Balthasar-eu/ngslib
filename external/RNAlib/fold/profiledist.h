#include "common.h"

CPPEXTERN float  *Make_bp_profile(int length);
/* condense pair probability matrix pr into a vector containing probabilities
   for upstream paired, downstream paired and unpaired. This resulting
   probability profile is used as input for profile_edit_distance */

CPPEXTERN float    profile_edit_distance(const float *T1, const float *T2);
/* align two probability profiles */

CPPEXTERN void     print_bppm(const float *T);
/* print string representation of probability profile */

CPPEXTERN void     free_profile(float *T);
/* free space allocated in Make_bp_profile */
