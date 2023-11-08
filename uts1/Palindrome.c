#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right] 
            && (str[left] !=' ' || str[right] !=' ')) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // It is a palindrome
}

int main() {
    char str1[] = "racecar";
    char str2[] = "nasi";
    char str3[] = "kasur ini rusak";

    if (isPalindrome(str1)) {
        printf("String 1 palindrome.\n");
    } else {
        printf("String 1 tidak palindrome.\n");
    }

    if (isPalindrome(str2)) {
        printf("String 2 palindrome.\n");
    } else {
        printf("String 2 tidak palindrome.\n");
    }

    if (isPalindrome(str3)) {
        printf("String 3 palindrome.\n");
    } else {
        printf("String 3 tidak palindrome.\n");
    }

    return 0;
}
