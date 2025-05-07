// 1) What will be the output of bellow code

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 3, c = 1;
//     int result = a * (b + c++) / (--b);
//     printf("%d\n", result);
//     return 0;
// }

// A) 10 ✅
// B) 15
// C) 25
// D) 30

// ANS : A
// _______________________________________________________

// 2) What will be the output of bellow code

// #include <stdio.h>
// int main()
// {
//     int x = 5, y = 2, z;
//     z = x / y * x % y;
//     printf("%d\n", z);
//     return 0;
// }

// A) 0 ✅
// B) 1
// C) 2 ✅
// D) Compilation Error

// ANS : C in c++ compiler A in turbo c
// _______________________________________________________

// 3) What is the output of the following code

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 5;
//     int x, y;

//     x = ++a * 2 - 1;
//     y = b++ * 2 - 1;
//     c *= 2 - 1;

//     printf("%d %d %d\n", x, y, c);
//     return 0;
// }

// A) 12 10 10
// B) 12 10 5
// C) 11 9 10
// D) 11 9 5 ✅

// ANS : D
// _______________________________________________________

// 4) What will be the output for the following C code

// #include <stdio.h>
// int main()
// {
//     int a = 8;
//     double b = 2.6;
//     int c;
//     c = a + b;
//     printf("%d", c);
//     return 0;
// }

// A) 10.6
// B) 10 ✅
// C) 11
// D) 16

// ANS : B
// _______________________________________________________

// 5) What will be the output for the following C code

// #include <stdio.h>
// int main()
// {
//     int x = 4, y = 2;
//     x /= x / y;
//     printf("%d\n", x);
//     return 0;
// }

// A) 4
// B) 2 ✅
// C) 1
// D) 0

// ANS : B
// _______________________________________________________

// 6) Consider the following program fragment,and choose the correct one.

// #include <stdio.h>
// int main()
// {
//     int a, b = 2, c;
//     a = 2 * (b++);
//     c = 2 * (++b);
//     printf("a=%d, b=%d, c=%d", a, b, c);
//     return 0;
// }

// A) a=4, b=2, c=6
// B) a=2, b=4, c=4
// C) a=4, b=4, c=8 ✅
// D) a=6, b=4, c=8

// ANS : C
// _______________________________________________________

// 7) What will be the output of following program

// #include <stdio.h>
//   void main()
// {
//     int x = (20 || 40) && (10);
//     printf("x= %d", x);
// }

// A) x= 60
// B) x= 70
// C) x= 0
// D) x= 1✅

// ANS : D
// _______________________________________________________

// 8) What will be the output of bellow code

// #include <stdio.h>
//   void main()
// {
//     int i = 0, j = 1, k = 2, m;
//     m = i++ || j++ || k++;
//     printf("%d %d %d %d", m, i, j, k);
//     return 0;
// }

// A) 1 1 2 3
// B) 1 1 2 2 ✅
// C) 0 1 2 2
// D) 0 1 2 3

// ANS : B
// _______________________________________________________

// 9) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 3, b = 9;
//     printf("%d", ++(a * b + 1));
//     return 0;
// }

// A) 28
// B) 29
// C) 30
// D) Compilation error ✅

// ANS : D
// _______________________________________________________

// 10) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int b = 4;
//     a += b % a;
//     printf("%d", a);
//     return 0;
// }

// A) 7
// B) 8
// C) 9 ✅
// D) 10
// E) 9.0

// ANS : C
// _______________________________________________________

// 11) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int b = 10;
//     int c = 15;
//     int d = 2;
//     int result = a++ * ++b - c-- / d++;
//     printf("%d %d %d %d", a, b, c, result);
//     return 0;
// }

// A) 6 11 14 48 ✅
// B) 6 11 14 49
// C) 6 11 15 49
// D) 6 10 14 48
// E) None

// ANS : A
// _______________________________________________________

// 12) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int x = 3;
//     int y = 2;
//     int z = x++ * x * --y - y--;
//     printf("%d %d %d", x, y, z);
//     return 0;
// }

// A) 4 0 11 ✅
// B) 4 4 11
// C) 4 4 15
// D) 4 4 4
// E) None

// ANS : A
// _______________________________________________________

// 13) Which of the following operator takes only integer operands

// A) +
// B) *
// C) /
// D) % ✅
// E) None of these

// ANS : D
// _______________________________________________________

