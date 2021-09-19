/* The simple hello world program */

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!");
    return 0;
}

/* ---------------------------------------------------------------- */

/* Hello world using string */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char hello[13] = "Hello, World!";
    printf("%s", hello);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Sum of two numbers */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int sum;
    printf("Enter two numbers to get the sum (exit with input 0)\n");
    scanf("%d %d", &a, &b);
    while (a != 0 && b != 0)
    {
        sum = a + b;
        printf("The sum of %d and %d is %d\n\n", a, b, sum);
        printf("Enter two numbers to get the sum\n");
        scanf("%d %d", &a, &b);
    }
    return 0;
}

/* ---------------------------------------------------------------- */

/* Convert float to integer */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a = 10.987;
    int b = (int) a;
    printf("%d", b);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Experiment with scanf return values */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("1");
    }
    else
    {
        printf("0");
    } 

    return 0;
}

/* ---------------------------------------------------------------- */

/* Simplest  calculator, checks for operator input but not type of numerical input */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    char operator;
    float output;
    int error = 0;

    printf("Enter two numbers followed by the operator + ,- ,* or / (exit with input 0)\n");
    scanf("%f %f %c", &a, &b, &operator);


    while (a != 0 && b != 0)
    {
        if (operator== '+')
        {
            output = a + b;
        }
        else if (operator== '-')
        {
            output = a - b;
        }
        else if (operator== '*')
        {
            output = a * b;
        }
        else if (operator== '/')
        {
            output = a / b;
        }
        else
        {
            printf("Please use one of the four operators.\n\n");
            error = 1;
        }

        if (error == 0)
        {
            printf("%f%c%f = %f\n\n", a, operator, b, output);
        }
        printf("Enter two numbers followed by the operator + ,- ,* or / (exit with input 0)\n");
        scanf("%f %f %c", &a, &b, &operator);
        error = 0;
     }
     return 0;
 }

/* ---------------------------------------------------------------- */

/* Average of four numbers, exits if one of the numbers is 0 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;
    float d;
    float average;

    printf("Enter four numbers to get their average (exit with input 0)\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    while (a != 0 && b != 0 && c != 0 && d != 0)
    {
        average = (a + b +c + d) / 4;
        printf("The average is %f.\n\n", average);
        printf("Enter four numbers to get their average (exit with input 0)\n");
        scanf("%f %f %f %f", &a, &b, &c, &d);
    }
    return 0;
}

/* ---------------------------------------------------------------- */

/* Average of four numbers, exits if all of the numbers are 0 */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    float a;
    float b;
    float c;
    float d;
    float average;
    printf("Enter four numbers to get their average (exit with input 0)\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if (a+b+c+d)
    {
        average = (a + b +c + d) / 4;
        printf("The average is %f.\n\n", average);
        printf("Enter four numbers to get their average (exit with input 0)\n");
        scanf("%f %f %f %f", &a, &b, &c, &d);
    }
    return 0;
}

/* ---------------------------------------------------------------- */

/* Even or odd, method 1 */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int number, half;
    printf("Enter a number to check if it is even or odd\n");
    scanf("%d", &number);
    half = number / 2;
    
    if (half * 2 == number)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Even or odd, method 2 */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int number;
    printf("Enter a number to check if it is even or odd\n");
    scanf("%d", &number);
    
    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Equality test for floating point numbers */

#include <stdio.h>
#include <math.h>

int main()
{ 
    double tolerance = 0.00000001;
    int boolean;
    float a = 0.1 + 0.2;
    float b = 0.3;
    boolean = (fabs (a - b) < tolerance);
    printf("%d", boolean);
    return 0
}

/* ---------------------------------------------------------------- */

/* Ask seperately for three numbers and print their sum, product and average */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int a, b, c, sum, product, average;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    printf("Enter third number:\n");
    scanf("%d", &c);
    sum = a + b + c;
    product = a * b * c;
    average = (a + b +c) / 3;
    printf("The sum of %d, %d and %d is %d\n", a, b, c, sum);
    printf("The product of %d, %d and %d is %d\n", a, b, c, product);
    printf("The average of %d, %d and %d is %d\n", a, b, c, average);
}

/* ---------------------------------------------------------------- */

/* Maximum of three numbers */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int a, b, c, max;
    printf("Enter three numbers to find the maximum:\n");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("The maximum is %d", max);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Circle length and circumference */ 

#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{ 
    float r, circum, area;
    printf("Enter circle radius:\n");
    scanf("%f", &r);
    circum = 2 * PI * r;
    area = PI * r * r;

    printf("Circumference = %f\nArea = %f", circum, area);
    return 0;
}

