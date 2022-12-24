#include <stdio.h>
#include <stdlib.h> //for rand() and srand() functions
#include <time.h> //for time() function
#include<windows.h>
#include<string.h>

int main()
{
    int choice,choice2;
    int a, b, c, d,e;
    int week;
    //for Decision  Making


    while (1)
    {
        SetColor(10);
        gotoxy(70,6);
        printf("==========================\n");
        gotoxy(70,7);
        printf("          MENU\n");
        gotoxy(70,8);
        printf("==========================\n");
        gotoxy(70,10);
        printf("1. Display Hello Word\n");
        gotoxy(70,12);
        printf("2. Arithmetic operators\n");
        gotoxy(70,14);
        printf("3. Decision Making\n");
        gotoxy(70,16);
        printf("4. Loopings\n");
        gotoxy(70,18);
        printf("5. Arrays\n");
        gotoxy(70,20);
        printf("6. Exit\n");
        gotoxy(70,22);
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                 printf("Hello, World!\n");

                while (1)
                {
                    printf("Submenu:\n");
                    printf("1. Back to menu\n");
                    printf("2. Exit\n");

                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    if (choice == 1)
                    {
                        break;
                    }
                    else if (choice == 2)
                    {
                        return 0;
                    }
                    else
                    {
                        printf("Invalid choice.\n");
                    }
                }
            case 2:
                while (1)
                {
                    printf("==========================\n");
                    printf("        OPERATORS\n");
                    printf("==========================\n");
                    printf("1. Add\n");
                    printf("2. Subtract\n");
                    printf("3. Multiply\n");
                    printf("4. Divide\n");
                    printf("5. Modulo\n");
                    printf("6. Back to menu\n");
                    printf("7. Exit\n");

                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    if (choice >= 1 && choice <= 5)
                    {
                        printf("Enter First number: ");
                        scanf("%d", &a);
                        printf("Enter Second number: ");
                        scanf("%d", &b);

                        switch (choice)
                        {
                            case 1:
                                printf("%d + %d = %d\n", a, b, a + b);
                                while (1)
                                {
                                printf("Submenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                            case 2:
                                printf("%d - %d = %d\n", a, b, a - b);
                                while (1)
                                {
                                printf("Submenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                            case 3:
                                printf("%d * %d = %d\n", a, b, a * b);
                                while (1)
                                {
                                printf("Submenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                            case 4:
                                printf("%d / %d = %d\n", a, b, a / b);
                                while (1)
                                {
                                printf("Submenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                            case 5:
                                printf("%d %% %d = %d\n", a, b, a % b);
                                while (1)
                                {
                                printf("Submenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                        }
                    }
                    else if (choice == 6)
                    {
                        break;
                    }
                    else if (choice == 7)
                    {
                        return 0;
                    }
                    else
                    {
                        printf("Invalid choice.\n");
                    }
                }
                break;
            case 3:
                while (1)
                {
                    printf("Submenu:\n");
                    printf("1. If problem\n");
                    printf("2. If-else problem\n");
                    printf("3. If-else-if-else problem\n");
                    printf("4. nested-if problem\n");
                    printf("5. Switch Statement\n");
                    printf("6. Back to menu\n");
                    printf("7. Exit\n");

                    printf("Enter your choice: ");
                    scanf("%d", &choice2);

                    if(choice2 >= 1 && choice2 <= 7)
                    {
                        switch (choice2)
                        {
                        case 1:
                            printf("\nProgram to display a number if it is negative");
                                int number;

                                printf("\nEnter an integer: ");
                                scanf("%d", &number);

                               // true if number is less than 0
                               if (number < 0) {
                               printf("\nYou entered %d.\n", number);
                               }

                               printf("\nThe integer is Negative");
                                while (1)
                                {
                                printf("\nSubmenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;

                        case 2:
                            printf("\nCheck whether an integer is odd or even\n");
                                printf("Enter an integer: ");
                               scanf("%d", &number);

                              // True if the remainder is 0
                               if  (number%2 == 0) {
                               printf("%d is an even integer.",number);
                               }
                               else {
                               printf("%d is an odd integer.",number);
                               }
                                while (1)
                                {
                                printf("\nSubmenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                        case 3:
                                printf("\n// Program to relate two integers using =, > or < symbol\n");
                                int number1, number2;
                                printf("\nEnter First integer: ");
                                scanf("%d", &number1);
                                printf("\nEnter Second integer: ");
                                scanf("%d", &number2);

                               //checks if the two integers are equal.
                                if(number1 == number2) {
                                printf("Result: %d = %d",number1,number2);
                                }

                                //checks if number1 is greater than number2.
                                else if (number1 > number2) {
                                printf("Result: %d > %d", number1, number2);
                                }

                                //checks if both test expressions are false
                                else {
                                printf("Result: %d < %d",number1, number2);
                                }
                                while (1)
                                {
                                printf("\nSubmenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                        case 4:
                                printf("\n// Program to relate two integers using =, > or < symbol\n");
                                printf("\nEnter First integer: ");
                                scanf("%d", &number1);
                                printf("\nEnter Second integer: ");
                                scanf("%d", &number2);

                               if (number1 >= number2) {
                               if (number1 == number2) {
                               printf("Result: %d = %d",number1,number2);
                               }
                               else {
                               printf("Result: %d > %d", number1, number2);
                               }
                               }
                             else {
                             printf("Result: %d < %d",number1, number2);
                             }
                                 while (1)
                                {
                                printf("\nSubmenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;
                        case 5:

                              /* Input week number from user */
                              printf("C program to print day of week using switch case");
                               printf("\nEnter week number(1-7): ");
                               scanf("%d", &week);

                              switch(week)
                              {
                              case 1:
                              printf("\nMonday");
                              break;
                              case 2:
                              printf("\nTuesday");
                              break;
                              case 3:
                              printf("\nWednesday");
                              break;
                              case 4:
                              printf("\nThursday");
                              break;
                              case 5:
                              printf("\nFriday");
                              break;
                              case 6:
                              printf("\nSaturday");
                              break;
                               case 7:
                              printf("\nSunday");
                              break;
                             default:
                             printf("\Invalid input! Please enter week number between 1-7.\n");
                             }
                                 while (1)
                                {
                                printf("\nSubmenu:\n");
                                printf("1. Back to menu\n");
                                printf("2. Exit\n");

                                printf("Enter your choice: ");
                                scanf("%d", &choice);

                                if (choice == 1)
                                {
                                break;
                                }
                                else if (choice == 2)
                                {
                                return 0;
                                }
                                else
                                {
                                printf("Invalid choice.\n");
                                }
                                }
                                break;

                        }
                    }
                    else if (choice2 == 6)
                    {
                        break;
                    }
                    else if (choice2 == 7)
                    {
                        return 0;
                    }
                    else
                    {
                        printf("Invalid choice.\n");
                    }
                }

            case 4:
                // code for looping goes here
                break;
            case 5:
                // code for arrays goes here
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}

void SetColor(int ForgC) {
  WORD wColor;
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;


  if (GetConsoleScreenBufferInfo(hStdOut, & csbi)) {

    wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
    SetConsoleTextAttribute(hStdOut, wColor);
  }
  return;
}


void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
