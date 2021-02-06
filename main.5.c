#include <stdio.h>

int main()
{
    char ch;
    /* Enter any alphabet */
    printf("enter any alphabet::");
    scanf("%c", &ch);
    /*switch value of ch*/
    switch(ch)
    {
        case 'a':
        printf("vowel");
        break;
        case 'e':
        printf("vowel");
        break;
        case 'i':
        printf("vowel");
        break;
        case 'o':
        printf("vowel");
        break;
        case 'u':
        printf("vowel");
        break;
        case 'A':
        printf("vowel");
        break;
        case 'E':
        printf("vowel");
        break;
        case 'I':
        printf("vowel");
        break;
        case 'O':
        printf("vowel");
        break;
        case 'U':
        printf("vowel");
        break;
        deafult:
            printf("consonant");
            break;

    }
    return 0;
}
