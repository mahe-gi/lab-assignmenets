#include<stdio.h>

int pattern1() {
    int r = 5, c = 5;

    for (int i = 1;i <= r;i++) {
        for (int j = 1;j <= c;j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

int pattern2() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = 1;j <= i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int pattern3() {
    int r = 5, c = 5;


    for (int i = 1;i <= r;i++) {
        for (int j = i;j <= r;j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;



}

int pattern4() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = 1;j <= i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1;i <= r;i++) {
        for (int j = i;j < r;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int pattern5() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = i;j < r;j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }



    return 0;
}

int pattern6() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = 1;j < i;j++) {
            printf(" ");
        }
        for (int k = i;k <= c;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int pattern7() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = i;j < r;j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 1;i <= r;i++) {
        for (int j = 1;j < i;j++) {
            printf(" ");
        }
        for (int k = i;k <= c;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int pattern8() {
    int r = 5, c = 5;
    for (int i = 1;i <= r;i++) {
        for (int j = i;j < r;j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int j = 1;j < i;j++) {
            printf("*");
        }


        printf("\n");
    }

    return 0;
}
int main() {
    pattern1();
    printf("\n");
    pattern2();
    printf("\n");
    pattern3();
    printf("\n");
    pattern4();
    printf("\n");
    pattern5();
    printf("\n");
    pattern6();
    printf("\n");
    pattern7();
    printf("\n");
    pattern8();






}