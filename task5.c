#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is palindrome
int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        // Ignore non-alphanumeric characters and spaces
        if (!isalnum(str[left]))
        {
            left++;
            continue;
        }
        if (!isalnum(str[right]))
        {
            right--;
            continue;
        }

        // Compare characters (case insensitive)
        if (tolower(str[left]) != tolower(str[right]))
        {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }

    return 1; // Palindrome
}

int main()
{
    char input[200];

    printf("Enter a word or phrase: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline from fgets if present
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input))
    {
        printf("✅ \"%s\" is a Palindrome.\n", input);
    }
    else
    {
        printf("❌ \"%s\" is NOT a Palindrome.\n", input);
    }

    return 0;
}