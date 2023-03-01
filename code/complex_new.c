#include <stdlib.h>
#include "complex.h"  // como fomos nos que escrevemos esse ficheiro head usamos "" em vezz <>


complex* complex_new(double x, double y){
    complex* z = (complex*)malloc(sizeof(complex)); // 16 pois complex é 8+8 bytes
                //cast de void* para complex*
    z->x = x; /// z -> indica que ta a "usar" o  x da struct   é o mesmo que usar o z.x se n fosse um apontador  !!!!
    z->y=y;  // y é o valor da struct z e o y dps do =, é o y que esta nesta definiçao
    return z;

}
