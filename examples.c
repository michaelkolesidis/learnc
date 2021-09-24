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
 * A digital building alarm system returns an 1-byte integer as a value, 
 * whose bits transmit the following data:
 *
 * Bits 7, 6, 5 and 4 specify the checkpoint (16 possible combinations from 0-15
 * Bits 3 and 2 the type of emergency (0-None, 1-Fire, 2-Break-in, 3-Smoke)
 * Bit 1 show the system state (1-Working, 0-Failure)
 * Bit 0 is not used.
 *
 * Write a program that takes the alarm system output as input and displays 
 * the checkpoint and the emergency type. In case of a system failure, the 
 * output should be "System Failure".
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

/* Coffee Venting Machine
 * Takes only €5 banknotes
 * Coffee price: €0.70
 * Takes number of coffees as input and calculates change 
 * and whether €5 are enough for the purchase.
 */

#include <stdio.h>

int main()
{
    const int price = 70;
    const int available = 500;
    int coffees, total, change, total_change;
    int c10, c20, c50, c1, c2 = 0;

    printf("How many coffees would you like to order?\n");
    scanf("%d", &coffees);

    while (coffees < 0)
    {
        printf("Please enter a valid number:\n");
        scanf("%d", &coffees);
    }

    total = price * coffees;
    if (total > available)
    {
        printf("€5 are not enough for %d coffees.\n", coffees);
        return 0;
    }

    change = available - total;
    total_change = change;

    while (change > 0)
    {
        if (change >= 400)
        {
            c2 += 2;
            change -= 400;
        }
        if (change >= 200 && change < 400)
        {
            c2 += 1;
            change -= 200;
        }
        if (change >= 100 && change < 200)
        {
            c1 += 1;
            change -= 100;
        }
        if (change >= 50 && change < 100)
        {
            c50 += 1;
            change -= 50;
        }
        if (change >= 20 && change < 50)
        {
            c20 += 1;
            change -= 20;
        }
        if (change >= 10 && change < 20)
        {
            c10 += 1;
            change -= 10;
        }
    }
    
    printf("\n Price : %d", total / 100);
    printf("\nChange :\n");
    if (c2) printf("   €2 coins : %d\n", c2);
    if (c1) printf("   €1 coins : %d\n", c1);
    if (c50) printf("€0.50 coins : %d\n", c50);
    if (c20) printf("€0.20 coins : %d\n", c20);
    if (c10) printf("€0.10 coins : %d\n", c10);
    printf("=======================\n");
    printf("      Total : %d\n\n", total_change / 100);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Coffee Venting Machine */
/* Solution 2 */

#include <stdio.h>

int main()
{
    const int price = 70;
    const int available = 500;
    int coffees, change, total_change;
    int c10, c20, c50, c1, c2 = 0;

    printf("How many coffees would you like to order?\n");
    scanf("%d", &coffees);

    while (coffees < 0)
    {
        printf("Please enter a valid number:\n");
        scanf("%d", &coffees);
    }

    change = available - price * coffees;
    total_change = change;

    if (change < 0)
    {
        printf("€5 are not enough for %d coffees.\n", coffees);
        return 1;
    }

    c2 = change /200;
    change = change % 200;

    c1 = change /100;
    change = change % 100;

    c50 = change /50;
    change = change % 50;

    c20 = change /20;
    change = change % 20;

    c10 = change /10;
    change = change % 10;

    printf("\nChange :\n");
    if (c2)
        printf("   €2 coins : %d\n", c2);
    if (c1)
        printf("   €1 coins : %d\n", c1);
    if (c50)
        printf("€0.50 coins : %d\n", c50);
    if (c20)
        printf("€0.20 coins : %d\n", c20);
    if (c10)
        printf("€0.10 coins : %d\n", c10);
    printf("=======================\n");
    printf("      Total : %f\n\n", total_change / 100.0);

    return 0;
}

/* ---------------------------------------------------------------- */

/* BMI Calculator */

#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Please enter your weight:\n");
    scanf("%f", &weight);

    printf("Please enter your height:\n");
    scanf("%f", &height);

    bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        printf("BMI: %f\nUnderwight\n", bmi);
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("BMI: %f\nNormal Range\n", bmi);
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("BMI: %f\nOverweight\n", bmi);
    }
    else
    {
        printf("BMI: %f\nObese\n", bmi);
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* Quadratic Formula */

#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, discriminant, x1, x2;
    printf("Enter a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("There aren't real solutions to the quadratic equation.\n");
    }
    else if (discriminant == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("x1, x2 = %f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* Tiered Pricing */

#include <stdio.h>

int main()
{
    int sms;
    float price;

    printf("How many SMS did you send:\n");
    scanf("%d", &sms);

    if (sms <= 10)
        price = sms * 2;
    else if (sms <= 60)
        price = 10 * 2 + (sms - 10) * 1.5;
    else if (sms <= 160)
        price = 10 * 2 + 50 * 1.5 + (sms - 60) * 1.2;
    else
        price = 10 * 2 + 50 * 1.5 + 100 * 1.2 + (sms - 160) * 1;

    printf("SMS sent: %d\n", sms);
    printf("  Price : %f\n", price / 100);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Fuel Consumption */

#include <stdio.h>

int main()
{
    float liters, miles, consumption;

    printf("Distance in miles:\n");
    scanf("%f", &miles);

    printf("Fuel used in liters:\n");
    scanf("%f", &liters);

    consumption = liters / miles;

    if (consumption <= 0.9)
        printf("Very Low Consumption");
    else if (consumption <= 1.2)
        printf("Low Consumption");
    else if (consumption <= 1.8)
        printf("Normal Consumption");
    else
        printf("High Consumption");

    return 0;
}

/* ---------------------------------------------------------------- */

/* Multiplication Table */

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("-------------\n");
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* Reverse integer : Takes an integer as input and prints its digits
 * in reverse order */

#include <stdio.h>

int main()
{
    int num, quo, rem;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
       rem = num % 10;
       quo = num /10;
       printf("%d", rem);
       num = quo;
    } while (quo != 0);
    
    return 0;
}

/* ---------------------------------------------------------------- */

/* Counts typed Latin characters */

#include <stdio.h>

int main()
{
    char ch;
    int lat = 0;
    while (ch != 27)
    {
        ch = getchar();
        if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
        {
            lat += 1;
        }
    }
    printf("You typed %d Latin letters\n", lat);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Count characters typed between two asterisks */

#include <stdio.h>

int main()
{
    char ch;
    int asterisk = 0;
    int total = 0;

    do
    {
        scanf("%c", &ch);
        if (ch == '*')
            asterisk += 1;
        if (asterisk > 0 && ch != '*' && ch!= 10)
            total += 1;
        
    } while (asterisk < 2);
    printf("%d characters typed between the two asterisks\n", total);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Sum of fraction 1/1 + 1/2 + ... + 1/limit */

#include <stdio.h>

int main()
{
    int limit = 100;
    double sum = 0;
    for (int i = 1; i <= limit; i++)
    {
        sum += (1.0 / i);
    }
    printf("%lf", sum);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Decimal to Binary Converter */

#include <stdio.h>

int main()
{
    int num, bin, shift;
    printf("Enter number in decimal:\n");
    scanf("%d", &num);
    printf("%d in binary form is:\n", num);

    for (shift = 31; shift >= 0; shift--)
    {
        bin = num >> shift;

        if (bin & 1)
            printf("1");
        else
            printf("0");
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* Print numbers 1 to 100 in a matrix */

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i < 10)
            printf("0%d ", i);
        else
            printf("%d ", i);
        if (i % 10 == 0)
            putchar('\n');
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* Calculates the sum of the digits of a given integer */

#include <stdio.h>

int main()
{
    int num, r, q;
    int sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    do
    {
        q = num / 10;
        r = num % 10;
        sum += r;
        num = q;
    } while (q != 0);

    printf("Sum of digits: %d", sum);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Student marks average, maximum and second biggest mark */

#include <stdio.h>

int main()
{
    int i, students;
    float mark, sum, max, max2, average;
    sum = 0;
    students = 10;

    for (i = 1; i <= students; i++)
    {
        printf("Enter mark of student %d : \n", i);
        scanf("%f", &mark);
        sum += mark;

        if (i == 1)
        {
            max = mark;
        }
        else if (i == 2)
        {
            max2 = mark;
        }
        else
        {
            if (mark > max)
            {
                max2 = max;
                max = mark;
            }
            else if (mark > max2)
            {
                max2 = mark;
            }
        }
    }

    average = sum / students;

    printf("            Average : %.2f\n", average);
    printf("       Biggest mark : %.2f\n", max);
    printf("Second biggest mark : %.2f\n", max2);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Calculate f(x)=x^4-5x^2+3 for x = 0 to x = 1 with step 0.05 */

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int main()
{
    int i;
    double x, fx;

    for (x = 0; x <= 1.001; x = x + 0.05)
    {
        fx = pow(x, 4) - 5 * pow(x, 2) + 3;
        printf("x= %lf  f(x)= %lf\n", x, fx);
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* ax^2-bx+3=0 Calculate all real solutions for combinations of a, b
 * in the range [-50, 50], unless they are both 0.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    double x1, x2, d;

    for (a = -50; a <= 50; a++)
    {
        for (b = -50; b <= 50; b++)
        {
            if (a == 0 || b == 0)
                continue;

            d = pow(b, 2) - 4 * a * 3;
            if (d > 0)
            {
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                printf("a=%d b=%d  x1=%lf x2=%lf\n", a, b, x1, x2);
            }
            else if (d == 0)
            {
                x1 = -b / (2 * a);
                printf("a=%d b=%d  x=%lf\n", a, b, x1);
            }
            else
            {
                printf("a=%d b=%d there are no real solutions\n", a, b);
            }
        }
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* 
 * Euclidean Algorithm computing the greatest commin divisor of two integers 
 * Alternative solution
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, temp, r, gcd;
    scanf("%d %d", &m, &n);

    if (n > m)
    {
        temp = m;
        m = n;
        n = temp;
    }

    if (n == 0)
    {
        gcd = m;
    }

    else
    {
        do
        {
            r = m % n;

            if (r != 0)
            {
                m = n;
                n = r;
            }
        } while (r != 0);
        gcd = n;
    }

    printf("greatest common divisor --> %d", gcd);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Print all integers in the given range */

#include <stdio.h>

void numbers(int from, int to)
{
    int i, temp;

    if (from > to)
    {
        temp = to;
        to = from;
        from = temp;
    }

    for (i = from; i <= to; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int first, last;
    printf("Choose range: first number to last number\n");
    scanf("%d %d", &first, &last);
    printf("Show numbers:\n");
    numbers(first, last);

    return 0;
}

/* ---------------------------------------------------------------- */

/* John Wallis formula for pi approximation */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long double wallis(int last)
{
    long double half_pi;
    int i;
    half_pi = 1;

    for (i = 1; i <= last - 2; i += 2)
    {
        half_pi *= pow((i+1), 2) / (i * (i+2));
    }

        return half_pi;
}

int main()
{
    int x;
    scanf("%d", &x);
    printf(" pi = %Lf", 2 * wallis(x));

    return 0;
}

/* ---------------------------------------------------------------- */

/* Leap years between two given years */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int leap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int start_year, end_year, this_year;
    scanf("%d %d", &start_year, &end_year);

    for (this_year = start_year; this_year <= end_year; this_year++)
    {
        if (leap(this_year) == 1)
        {
            printf("%d ", this_year);
        }
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* BMI using functions */

#include <stdio.h>
#include <stdlib.h>

int calculate(float height, float weight)
{
    float bmi_;
    bmi_ = weight / (height * height);
    return bmi_;
}

void results(float bmi)
{
    if (bmi < 18.5)
    {
        printf("BMI: %f\nUnderwight\n", bmi);
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("BMI: %f\nNormal Range\n", bmi);
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("BMI: %f\nOverweight\n", bmi);
    }
    else
    {
        printf("BMI: %f\nObese\n", bmi);
    }
    printf("\n");
}

int main()
{
    float h, w;
    do
    {
        printf("Enter height:\n");
        scanf("%f", &h);
        printf("Enter weight:\n");
        scanf("%f", &w);
        if (h == 0 || w == 0) break;
        results(calculate(h, w));
    } while (1);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Calculate f(x)=x^4-10x^2+2 for x = 0 to x = 1 with step 0.05 using function */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double calculate(double x_)
{
    double fx_;
    fx_ = pow(x_, 4) - 10 * pow(x_, 2) + 2;

    return fx_;
}

int main()
{
    int i;
    double x;

    for (x = 0; x <= 1.001; x = x + 0.05)
    {
        calculate(x);
        printf("x= %.3lf  f(x)= %.3lf\n", x, calculate(x));
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* VAT calculator with functions 
 * Each product belongs to a VAT category as following
 *
 * Category  VAT%
 *      1   0.00
 *      2   0.06
 *      3   0.13
 *      4   0.19
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float calculate_vat(int quantity_, float price_, int cat_)
{
    float vat;
    switch (cat_)
    {
    case 1:
        vat = 0;
        break;
    case 2:
        vat = quantity_ * price_ * 0.06;
        break;
    case 3:
        vat = quantity_ * price_ * 0.13;
        break;
    case 4:
        vat = quantity_ * price_ * 0.19;
        break;
    }
    return vat;
}

int main()
{
    int i, quantity, cat;
    float price, total_cost = 0, total_vat = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Product %d\n", i);
        printf("Quantity:\n");
        scanf("%d", &quantity);
        printf("Price:\n");
        scanf("%f", &price);
        printf("Category:\n");
        scanf("%d", &cat);

        total_cost += quantity * price;
        total_vat += calculate_vat(quantity, price, cat);
    }

    printf("Price without VAT: %f\n", total_cost - total_vat);
    printf("              VAT: %f\n", total_vat);
    printf("==============================\n");
    printf("            Total: %f", total_cost);

    return 0;
}

/* ---------------------------------------------------------------- */

/* 100 First Primes */

#include <stdio.h>

int prime()
{
    static int num = 1;
    int i, found = 1;
    while (found)
    {
        found = 0;
        num = num + 1;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                found = 1;
        }
    }
    return num;
}

int main()
{
    int i;
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", prime());
    }
    return 0;
}

/* ---------------------------------------------------------------- */

/* 100 First Primes using a global variable */
/* THE USE OF GLOBAL VARIABLES IS NOT ADVISABLE */

#include <stdio.h>

int num = 1;

int prime()
{
    int i, found = 1;
    while (found)
    {
        found = 0;
        num = num + 1;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                found = 1;
        }
    }
    return num;
}

int main()
{
    int i;
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", prime());
    }
    return 0;
}


/* ---------------------------------------------------------------- */

/* Sum and product of two numbers using global variables */
/* THE USE OF GLOBAL VARIABLES IS NOT ADVISABLE */

#include <stdio.h>

int x, y, sum, pro;

int add()
{
    return x + y;
}

int gin()
{
    return x * y;
}

void out()
{
    printf("Sum = %d Product = %d \n", sum, pro);
}

int main()
{
    scanf("%d %d", &x, &y);
    sum = add();
    pro = gin();
    out();

    return 0;
}

/* ---------------------------------------------------------------- */

/* Factorial */

#include <stdio.h>

unsigned long long int calc_fact(int num)
{
    int i;
    unsigned long long int factorial = 1;

    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("!%d = %llu", num, calc_fact(num));

    return 0;
}

/* ---------------------------------------------------------------- */

/* Live number counter */

#include <stdio.h>

int main()
{
    int delay = 1000000;

    for (int i = 0; i < 100; i++)
    {
        printf("\rNumber : %d", i);
        for (int j = 0; j < delay; j++)
        fflush(stdout);
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* Creates a custom parallelogram of varying sizes according to user input 
 * It is created using a character of choice and be filled or empty.
 */

#include <stdio.h>

int draw(char ch, int w, int h, int fill)
{
    int i, j;
    printf("\n\n");

    /* print top side */
    for (i = 1; i <= w; i++)
        printf("%c", ch);
    printf("\n");

    /* print middle part */
    for (i = 1; i <= h - 2; i++)
    {
        printf("%c", ch);
        for (j = 1; j <= w - 2; j++)
        {
            if (fill == 0)
                printf(" ");
            else if (fill == 1)
                printf("%c", ch);
        }
        printf("%c", ch);
        printf("\n");
    }

    /* print bottom side */
    for (i = 1; i <= w; i++)
    {
        printf("%c", ch);
    }
    printf("\n\n\n");
    return 0;
}

int main()
{
    char ch;
    int w, h, fill;

    printf("Character: ");
    scanf("%c", &ch);

    printf("Width: ");
    scanf("%d", &w);

    printf("Height: ");
    scanf("%d", &h);

    printf("Fill (n=0 y=1): ");
    scanf("%d", &fill);

    draw(ch, w, h, fill);
    return 0;
}

/* ---------------------------------------------------------------- */

/* Print string using a pointer */

#include <stdio.h>

int main()
{
    char *b;
    b = "Hello";
    printf("%s", b);
}Ï

/* ---------------------------------------------------------------- */

/* Length of string using a pointer */

#include <stdio.h>

int length(char *p)
{
    int c = 0;
    while(*p != '\0')
    {
        c++;
        p++;
    }
    return c;
}

int main()
{
    char *p;
    p = "Hello";
    printf("%d", length(p));

    return 0;
}

/* ---------------------------------------------------------------- */

/* Count occurences of a character in a string using a pointer */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p, ch;
    ch = getchar();
    int ctr = 0;
    p = "What a great day to be alive!";

    while (*p != '\0')
    {
        if (*p == ch)
            ctr++;
        p++;
    }

    printf("\'%c\' appears %d times.\n", ch, ctr);

    return 0;
}

/* ---------------------------------------------------------------- */

/* Reverse string */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr, *start;
    int c = 0;
    ptr = "ACID";
    start = ptr;

    while (*ptr != '\0')
    {
        ptr++;
    }
    ptr--;

    while (ptr >= start)
    {
        putchar(*ptr);
        ptr--;
    }

    return 0;
}

/* ---------------------------------------------------------------- */

/* Sum of given numbers using pointers */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    scanf("%d %d", p1, p2);

    *p3 = *p1 + *p2;

    printf("c = %d", *p3);
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



