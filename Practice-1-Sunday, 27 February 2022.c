#include <stdio.h>
#define fare 1.50

// Taxi Fare Calculator
int main(){
  int start,end;
  printf("Enter the start way : ");
  scanf("%d",&start);
  printf("Enter the end way : ");
  scanf("%d",&end);

  int Area = end - start;
  int rent = Area * fare;

  printf("you traveled a distance of %d kilometers.at 1.50$ per kilometer. your fare is %d",Area,rent);

  return 0;

}