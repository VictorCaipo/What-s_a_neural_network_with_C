#include <stdio.h>
#include <math.h>
/*  
It's no more than defining a new function
*/
void sigmoid_function(float* z_value){
    *z_value = 1.0 / (1.0 + expf(-1.0 * *z_value) );
}

int main(void){
    float z = 1.555;
    float* pointer_z = &z;
    sigmoid_function(pointer_z);
    printf("The value of z betwen 0 and 1 is: %.3f\n",*pointer_z);
}