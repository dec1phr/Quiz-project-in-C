#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int ques1, ques2, ques3, ques4, ques5;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5;
    int point01, point02, point03, point04, point05;
    int total;

    printf("Do you want to play the game?\n\n");
    printf("1. If yes, press '1'\n");
    printf("2. If no, press '0' \n\n");
    scanf("%d", &i);
    

    if (i==1)
          {
        printf("You game starts now! \n Good luck buddy ;)\n");
      
    }
    else if(i==0)
    {
        printf("Thank you for be with us :)\n Quiting the game, Se ya!\n");
    }
    else {
        printf("Invalid operation!\n Quiting the game");
    }



    if(i == 1){
            printf("a) What is the first ever search engine on the internet?\n\n");
    printf("1. Google\n");
    printf("2. Archie\n");
    printf("3. Yahoo\n");
    printf("4. Bing\n");
    printf("Enter your answer here: ");
    scanf("%d", &ans1);
          }if(ans1 == 2){
            printf("You are correct!");
            point1 = 5;
            printf("You have scored %d points\n", point1);
    }
    else{
        printf("You failed!");
        point01 = 0;
        printf("You have scored %d points\n", point01);
    }
    
          
          
        
    if(i == 1){
          
        printf("b) What is the full form of CPU?\n\n");
    printf("1. Central Progress University\n");
    printf("2. Central Processor Unit\n");
    printf("3. Central Processing Unit\n");
    printf("4. Central Proccesing Unit\n");
    printf("Enter your answer here: ");
    scanf("%d", &ans2);
    if(ans2 == 3){
            printf("You are correct!");
            point2 = 5;
            printf("You have scored %d points\n", point2);
    }
    else{
        printf("You failed!");
        point02 = 0;
        printf("You have scored %d points\n", point02);
    }
    }



    if(i == 1){
          
        printf("c) How many search engines are in the world right now?\n\n");
    printf("1. over 1300\n");
    printf("2. over 100\n");
    printf("3. over 1500\n");
    printf("4. over 350n");
    printf("Enter your answer here: ");
    scanf("%d", &ans3);
    if(ans3 == 3){
            printf("You are correct!");
            point3 = 5;
            printf("You have scored %d points\n", point3);
    }
    else{
        printf("You failed!");
        point03 = 0;
        printf("You have scored %d points\n", point03);
    }
    }



    if(i == 1){
          
        printf("d) What is the full form CORE?\n\n");
    printf("1. Central Organization for Railway Electrification\n");
    printf("2. Central Organized Railway of Ethernet\n");
    printf("3. Cascading Style Sheet\n");                                                       
    printf("4. Canel Operation for Runway Electrification\n");
    printf("Enter your answer here: ");
    scanf("%d", &ans4);
    if(ans4 == 1){
            printf("You are correct!");
            point4 = 5;
            printf("You have scored %d points\n", point4);
    }
    else{
        printf("You failed!");
        point04 = 0;
        printf("You have scored %d points\n", point04);
    }
    }



   if(i == 1){
          
        printf("e) What is the first  programmable, electronic, general-purpose digital computer in the world?\n\n");
    printf("1. EDSAC\n");
    printf("2. ENIAC\n");
    printf("3. Abacus\n");                                                       
    printf("4. Z2\n");
    printf("Enter your answer here: ");
    scanf("%d", &ans4);
    if(ans4 == 1){
            printf("You are correct!");
            point4 = 5;
            printf("You have scored %d points\n", point4);
    }
    else{
        printf("You failed!");
        point04 = 0;
        printf("You have scored %d points\n", point04);
    }
    }

   
   total = point1+ point2 + point3 + point4 + point5;
    printf("\n\n");

    printf("Your total scores: %d", total);
    
    return 0;
}