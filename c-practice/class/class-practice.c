// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     int b = 1;
//     int c = a || --b;
//     int d = a-- && --b;
//     printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0, j = 1, k = 2, m;
//     m = i++ || j++ || k++;
//     printf("%d %d %d %d", m, i, j, k);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 4, b = 2;
//     printf("%d", a | b);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char val = 0;
//     float firstnumber = 0;
//     float lastnumber = 0;
//     scanf("%c\n", &val);
//     scanf("%f\n", &firstnumber);
//     scanf("%f\n", &lastnumber);
//     val == '+' && printf("Addition is: %.2f", firstnumber + lastnumber);
//     val == '-' && printf("Subtraction is: %.2f", firstnumber - lastnumber);
//     val == '*' && printf("Multiplication is: %.2f", firstnumber * lastnumber);
//     val == '/' && printf("Division is %.2f", firstnumber / lastnumber);
// }

#include <stdio.h>
int main()
{

    int number = 0;
    scanf("%d", &number); // 234

    number % 100 >= 50 && printf("Previous multiple: %d\n", (number / 100) * 100) && printf("Next multiple: %d", ((number / 100) + 1) * 100);
}