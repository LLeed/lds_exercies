//#define EIGENLIB			// uncomment to use Eigen linear algebra library

#include "fun_head_fast.h"

// do not add Equations in this area

MODELBEGIN

// insert your equations here, ONLY between the MODELBEGIN and MODELEND words
EQUATION("X")

/*
Variável X
*/

RESULT(VL("X",1)+V("c"))






MODELEND

// do not add Equations in this area

void close_sim( void )
{
	// close simulation special commands go here
}