// 14) In an expression involving || operator ,evaluation

// I)   Will be stopped if one of its components evaluates to false
// II)  Will be stopped if one of its components evalutes to true ✅
// III) Takes place from right to left
// IV)  Takes place from left to right ✅

// A) I and II
// B) I and III
// C) II and III
// D) II and IV ✅
// E) III and IV

// ANS : D
// _______________________________________________________

// 15) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int i = 10;
//     i = !i > 14;
//     printf("%d", i);
//     return 0;
// }

// A) 10
// B) 14
// C) 0 ✅
// D) 1
// E) None of these

// ANS : C
// _______________________________________________________

// 16) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     printf("%d", 3 * 2 --);
//     return 0;
// }

// A) 3
// B) 9
// C) 6
// D) Compilation error ✅

// ANS : D
// _______________________________________________________

// 17) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int i = 10;
//     i++;
//     i *i;
//     printf("%d\n", i);
//     return 0;
// }

// A) 121
// B) 100
// C) 10
// D) 11 ✅

// ANS : D
// _______________________________________________________

// 18) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a;
//     a = (1, 2, 3);
//     printf("%d", a);
//     return 0;
// }

// A) 1
// B) 7
// C) 3 ✅
// D) 9
// E) Compilation error

// ANS : C
// _______________________________________________________

// 19) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 4, b, c;
//     b = --a;
//     c = a--;
//     printf("%d %d %d", a, b, c);
//     return 0;
// }

// A) 3 3 2
// B) 2 3 2
// C) 3 2 2
// D) 2 3 3 ✅

// ANS : D
// _______________________________________________________

// 20) What will be the output of this below program

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

// A) 0 0 1
// B) 0 1 0 ✅
// C) 1 0 0
// D) 0 1 1

// ANS : B
// _______________________________________________________

// 21) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = -1, b = 1, c, d;
//     c = !a && b;
//     d = !a || b;
//     printf("%d %d %d %d", a, b, c, d);
//     return 0;
// }

// A) -1 1 1 0
// B) -1 1 0 0
// C) -1 1 1 1
// D) -1 1 0 1 ✅

// ANS : D
// _______________________________________________________

// 22) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     printf("%d Hello %d");
//     return 0;
// }

// A) Garbage_value Hello Garbage_value ✅
// B) 1 Hello 1
// C) 0 Hello 0
// D) Compilation error

// ANS : A
// _______________________________________________________

// 23) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     float y = 3.5;
//     int result = x + (int)y;
//     printf("Result: %d\n", result);
//     return 0;
// }

// A) Result: 8.5
// B) Result: 8 ✅
// C) Result: 3.5
// D) Result: 5
// E) Result: 7

// ANS : B
// _______________________________________________________

// 24) Which of the following is a valid C identifier

// A) 123name
// B) _name ✅
// C) my-name
// D) %name
// E) None

// ANS : B
// _______________________________________________________

// 25) What will be the output of this below program

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

// A) x = 6, y = 2
// B) x = 8, y = -4
// C) x = 7, y = -4 ✅
// D) x = 5, y = 3
// E) None

// ANS : C
// _______________________________________________________

// 26) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     printf("%d ", 2 + 3 * 4 + 5 == 45);
//     printf("%d ", 2 + 3 * 4 + 5 == 19);
//     printf("%d ", (2 + 3) * (4 + 5) == 45);
//     return 0;
// }

// A) 1 0 1
// B) 1 1 0
// C) 0 0 1
// D) 0 1 1 ✅
// E) None

// ANS : D
// _______________________________________________________

// 27) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 4, c = 10;
//     c = a = 10 == b + 6;
//     printf("a=%d, b=%d, c=%d", a, b, c);
//     return 0;
// }

// A) a=10, b=4, c=1  ==> ANS=1 4 1 ✅
// B) a=1, b=4, c=0
// C) a=0, b=10, c=1
// D) Compiler Error
// E) a=1, b=4, c=1

// ANS : A
// _______________________________________________________

// 28) What will be the output of this below program

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

// A) a=4, b=6   ✅
//    a=4, b=9

// B) a=6, b=1
//    a=6, b=6

// C) a=4, b=6
//    a=4, b=10

// D) a=1, b=1
//    a=1, b=1

// ANS : C
// _______________________________________________________

// 29) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 3;
//     int b = a++ + ++a + --a;
//     printf("Value of b is %d", b);
//     return 0;
// }

