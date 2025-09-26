#include <stdio.h>

int main()
{
    int n, i;
    float grades[100], sum = 0.0, average;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Input grades
    for (i = 0; i < n; i++)
    {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%f", &grades[i]);
        sum += grades[i]; // Add to sum
    }

    // Calculate average
    average = sum / n;

    printf("\nAverage Grade = %.2f\n", average);

    return 0;
}