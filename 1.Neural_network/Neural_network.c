#include <stdio.h>
#include <math.h>

float sigmoid_function(float z_value){
    z_value = 1.0 / (1.0 + expf(-1.0 * z_value) );
    return z_value;
}

int main(void){
    float z = 0.92;
    float new_z = sigmoid_function(z);
    printf("The value of z betwen 0 and 1 is: %.3f\n",new_z);
}
