// // What will be the output ?
// #include <stdio.h>
// void main()
// {
//     int k = 1;
//     if (k)
//         printf("Hello");
// }

// #include <stdio.h> int main()
// {
//     int a = 1;
//     if (a--)
//         printf("True");
//     if (++a)
//         printf("False");
// }
// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     if ((a++) != 10)
//         printf("True");
//     else
//         printf("False");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 3, c = 1;
//     int result = a * (b + c++) / (--b);
//     printf("%d\n", result);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, b;
//     a = (5 > 2) ? b = 6 : b = 8;
//     printf("% d % d", a, b);
//     return 0;
// }
// #include <stdio.h>
// void main()
// {
//     int i = 0;
//     if (i == 0)
//     {
//         goto label;
//     }
// label:
//     printf("Hello");
// }
// #include <stdio.h>
// void main()
// {
//     int x = 7;
//     if (x < 5)
//         ;
//     {
//         printf("x is greater than 5");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     if (printf("%d", i++))
//     {
//         printf("%d", i);
//     }
//     else
//     {
//         printf("%d", i++);
//     }
//     if (printf(""))
//     {
//         printf("%d", i);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     if (i == 0)
//     {
//         return 0;
//     }
//     printf("Hello");
// }
// #include <stdio.h>
// int main()
// {
//     int k, num = 100;
//     k = (num > 50 ? (num <= 10 ? 100 : 200) : 500);
//     printf("% d\n", num);
//     return 0;
// }