#include "complex.h"

complex* complex_conj(complex* z){
   return complex_new(z->x, 1.0-(z->y)); 
}