/* ---------------------------------------------------------------- */

/* VAT Price Calculator */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    float price, price_vat, vat;

    printf("Enter price without VAT and VAT percentage:\n");
    scanf("%f %f", &price, &vat);

    price_vat = price + (price * vat / 100);

    printf("Price without VAT is: %f\nVAT is: %f %%\nPrice with VAT is: %f\n", price, vat, price_vat);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Cost of stamps */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char location;
    const float price_i = 0.70, price_n = 0.23, price_l = 0.15;
    float price, total;
    int num;
    printf("Will you be sending your letter (L)ocally, (N)ationally or (I)nternationally?\n");
    scanf("%c", &location);
    printf("How many letters will you be sending?\n");
    scanf("%d", &num);

    switch (location)
    {
        case 'L':
            price = price_l;
        case 'N':
            price = price_n;
        case 'I':
            price = price_i;
    }

    total = price * num;

    printf("Sending %d letters, will cost you $%f\n", num, total);
    

    return 0;
}

/* ---------------------------------------------------------------- */

/* BMI Caclulator */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height, weight, bmi;
    printf("Enter your height:\n");
    scanf("%f", &height);
    printf("Enter your weight:\n");
    scanf("%f", &weight);

    bmi = weight / ( height * height);

    printf("You weight %f kilos, you are %f meters tall and your BMI is %f", weight, height, bmi);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Cheap or expensive gasoline */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liters, price_total, price_per_liter;
    printf("Enter how much you paid for gasoline:\n");
    scanf("%f", &price_total);
    printf("Enter liters:\n");
    scanf("%f", &liters);

    price_per_liter = price_total / liters;

    if (price_per_liter > 1.3)
        printf("Expensive gasoline\n");
    else
        printf("Cheap gasoline");

    return 0;
}

/* ---------------------------------------------------------------- */

/* Swap values of two variables */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, temp;

    printf("Enter value of a:\n");
    scanf("%d", &a);
    printf("Enter value of b:\n");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d\nb = %d\n", a, b);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Calculate the sum of the first billion integers */

#include <stdio.h>

int main() {
    long long int sum = 0;
    for (int i = 1; i < 1000000000; i++)
    {
        sum += i;
        printf("%lli\n", sum);
    }
    return 0;
}

/* ---------------------------------------------------------------- */

/* Dice Roller */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char roll;
    int dice1, dice2;
    srand(time(NULL));
    printf("Roll dice? (y/n)\n");
    scanf("%c", &roll);

    while (roll != 'n')
    {
        if (roll == 'y')
        {
            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;
            printf("You rolled %d and %d\n\n", dice1, dice2);
            printf("Roll dice? (y/n)\n");
            scanf("%c", &roll);
        }
        else
        {
            scanf("%c", &roll);
        }
    }
}

/* ---------------------------------------------------------------- */

/* Euclidean Algorithm computing the greatest commin divisor of two integers */

#include <stdio.h>

int gcd(long long int a, long long int b) 
{
    long long int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    if (a < 0) a *= -1;

    printf("The greatest common divisor is: %lli\n\n", a);
    return 0;
}

int main() 
{
    long long int num1, num2;
    printf("Enter two integers to calculate the greatest common divisor:\n");
    scanf("%lli %lli", &num1, &num2);
    gcd(num1, num2);
    return 0;
}

/* ---------------------------------------------------------------- */

/*
A digital building alarm system returns an 1-byte integer as a value, whose bits transmit the following data:
Bits 7, 6, 5 and 4 specify the checkpoint (16 possible combinations from 0-15
Bits 3 and 2 the type of emergency (0-None, 1-Fire, 2-Break-in, 3-Smoke)
Bit 1 show the system state (1-Working, 0-Failure)
Bit 0 is not used.

Write a program that takes the alarm system output as input and displays the checkpoint and the emergency type. In case of a system failure, the output should be "System Failure".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, checkpoint, emergency, state;
    
    printf("Enter alarm system output:\n");
    scanf("%d", &input);

    checkpoint = (input & 240) >> 4;
    emergency = (input & 12) >> 2;
    state = (input & 2) >> 1;

    if (state == 0) {
        printf("System Failure\n");
        return 1;
    }

    printf("Checkpoint: %d\n", checkpoint + 1);
    if (emergency == 0) printf ("Emergency: None\n");
    if (emergency == 1) printf ("Emergency: Fire\n");
    if (emergency == 2) printf ("Emergency: Break-in\n");
    if (emergency == 3) printf ("Emergency: Smoke\n");
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Convert seconds to hours, minutes and seconds */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sec, min, h;
    printf("Enter time in seconds:\n");
    scanf("%d", &sec);

    h = sec / 3600;
    min = sec % 3600 / 60;
    sec = sec % 3600 % 60;
    printf("%d hours, %d minutes and %d seconds\n", h, min, sec);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Average of marks from three modules and evaluation - max: 100 pass > 50 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int mark1, mark2, mark3, average;

    printf("Enter marks in three modules:\n");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    average = (mark1 + mark2 + mark3) / 3;

    if (average >= 50)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}

