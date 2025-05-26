#include<stdio.h>
void squarepattern();
void squarepatternnum();
void squarepatternnum2();
void squarepatternnumodd();
void squarepatternbinary();
void squarepatternnumeven();
void squarepatter4();
void squarepatternbinarylast();
void squarepattern6();
void squarepattern7();
void squarepattern8();
int main() {
    squarepattern();
    printf("\n\n");

    squarepatternnum();
    printf("\n\n");

    squarepatternnum2();
    printf("\n\n");

    squarepatternnumodd();
    printf("\n\n");

    squarepatternbinary();
    printf("\n\n");

    squarepatternnumeven();
    printf("\n\n");

    squarepatter4();
    printf("\n\n");

    squarepatternbinarylast();
    printf("\n\n");

    squarepattern6();
    printf("\n\n");

    squarepattern7();
    printf("\n\n");

    squarepattern8();

    printf("\n\n");


}





// 1)Write a C program to print square pattern program using*

void squarepattern() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = 1;j <= c;j++) {
            printf("* ");
        }
        printf("\n");

    }


}

// *****

// *****

// *****

// *****

// *****
// ==================================================================================================================================================================================
// 2)Write a C program to print square pattern program✅

void squarepatternnum() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", i);
        }
        printf("\n");

    }
}

// 1 1 1 1 1

// 2 2 2 2 2

// 3 3 3 3 3

// 4 4 4 4 4

// 5 5 5 5 5
// ==================================================================================================================================================================================
// 3)Write a C program to print square pattern program

void squarepatternnum2() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", j);
        }
        printf("\n");

    }
}

// 1 2 3 4 5

// 1 2 3 4 5

// 1 2 3 4 5

// 1 2 3 4 5

// 1 2 3 4 5
// ==================================================================================================================================================================================
// 4)Write a C program to print square pattern program✅



void squarepatternnumodd() {
    int r = 4, c = 5, odd = 1;
    for (int i = 1;i <= r;i++) {
        for (int j = 1; j <= c; j++)
        {
            printf("%3d", odd++);
            odd++;
        }
        printf("\n");

    }
}


// 1   3   5   7  9

// 11 13 15 17 19

// 21 23 25 27 29

// 31 33 35 37 39
// ==================================================================================================================================================================================
// 5)Write a C program to print square pattern program✅


void squarepatternbinary() {
    int r = 5, c = 5, odd = 1;
    for (int i = 1;i <= r;i++) {
        for (int j = 1; j <= c; j++)
        {
            if (j % 2)printf("%3d", odd);
            else printf("%3d", !odd);
        }
        printf("\n");

    }
}

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// ==================================================================================================================================================================================
// 6)Write a C program to print square pattern program✅

void squarepatternnumeven() {
    int r = 5, c = 5, even = 1;
    for (int i = 1;i <= r;i++) {
        for (int j = 1; j <= c; j++)
        {
            printf("%3d", even * 2);
            even++;

        }
        printf("\n");
    }
}

// 2  4  6   8   10

// 12 14 16 18 20

// 22 24 26 28 30

// 32 34 36 38 40

// 42 44 46 48 50
// ==================================================================================================================================================================================
// 7)Write a C program to print square pattern program ✅



void squarepatter4() {
    int r = 5, c = 6;
    for (int i = 1;i <= r;i++) {
        int n = 1;
        for (int j = 1; j <= c; j++)
        {
            if (j % 2 == 0) {
                printf("%3d", i);
            }
            else {
                printf("%3d", n++);

            }


        }
        printf("\n");
    }
}


// 1 1 2 1 3 1

// 1 2 2 2 3 2

// 1 3 2 3 3 3

// 1 4 2 4 3 4

// 1 5 2 5 3 5
// ==================================================================================================================================================================================
// 8)Write a C program to print square pattern program ✅

void squarepattern6() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = 1; j <= c;j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }
}


// 1 2   3    4    5

// 2 4   6    8   10

// 3 6   9   12  15

// 4 8  12  16  20

// 5 10 15 20  25
// ==================================================================================================================================================================================
// 9) Write a C program to print square pattern program✅

void squarepattern7() {
    int r = 5, c = 5;
    for (int i = 1; i <= r; i++)
    {
        int val = i;
        for (int j = 1; j <= c; j++)
        {
            printf("%3d", val);
            val += 5;
        }
        printf("\n");

    }

}

// 1 6 11 16 21

// 2 7 12 17 22

// 3 8 13 18 23

// 4 9 14 19 24

// 5 10 15 20 25
// ==================================================================================================================================================================================
// 10) Write a C program to print square pattern program✅
void squarepattern8() {
    int r = 5, c = 5;
    for (int i = r; i >= 1; i--)
    {
        int val = i;
        for (int j = 1; j <= c; j++)
        {
            printf("%3d", val);
            val += 5;
        }
        printf("\n");

    }

}



// 5 10 15 20 25

// 4 9  14 19 24

// 3 8  13 18 23

// 2 7  12 17 22

// 1 6  11 16 21
// ==================================================================================================================================================================================
// 11) Write a C program to print square pattern program ✅




void squarepatternbinarylast() {
    int r = 5, c = 5, b = 0;
    for (int i = 1;i <= r;i++) {
        for (int j = 1; j <= c; j++)
        {
            if (b % 2 == 0) {

                printf("%3d", 0);
            }
            else {
                printf("%3d", 1);
            }
            b++;

        }
        printf("\n");

    }
}


// 0 1 0 1 0

// 1 0 1 0 1

// 0 1 0 1 0

// 1 0 1 0 1

// 0 1 0 1 0






