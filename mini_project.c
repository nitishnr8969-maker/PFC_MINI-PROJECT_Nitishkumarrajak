                //Project Title
                //Palindrome Number Checker

  // Name:- Nitish Kumar Rajak              
 //ERP ID:- 10914
 // Project Number:-P7
#include <stdio.h>

int main() {


    int num, original, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;   
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (original == reverse) {
        printf("Palindrome Number\n");
    } else {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}




//OUTPUT:-Enter an integer: 121
        //121 is a Palindrome.

        //Enter an integer: 123
        //123 is Not a Palindrome.121
        