/* ---------------------------------------------------------------- */

/* Character to ASCII code */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a character to get its ASCII code:\n");
    c = getchar();
    printf("Character: %c\n    ASCII: %d", c, c);
    return 0;
}

/* ---------------------------------------------------------------- */

/* ASCII code to character */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ascii;
    printf("Enter aan ASCII code  to get the character:\n");
    scanf("%d", &ascii);
    printf("%c", ascii);
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Read chatacter and print it on screen */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter character:\n");
    c = getchar();
    putchar(c);
    putchar('\n');
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Checks if character is a capital latin letter */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a character to check if it is a capital latin letter:\n");
    c = getchar();
    
    if (c >= 65 && c <= 90)
        printf("The character is a capital latin letter.\n");
    else
        printf("The character is not a capital latin letter.\n");

    return 0;
}

/* ---------------------------------------------------------------- */

/* Takes character as input and:
 * Prints the character if it is a lowercase letter   
 * Prints "You enter a digit" if it is a number
 * Does nothing otherwise
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch = getchar();
    if (ch >= 97 && ch <= 122)
        putchar(ch);
    if (ch >= 48 && ch <= 57)
        printf("You entered a digit");
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Take a character as input, output the next ASCII character it it's a letter
 * or the character if it's a number.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch = getchar();

    if (ch >= 48 && ch <= 57) /* number */
        putchar(ch);  
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) /* Capital and lowercase letters */
        printf("%c", ch + 1);
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Take an floating point number and display the integer and the
 * fractional parts seperately */

#include <stdio.h>

int main()
{
    float num, fra_p;
    int int_p;
    scanf("%f", &num);
    int_p = num;
    fra_p = num - int_p;

    printf("%d\n", int_p); 
    printf("%f\n", fra_p);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Area of a circle */

#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793 

int main()
{
    double r, area;
    printf("Enter radius:\n");
    scanf("%lf", &r);
    
    area = PI * pow(r, 2);
    printf("A circle of radius %f has an area of %lf\n", r, area);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Takes a float and an int and calculates the remainder of their division,
 * ex. 5.14 and will output 1.14 */

#include <stdio.h>

int main()
{
    float num_f;
    int num_i;
    int num_f_to_i;
    float remainder; 
    
    scanf("%f %d", &num_f, &num_i);

    num_f_to_i = num_f;
    remainder = (num_f_to_i % num_i) + (num_f - num_f_to_i);

    printf("%f", remainder);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Takes a float and an int and calculates the remainder of their division,
 * ex. 5.14 and will output 1.14 */

/* Alternative solution */

#include <stdio.h>

int main()
{
    float num_f, remainder;
    int num_i, temp;
    scanf("%f %d", &num_f, &num_i);
    temp = num_f / num_i;
    remainder = num_f - temp * num_i;
    printf("%f\n", remainder);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Stylized multiplication of two floating-point numbers */

#include <stdio.h>

int main()
{
    float a, b, product;
    scanf("%f %f", &a, &b);

    product = a * b;

    printf("\n %9.2f\n", a);
    printf("x%9.2f\n", b);
    printf("==========\n");
    printf(" %9.2f\n\n", product);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Tax calculator
 *
 * Income       Tax
 * <5000         0%
 * 5000-10000    5%
 * 10000-30000  15%
 * >30000       35%
 */

#include <stdio.h>

int main()
{
    float income, tax;
    scanf("%f", &income);

    if (income < 5000)
        tax = 0;
    else if (income >= 5000 && income <= 10000)
        tax = income * 0.05;
    else if (income > 10000 && income <= 30000)
        tax = income * 0.15;
    else
        tax = income * 0.35;

    printf("Tax: %f", tax);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Leap Years */

#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap year");
            }
            else
            {
                printf("Not leap year");
            }
        }
        else
        {
            printf("Leap year");
        }
    }
    else
    {
        printf("Not leap year");
    }

    return 0;
}

/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



/* ---------------------------------------------------------------- */



