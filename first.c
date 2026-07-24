
#include <stdio.h>


int main() {
    float weight , calories,protien, carbs,fiber,fat;
    printf("what's your body weight :  \n");
    scanf("%f", &weight);
    calories= weight*24;
    protien = weight*1.5;
    fat= weight * 0.7;
    fiber  = calories/1000 *14;
    carbs = (calories-(protien*4 + fiber  *9 ))/4;
    printf("you need to eat  %f kcal  calories  daily \n",calories);
    printf("you need to eat  %f grams  protien  daily \n",protien);
    printf("you need to eat  %f grams  fat  daily \n",fat);
    printf("you need to eat  %f grams  fiber  daily \n",fiber);
    printf("you need to eat  %f grams  carbs  daily \n",carbs);




   
    return 0;
}

