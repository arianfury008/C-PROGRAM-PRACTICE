// Freezer temperature practice 2
#include <stdio.h>
#include <math.h>
#define fare 1.50

// Freezer temperature
int main(){
    float temperature;
    float Timehaspassed;

    printf("Enter the time Freezer has worked (Input : Second) : ");
    scanf("%f",&Timehaspassed);
    printf("Timehaspassed to Hours : %f\n",Timehaspassed / 60);

    temperature = (float)4 * pow(Timehaspassed / 60,2) / Timehaspassed + 2 -20;
    
    printf("Freezer temperature %fC°",temperature);

    return 0;
}
