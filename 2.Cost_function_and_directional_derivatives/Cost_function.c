#include <stdio.h>
#include <math.h>

float cost_function(float y[], float a[sizeof(a_vector)]){
    float average = 0.0f, error;
    for(int ii = 0; ii<5 ; ii++){
        error = y[ii]-a[ii];
        average += error*error;
    }
    return average/5.0f;
}

size_t size_array(float array[]){
    return sizeof(array);
}

float y_vector[5]={1,2,3,4,5};
float a_vector[5]={0.9,1.8,2.7,4.2,4.8};
size_t size_y = size_array(y_vector);
size_t size_y = size_array(a_vector);

int main(void){

    if (sizeof(y_vector)==sizeof(a_vector)){
        float output = cost_function(y_vector,a_vector);
        printf("Result: %.3f\n",output);        
    } else{
        printf("The vectors a and y have different sizes");
    }
    return 0;
}