// 2) What will be the output of bellow code

// #include <stdio.h>
// int main()
// {
//     int x = 5, y = 2, z;
//     z = x / y * x % y;
//     printf("%d\n", z);
//     return 0;
// }

// A) 0
// B) 1
// C) 2 ✅
// D) Compilation Error

// #include <stdio.h>
// int main()
// {
//     int a = 1, b;
//     b = a++ + a++ + a++;
//     printf("a=%d, b=%d\n", a, b);
//     a = 1;
//     b = ++a + ++a + ++a;
//     printf("a=%d, b=%d", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     int y = 3;
//     x += y++;
//     y -= x--;
//     printf("x = %d, y = %d\n", x, y);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 4, c = 10;
//     c = a = 10 == b + 6;
//     printf("a=%d, b=%d, c=%d", a, b, c);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 1, b;
//     b = a++ + a++ + a++;
//     printf("a=%d, b=%d\n", a, b);
//     a = 1;
//     b = ++a + ++a + ++a;
//     printf("a=%d, b=%d", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 3;
//     int b = a++ + ++a + --a;
//     printf("Value of b is %d", b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 3;
//     int y = 2;
//     int z = x++ * (x + y) - y --;
//     printf("z = %d\n", z);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 10;

//     printf("%d == %d is %d \n", a, b, a == b);
//     printf("%d == %d is %d \n", a, c, a == c);
//     printf("%d > %d is %d \n", a, b, a > b);
//     printf("%d > %d is %d \n", a, c, a > c);
//     printf("%d < %d is %d \n", a, b, a < b);
//     printf("%d < %d is %d \n", a, c, a < c);
//     printf("%d != %d is %d \n", a, b, a != b);
//     printf("%d != %d is %d \n", a, c, a != c);
//     printf("%d >= %d is %d \n", a, b, a >= b);
//     printf("%d >= %d is %d \n", a, c, a >= c);
//     printf("%d <= %d is %d \n", a, b, a <= b);
//     printf("%d <= %d is %d \n", a, c, a <= c);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 10, result;

//     result = (a == b) && (c > b);
//     printf("(a == b) && (c > b) is %d \n", result);

//     result = (a == b) && (c < b);
//     printf("(a == b) && (c < b) is %d \n", result);

//     result = (a == b) || (c < b);
//     printf("(a == b) || (c < b) is %d \n", result);

//     result = (a != b) || (c < b);
//     printf("(a != b) || (c < b) is %d \n", result);

//     result = !(a != b);
//     printf("!(a != b) is %d \n", result);

//     result = !(a == b);
//     printf("!(a == b) is %d \n", result);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     float b;
//     double c;
//     char d;
//     printf("Size of int=%lu bytes\n", sizeof(a));
//     printf("Size of float=%lu bytes\n", sizeof(b));
//     printf("Size of double=%lu bytes\n", sizeof(c));
//     printf("Size of char=%lu byte\n", sizeof(d));

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x, y, z;
//     x = 9 > 8 > 7;
//     y = 9 > 8 > 0;
//     z = 9 > 8 > 1;
//     printf("%d %d %d", x, y, z);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("%d ", 5 > 2 && 1 < 2);
//     printf("%d ", 4 > 5 || 2 < 1);
//     printf("%d ", !(2 > 3));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     a = 'a' > 'A';
//     printf("%d", a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("%d ", -9 && 9);
//     printf("%d", -9 || 9);
//     return 0;
// }