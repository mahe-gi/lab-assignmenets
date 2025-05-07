#include <stdio.h>
void findareaandcircumferenceofcircle()
{
    float radius = 0;
    float PI = 3.14;
    printf("ENTER RADIUS OF CIRCLE : ");
    scanf("%f", &radius);
    printf("area = %.2f\n", PI * radius * radius);
    printf("circumference = %.2f\n", 2 * PI * radius);
}

int main()
{
    findareaandcircumferenceofcircle();
}
