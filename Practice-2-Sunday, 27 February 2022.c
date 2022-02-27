// Freezer temperature practice 2
#include <stdio.h>
#include <math.h>
#define fare 1.50

// Freezer temperature
int main(){
    int temperature;
    int Timehaspassed;

    printf("Enter the time Freezer has worked (Input : Second) : ");
    scanf("%d",&Timehaspassed);
    printf("Timehaspassed to Hours : %d\n",Timehaspassed / 60);

    temperature = (int)4 * pow(Timehaspassed / 60,2) / Timehaspassed + 2 -20;
    
    printf("Freezer temperature %dC°",temperature);

    return 0;
}
