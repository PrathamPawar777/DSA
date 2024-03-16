#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int points_human()
{
    static int human_point = 0;
    human_point++;
    return human_point;
}

int points_computer()
{
    static int computer_point = 0;
    computer_point++;
    return computer_point;
}

void computer_choice(int choice, char *name)
{
    srand(time(NULL));
    int c = rand() % 2;
    if (c == 0)
    {
        printf("Rock\n");
    }
    else if (c == 1)
    {
        printf("Paper \n");
    }
    else
    {
        printf("Scissor\n");
    }

    if (choice == 0 & c == 1)
    {
        points_computer();
        printf("---------------------------\n");
        printf("Computer gets a point\n");
        printf("---------------------------\n");
    }
    else if (choice == 1 & c == 0)
    {
        points_human();
        printf("---------------------------\n");
        printf("%s gets a point \n", name);
        printf("---------------------------\n");
    }

    else if (choice == 2 & c == 0)
    {
        points_computer();
        printf("---------------------------\n");
        printf("Computer gets a point \n");
        printf("---------------------------\n");
    }

    else if (choice == 0 & c == 2)
    {
        points_human();
        printf("---------------------------\n");
        printf("%s gets a point \n", name);
        printf("---------------------------\n");
    }
    else if (choice == 2 & c == 1)
    {
        points_human();
        printf("---------------------------\n");
        printf("%s gets a point \n", name);
        printf("---------------------------\n");
    }
    else if (choice == 1 & c == 2)
    {
        points_computer();
        printf("---------------------------\n");
        printf("Computer gets  a point \n");
        printf("---------------------------\n");
    }
    else
    {
        printf("---------------------------\n");
        printf("its a tie nobody gets point \n");
        printf("---------------------------\n");
    }

    printf("\n");
}

int main()
{

    char name[10];
    int choice;

    printf("********|ROCK  PARER  SCISSOR|***********\n");
    printf("\n");
    printf("INSTRUCTIONS\n"
           "Enter 0 for rock\n"
           "Enter 1 for paper\n"
           "Enter 2 for scissor\n");
    printf("\n");
    printf("Enter your name : ");
    scanf("%s", &name);
    getchar();

    for (int i = 0; i < 5; i++)
    {
    start:
        printf("\n");
        printf("Enter your choice: \n");
        printf("%s's turn : ", name);
        scanf("%d", &choice);
        getchar();
        printf("\n");
        printf("%s : ", name);

        switch (choice)
        {
        case 0:
            printf("Rock \n");
            break;
        case 1:
            printf("Paper \n");
            break;
        case 2:
            printf("Scissor \n");
            break;
        default:
            printf("[Invalid option] Enter a valid option \n");
            goto start;
            break;
        }

        printf("Computer  : ");
        computer_choice(choice, name);
    }

    printf("******|SCOREBOARD|******\n");

    printf("\t| %s \tComputer \n", name);
    printf("points  |   ");
    printf("%d\t", points_human() - 1);
    printf("\t%d", points_computer() - 1);

    printf("\n");

    if (points_human() > points_computer())
    {
        printf("---------------------------\n");
        printf("%s HAS WON THE GAME \n", name);
        printf("---------------------------\n");
    }

    else if (points_human() < points_computer())
    {
        printf("---------------------------\n");
        printf("COMPUTER HAS WON THE GAME \n");
        printf("---------------------------\n");
    }
    else
    {
        printf("---------------------------\n");
        printf("ITS A TIE , NOBODY WON THE GAME \n");
        printf("---------------------------\n");
    }
}
