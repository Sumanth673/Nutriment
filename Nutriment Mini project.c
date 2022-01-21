#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
int main()
{
    //general variables
    int typeofbread, typeofroti;
    int numberofbread, numberofroti;
    int randomfact;
    //set of variables to be printed at the end
    float breadcalories, breadfat, breadprotein, breadfiber, breadcarbohydrates;
    float roticalories, rotifat, rotiprotein, rotifiber, roticarbohydrates;
 
    //set of variables to store the actual nutritional values of different food items
 
    //white bread
    float whitebreadcalories = 32, whitebreadfat = 0.4, whitebreadprotein = 1.1, whitebreadfiber = 0.6, whitebreadcarbohydrates = 6;
    //brown bread
    float brownbreadcalories = 75, brownbreadfat = 1, brownbreadprotein = 3.1, brownbreadfiber = 1.2, brownbreadcarbohydrates = 13;
 
    //Whole wheat roti
    float wwroticalories = 104, wwrotifiber = 2.6, wwrotiprotein = 3, wwroticarbohydrates = 15.7, wwrotifat = 3.7;
    //naan roti
    float naanroticalories = 110, naanrotifiber = 0.1, naanrotiprotein = 2.7, naanroticarbohydrates = 16.9, naanrotifat = 3.3;
    //Ragi roti
    float ragiroticalories = 94, ragirotifiber = 2.4, ragiroticarbohydrates = 14.1, ragirotiprotein = 1.7, ragirotifat = 3.4;
    //puri
    float puricalories = 101, puriprotein = 1.3, purifat = 7.4, puricarbohydrates = 7.5, purifiber = 0.2;
 
printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("                                   |            Welcome to NUTRIMENT ver-1.2                 |\n");
printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
 
    printf("Enter the type of Bread\nPress 1 for White Bread\nPress 2 for Brown Bread\n");
    scanf("%d", &typeofbread);
    if (typeofbread == 1) /*white bread*/
    {
        printf("You have chosen White Bread and now please Enter how many Breads\n");
        scanf("%d", &numberofbread);
        breadcalories = whitebreadcalories * numberofbread;
        breadcarbohydrates = whitebreadcarbohydrates * numberofbread;
        breadfat = whitebreadfat * numberofbread;
        breadfiber = whitebreadfiber * numberofbread;
        breadprotein = whitebreadprotein * numberofbread;
    }
    else if (typeofbread == 2) /*brown bread*/
    {
        printf("You have chosen Brown Bread and now please Enter how many Breads\n");
        scanf("%d", &numberofbread);
        breadcalories = whitebreadcalories * numberofbread;
        breadcarbohydrates = whitebreadcarbohydrates * numberofbread;
        breadfat = whitebreadfat * numberofbread;
        breadfiber = whitebreadfiber * numberofbread;
        breadprotein = whitebreadprotein * numberofbread;
    }
    else
    {
        printf("Error: Invalid user Input\n\nPlease run the code again :')");
        exit(0);
 
    }
    printf("Enter the type of roti\nPress 1 for Whole wheat roti\nPress 2 for Naan roti\nPress 3 for Ragi roti\nPress 4 for Puri\n");
    scanf("%d", &typeofroti);
    if (typeofroti == 1) /*Whole wheat roti*/
    {
        printf("You have chosen Whole wheat roti and now please how many rotis\n");
        scanf("%d", &numberofroti);
        roticalories = wwroticalories * numberofroti;
        roticarbohydrates = wwroticarbohydrates * numberofroti;
        rotifat = wwrotifat * numberofroti;
        rotifiber = wwrotifiber * numberofroti;
        rotiprotein = wwrotiprotein * numberofroti;
    }
    else if (typeofroti == 2) /*naan roti*/
    {
        printf("You have chosen Naan roti and and now please how many rotis\n");
        scanf("%d", &numberofroti);
        roticalories = naanroticalories * numberofroti;
        roticarbohydrates = naanroticarbohydrates * numberofroti;
        rotifat = naanrotifat * numberofroti;
        rotifiber = naanrotifiber * numberofroti;
        rotiprotein = naanrotiprotein * numberofroti;
    }
    else if (typeofroti == 3) /*ragi roti*/
    {
        printf("You have chosen Ragi roti and now please how many rotis\n");
        scanf("%d", &numberofroti);
        roticalories = ragiroticalories * numberofroti;
        roticarbohydrates = ragiroticarbohydrates * numberofroti;
        rotifat = ragirotifat * numberofroti;
        rotifiber = ragirotifiber * numberofroti;
        rotiprotein = ragirotiprotein * numberofroti;
    }
    else if (typeofroti == 4) /*puri */
    {
        printf("You have chosen Puri and now please how many Puris\n");
        scanf("%d", &numberofroti);
        roticalories = puricalories * numberofroti;
        roticarbohydrates = puricarbohydrates * numberofroti;
        rotifat = purifat * numberofroti;
        rotifiber = purifiber * numberofroti;
        rotiprotein = puriprotein * numberofroti;
    }
    else
    {
        printf("Error: Invalid user Input\n\nPlease run the code again :')");
        exit(0);
    }
 
    printf("|================================================================|\n");
    printf("|                     |     B R E A D       |      R O T I       |\n");
    printf("|================================================================|\n");
    printf("|     Calories        | %.2f cal          |       %.2f cal        \n", breadcalories, roticalories);
    printf("|     Fat             |   %.2f g            |     %.2f g          \n", breadfat, rotifat);
    printf("|     Carbohydrate    |  %.2f g            |       %.2f g          \n", breadcarbohydrates, roticarbohydrates);
    printf("|     Protein         |   %.2f g            |     %.2f g          \n", breadprotein, rotiprotein);
    printf("|     Fiber           |   %.2f g            |     %.2f g          \n", breadfiber, rotifiber);
    printf("|================================================================|\n");
   
    srand(time(NULL));
    switch ((rand()%8))
    {
    case 1:
        printf("                        RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("  Omega-3 Fats Are Crucial and Most People Don't Get Enough\n");
        printf("|================================================================|\n");
        break;
 
    case 2:
        printf("                         RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("               There Is No Perfect Diet for Everyone\n");
        printf("|================================================================|\n");
        break;
 
    case 3:
        printf("                        RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("           Artificial Trans Fats Are Very Unhealthy\n");
        printf("|================================================================|\n");
        break;
 
    case 4:
        printf("                        RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("           Eating Vegetables Will Improve Your Health\n");
        printf("|================================================================|\n");
        break;
 
    case 5: 
        printf("                        RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("        It Is Critical to Avoid a Vitamin D Deficiency\n");
        printf("|================================================================|\n");
        break;
 
    case 6:
        printf("                        RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("              Refined Carbohydrates Are Bad for You\n");
        printf("|================================================================|\n");
        break;
 
    case 7:
        printf("                        RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("         Supplements Can Never Fully Replace Real Foods\n");
        printf("|================================================================|\n");
        break;
 
    case 8:
        printf("                            RANDOM HEALTH FACT       \n");
        printf("|================================================================|\n");
        printf("     Diets- Don't Work - a Lifestyle Change Is Necessary\n");
        printf("|================================================================|\n");
        break;
    }
    return 0;
}

