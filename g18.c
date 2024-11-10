


/*Krishna is a census officer. He is involved in taking the survey about the village's total population, literacy percentage, men's population, and men's literacy percentage.



He wants to write a program to calculate the following:

Total population of men in the village
Total population of women in the village
Total population of literates in the village
Total population of illiterates in the village
Total population of men literate in the village
Total population of women literates in the village
Total population of illiterate men in the village
Total population of illiterate women in the village


Assist him in the program.

Input format :
The first line of input consists of the total population of the village.

The second line consists of the percentage of literates out of the total population.

The third line consists of the percentage of men in the total population.

The fourth line consists of the percentage of men literate out of the total population.

Output format :
The output prints the men population, women population, literates, illiterates, men literates, women literates, men illiterates, and women illiterates in the village.*/


#include<stdio.h>
int main()
{
    int totpop=0,menper=0,litper=0,mlitper=0,litpop=0;    //10 45 60 25
    scanf("%d%d%d%d",&totpop,&litper,&menper,&mlitper);
    litpop=totpop*litper/100;
    printf("Men population=%d\nWomen population=%d\nLiterates=%d\nIlliterates=%d\nMen literates=%d\nWomen literates=%d\nMen illiterates=%d\nWomen illiterates=%d",(totpop*menper/100),totpop-(totpop*menper/100),litpop,totpop-litpop,(totpop*mlitper/100),litpop-(totpop*mlitper/100),(totpop*menper/100)-(totpop*mlitper/100),(totpop-(totpop*menper/100))-(litpop-(totpop*mlitper/100)));
}