// A) Value of b is 12 ✅
// B) Value of b is 13
// C) Value of b is 10
// D) Undefined behaviour

// ANS : A
// _______________________________________________________

// 30) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int x = 3;
//     int y = 2;
//     int z = x++ * (x + y) - y --;
//     printf("z = %d\n", z);
//     return 0;
// }

// A) z = 22
// B) z = 23
// C) z = 16 ✅
// D) z = 7
// E) z = 20

// ANS : C
// _______________________________________________________

// 31) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = 5;
//     int z = x - - -y;
//     printf("x = %d, y = %d, z = %d\n", x, y, z);
//     return 0;
// }

// A) x = 9, y = 5, z = 5 ✅
// B) x = 9, y = 4, z = 5
// C) x = 9, y = 5, z = 4
// D) Compiler Error
// E) None

// ANS : A
// _______________________________________________________

// 32) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int x = 15;
//     int y = 2;
//     int z = x / y + x % y;
//     printf("z = %d\n", z);
//     return 0;
// }

// A) z = 7
// B) z = 8 ✅
// C) z = 9
// D) z = 14
// E) z = 15

// ANS : B
// _______________________________________________________

// 33) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 2, c = 3;
//     int result = a++ + ++b + c-- - --c + ++a + b-- + a-- - b;
//     printf("result = %d\n", result);
//     return 0;
// }

// A) result = 8
// B) result = 11
// C) result = 12
// D) result = 13 ✅
// E) result = 14

// ANS : D
// _______________________________________________________

// 34) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 15;
//     int c = a++ + b--;
//     printf("a = %d, b = %d, c = %d\n", a, b, c);
//     return 0;
// }

// A) a = 11, b = 14, c = 25 ✅
// B) a = 12, b = 13, c = 25
// C) a = 11, b = 13, c = 25
// D) a = 12, b = 14, c = 23
// E) a = 12, b = 14, c = 24

// ANS : A
// _______________________________________________________

// 35) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 20, c = 10;
//     int result = (a > b) || (b == c) && (c != a);
//     printf("result = %d\n", result);
//     return 0;
// }

// A) result = 0 ✅
// B) result = 1
// C) result = 2
// D) result = 3
// E) result = 4

// ANS : A
// _______________________________________________________

// 36) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 10, c = 15;
//     int result = !(a <= b) && !(b != c) && !(c >= a);
//     printf("result = %d\n", result);
//     return 0;
// }

// A) result = 0 ✅
// B) result = 1
// C) result = 2
// D) result = 3
// E) result = 4

// ANS : A
// _______________________________________________________

// 37) What will be the output of this below program

// #include <stdio.h>
// int main()
// {
//     int a = 15, b = 4, c = 3;
//     int result = (a + b) % c * b;
//     printf("result = %d\n", result);
//     return 0;
// }

// A) result = 8
// B) result = 7
// C) result = 4 ✅
// D) result = 5
// E) result = 6

// ANS : C
// _______________________________________________________

// 38) What will be the output of the following C code

// #include
// int main()
// {
//     int a = 3;
//     int b = 4;
//     int result = (a += b) * (b -= 2);
//     printf("result = %d\n", result);
//     return 0;
// }

// A) result = 10
// B) result = 12
// C) result = 15
// D) result = 14 ✅
// E) result = 16

// ANS : D
// _______________________________________________________

// 39) What will be the output of this below program

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

// _______________________________________________________

// 40) What will be the output of this below program

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

// _______________________________________________________

// 41) What will be the output of this below program

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

// _______________________________________________________

// 42) Find the output of the given C program

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
// _______________________________________________________

// 43) Find the output of the given C program

// #include <stdio.h>
// int main()
// {
//     printf("%d ", 5 > 2 && 1 < 2);
//     printf("%d ", 4 > 5 || 2 < 1);
//     printf("%d ", !(2 > 3));
//     return 0;
// }
// _______________________________________________________

// 44) Find the output of the given C program

// #include <stdio.h>
// int main()
// {
//     int a;
//     a = 'a' > 'A';
//     printf("%d", a);
//     return 0;
// }
// _______________________________________________________

// 45) Find the output of the given C program

// #include <stdio.h>
// int main()
// {
//     printf("%d ", -9 && 9);
//     printf("%d", -9 || 9);
//     return 0;
// }
// _______________________________________________________
