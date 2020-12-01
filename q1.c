#include<stdio.h>
#include<string.h>

struct menu
{
   char food;
   int calories;
   char foodType;
   int cost;
};

int main()
{
   struct menu meal[4];

   for(int i=1; i<=4; i++)
   {
      printf("\nThis is the menu of meal %d \n",i);
      printf("Enter the food of meal %d:",i);
      scanf("%s",&meal[i].food);
      printf("Enter the calories of meal %d:",i);
      scanf("%d",&meal[i].calories);
      printf("Enter the foodType of meal %d:",i);
      scanf("%s",&meal[i].foodType);
      printf("Enter the cost of meal %d:",i);
      scanf("%d",&meal[i].cost);
      printf("menu of meal %d = {%c,%d,%c,%d}",i, meal[i].food, meal[i].calories, meal[i].foodType, meal[i].cost);
      printf("\n");
   }
}