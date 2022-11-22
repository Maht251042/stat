#include<stdio.h>

void calculate();                   //void + no parameter1
void factfunny();                   //void + no parameter2
void myProgram();                   //void + no parameter3

void inputMatrix(int M[3][2]);      //void + parameter1
void show(int M[3][2]);             //void + parameter2
void multiplication(int);           //void + parameter3

float circlearea();                 //return + no parameter1,คำนวณพื้นที่วงกลม
float circumference();              //return + no parameter2,คำนวณเส้นรอบวงกลม
int yourAge();                      //return + no parameter3

int max(int M[3][2]);               //return + parameter1
float sum(float, float, float);     //return + parameter2
float average(float, float, float); //return + parameter3

int main()
{
    char name[30];
    printf("******************************************************************************\n");
    printf("**                   Hi everyone this is my first code in C                 **\n");
    printf("**                        My name is Waenurma Waedeng                       **\n");
    printf("**                            Faculty Of Science                            **\n");
    printf("******************************************************************************\n");
    printf("What your Nickname ?\n");
    scanf("%s", name);
    printf("How old are you ?\n");
    printf("your age is %d \n", yourAge());
    printf("====================== I have Program to present for you =====================\n");
    printf("1.Play Matrix M[3][2]\n");
    printf("2.Find Factorial\n");
    printf("3.Calculate Circle area\n");
    printf("4.Calculate Circumference\n");
    printf("5.Calculate number\n");
    printf("6.Find multiplication\n");
    myProgram();
    return 0;
}
void myProgram()
{
    int press;
    printf("please select my program (press 1 - 6) and press 0 for escape\n");
    do
    {
        scanf("%d", &press);
        switch (press)
        {
        case 1:
            printf("You select 1 : Play Matrix M[3][2]\n");
            int M[3][2];
            inputMatrix(M);
            show(M);
            printf("Max = %d", max(M));
            printf("\n------------------------------------------------------------------------------\n");
            printf("\nplease select my program (press 1 - 6) and press 0 for escape\n");
            break;
        case 2:
            printf("You select 2 : Find Factorial\n");
            factfunny();
            printf("------------------------------------------------------------------------------\n");
            printf("please select my program (press 1 - 6) and press 0 for escape\n");
            break;
        case 3:
            printf("You select 3 : Calculate Circle area\n");
            printf("Enter Radius\n");
            printf("Circle area is %.2f\n", circlearea());
            printf("------------------------------------------------------------------------------\n");
            printf("please select my program (press 1 - 6) and press 0 for escape\n");
            break;
        case 4:
            printf("You select 4 : Calculate Circumference\n");
            printf("Enter Radius\n");
            printf("Circumference is %.2f\n", circumference());
            printf("------------------------------------------------------------------------------\n");
            printf("please select my program (press 1 - 6) and press 0 for escape\n");
            break;
        case 5:
            printf("You select 5 : Calculate number\n");
            calculate();
            printf("------------------------------------------------------------------------------\n");
            printf("please select my program (press 1 - 6) and press 0 for escape\n");
            break;
        case 6:
            printf("You select 6 : Find multiplication\n");
            int num;
            printf("Enter number : ");
            scanf("%d", &num);
            multiplication(num);
            printf("\n------------------------------------------------------------------------------\n");
            printf("\nplease select my program (press 1 - 6) and press 0 for escape\n");
            break;
        default:
            printf("please select my program (press 1 - 6) and press 0 for escape\n");
            break;
        }
    } while (press != 0);
    printf("you press 0 : Out of my program.\n");
    printf("Thanks you so much, Goodluck !\n");
}

void inputMatrix(int M[3][2])
{
    int i, j;
    printf("Enter elements of Matrix M[3x2]\n");
    i = 0;
    while(i < 3){
        for (j = 0; j < 2; j++){
            printf("M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    i++;
    }
}

void show(int M[3][2])
{
    int i, j;
    printf("Matrix\n");
    i = 0;
    while(i < 3){
        for (j = 0; j < 2; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    i++;
    }
}

int max(int M[3][2])
{
    int i, j, max = M[0][0];
    i = 0;
    while(i < 3){
        for (j = 0; j < 2; j++)
            if (max < M[i][j])
                max = M[i][j];
    i++;
    }
    return max;
}

void factfunny()
{
    int i, num, sum;
    printf("Press 0 (zero) or negative number to escape program.\n");
    do
    {
        sum = 1;
        printf("Enter n: ");
        scanf("%d", &num);
        for (i = 1; i <= num; i++)
            sum *= i;
        if (num != 0)
            printf("%d! = %d\n", num, sum);
        else{
            printf("you press 0.\n");
            printf("Out of Program Thanks.\n");
        }
    } while (num >= 1);
}

int yourAge()
{
    int age;
    scanf("%d", &age);
    return age;
}

float circlearea()              //พื้นที่วงกลม
{
    float r,x;
    scanf("%f", &r);
    x = r*r*3.14;
    return x;
}

float circumference()           //เส้นรอบวง
{
    float r,x;
    scanf("%f", &r);
    x = r*3.14*2;
    return x;
}

void calculate()
{
     float n1, n2, n3, avg;
    printf("Enter three number below.\n");
    printf("Enter num1: ");
    scanf("%f", &n1);
    printf("Enter num2: ");
    scanf("%f", &n2);
    printf("Enter num3: ");
    scanf("%f", &n3);
    printf("\nPress 1 : sum\n");
    printf("Press 2 : average\n");
    int choice;
    printf("please choose 1-2 and press 0 to escape : ");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("you press 1\n");
            printf("Sum = %.2f\n", sum(n1, n2, n3));
            printf("\n------------------------------------------------------------------------------\n");
            printf("if you won't to know average then press 2 and press 0 for escape\n");
            break;
        case 2:
            printf("you press 2\n");
            printf("Average = %.2f\n", average(n1, n2, n3));
            printf("\n------------------------------------------------------------------------------\n");
            printf("if you won't to know summation then press 1 and press 0 for escape\n");
            break;
        default:
            printf("please choose 1-2 and press 0 to escape.\n");
            break;
        }
    } while (choice != 0);
    printf("you press 0.\n");
    printf("Out of program, Thanks you.\n");
}

float sum(float x, float y, float z)
{
    return x + y + z;
}

float average(float x, float y, float z)
{
    float n = 3;
    return sum(x, y, z) / n;
}

void multiplication(int x)
{
    int i;
    for(i=1;i<=12;i++)
        printf("%d x %d = %d\n", x, i, i*x);
}