#  include<stdio.h>

int  main () {
    
 float time_taken, time_saved,wage_rate,time_allowed , basic_wages , bonus, total_earnings;
    printf("Time taken(hr): ");
    scanf("%f", &time_taken);   
    printf("Time Saved: ");
    scanf("%f", &time_saved);
    printf("Wage rate(hr):  ");
    scanf("%f", &wage_rate);

 printf("Computation of Time Allowed \n");
    time_allowed = time_taken + time_saved;
    printf("Time Allowed : %f(hr) \n",time_allowed );
   
 printf("Computation of Basic Wages \n");
    basic_wages = time_taken * wage_rate;
    printf("Basic Wage is: %f(rupees) \n", basic_wages);

printf("Computation of Bonus \n");
    bonus =(time_saved/2) * wage_rate;
    printf("Bonus is : %f(rupees) \n", bonus);

printf("Computation of  Total  Earnings \n");
    total_earnings = basic_wages + bonus ;
    printf("Total Earnings is : %f(rupees) \n", total_earnings);






    return 0;
}