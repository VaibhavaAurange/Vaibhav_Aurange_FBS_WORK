//Mendrive program with Type 3
#include<stdio.h>
void isMenDrivePro(int);//declartion
void main()
{
	int num;
    printf("Enter a number: ");
    scanf("%d", &num);
	isMenDrivePro(num);//call
	
}
void isMenDrivePro(int num)//defination
{
    int no, option;
    while (1) {
        printf("\nMenu:\n");
        printf("1. To check num is Even or Odd\n");
        printf("2. To check num is Prime or Not\n");
        printf("3. To check num is Palindrome or Not\n");
        printf("4. To check num is Positive, Negative or Zero\n");
        printf("5. To Reverse the Number\n");
        printf("6. To Find Sum of Digits\n");
        printf("0. Exit\n");

        printf("Enter your option: ");
        scanf("%d", &option);

//code for Even odd
        if (option == 1) 
		{
            if (num % 2 == 0) {
                printf("%d is Even.\n", num);
            } else {
                printf("%d is Odd.\n", num);
            }
        } 
//code for prime no
		else 
		{
            if (option == 2) {
                if (num <= 1) {
                    printf("%d is not a Prime number.\n", num);
                } else {
                    int i = 2, flag = 0;
                    while (i <= num / 2) {
                        if (num % i == 0) {
                            flag = 1;
                            break;
                        }
                        i++;
                    }
                    if (flag == 0) {
                        printf("%d is a Prime number.\n", num);
                    } else {
                        printf("%d is not a Prime number.\n", num);
                    }
                }
            }
//code for pallindrome
			 else 
			 {
                if (option == 3) {
                    int temp = num, digit, reverse = 0;
                    while (temp != 0) {
                        digit = temp % 10;
                        reverse = reverse * 10 + digit;
                        temp = temp / 10;
                    }
                    if (reverse == num) {
                        printf("%d is a Palindrome.\n", num);
                    } else {
                        printf("%d is not a Palindrome.\n", num);
                    }
                }
// code for positive negative
				 else 
				 {
                    if (option == 4) {
                        if (num > 0) {
                            printf("%d is Positive.\n", num);
                        } else {
                            if (num < 0) {
                                printf("%d is Negative.\n", num);
                            } else {
                                printf("Number is Zero.\n");
                            }
                        }
                    }
//code for Reverse	
					 else {
                        if (option == 5) {
                            int temp = num, digit, reverse = 0;
                            while (temp != 0) {
                                digit = temp % 10;
                                reverse = reverse * 10 + digit;
                                temp = temp / 10;
                            }
                            printf("Reverse of %d is %d\n", num, reverse);
                        } 
//code for sum of digit 
						else {
                            if (option == 6) {
                                int temp = num, digit, sum = 0;
                                if (temp < 0) {
                                    temp = -temp;
                                }
                                while (temp != 0) {
                                    digit = temp % 10;
                                    sum = sum+digit;
                                    temp = temp / 10;
                                }
                                printf("Sum of digits of %d is %d\n", num, sum);
                            } else {
                                if (option == 0) {
                                    printf("Exiting program.\n");
                                    break;
                                } else {
                                    printf("Invalid choice. Try again.\n");
                                }
                            }
                        }
                    }
                }
            }
    	}   
	}
}
