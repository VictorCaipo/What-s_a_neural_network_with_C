#include <stdio.h>
#include <math.h>

float cost_function(float y[9], float a[9]){
    float suma = 0.0;
    float error = 0.0;
    for(int ii = 0; ii<9 ; ii++){
        error = y[ii]- a[ii];
        suma += error*error;
    }
    return suma/(2*9);
}

float ideal_values[9]={1.0 , 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
float predictions[9]={0.9, 1.8, 2.7, 4.2, 4.8, 6.1, 7.1, 8.2, 8.8};

int main(void){
    float z_value = cost_function(ideal_values,predictions);
    printf("Z value: %.3f \n",z_value);
    return 0;
}