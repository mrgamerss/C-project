#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    float Math;
    float English;
    float Science;
    char name[50] = "";
    float average;

    printf(".........running the program\n");
    sleep(1.1);
    printf("....loading the calculator\n");
    sleep(1.3);
    printf("******************************************************************************\n");
    sleep(1.6);
    printf("***********************Welcome to a Grade calculator**************************\n");
    sleep(1.8);
    printf("******************************************************************************\n");

    sleep(2);
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    sleep(0.5);

    printf("Enter your marks for three subjects:\n");
    printf("Marks for Math: ");
    scanf("%f", &Math);
    sleep(0.6);
    
    printf("Marks for English: ");
    scanf("%f", &English);
    sleep(0.8);
    
    printf("Marks for Science: ");
    scanf("%f", &Science);
    sleep(1.5);
    printf("*********************************************\n");
    sleep(1);

    printf("-----------------------------------------------\n");
    if (Math < 0 || Math > 100 || English < 0 || English > 100 || Science < 0 || Science > 100) {
    printf("Marks above 100 or below 0 is not allowed\n");
    exit(EXIT_FAILURE);
}   
    printf("-----------------------------------------------\n");

    sleep(2);
    printf("****************************************************\n");
    printf("Your name is %s\n", name);
    printf("This is how you performed in your subjects:\n \t");
    printf("Math %.2f%%\n \t", Math);
    printf("English %.2f%%\n \t", English);
    printf("Science %.2f%%\n", Science);
    printf("****************************************************\n");
    sleep(2);
    printf("Your grades are been processed...\n");
    sleep(2.5);
    printf("*********************************************************\n");
    if (Math >= 90) {
        printf("Math scored an A plain\n");
        if (Math >= 80 && Math <= 89) {
            printf("Math scored an A-\n");
            if (Math >= 70 && Math <= 79) {
                printf("Math scored a B+\n");
                if (Math >= 60 && Math <= 80) {
                    printf("Math scored B plain\n");
                    if (Math >= 50 && Math <= 59) {
                        printf("Math scored B-\n");
                        if (Math >= 45 && Math <= 49) {
                            printf("Math scored a C+\n");
                            if (Math >= 40 && Math <= 44) {
                                printf("Math scored a C plain\n");
                                if (Math >= 35 && Math <= 39) {
                                    printf("Math scored a C\n");
                                    if (Math >= 30 && Math <= 34) {
                                        printf("Math scored a D\n");
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }
    }
    else {
        printf("Unable to record your grade for Math\n");
    }


    if (English >= 90) {
        printf("English scored an A plain\n");
        if (English >= 80 && English <= 89) {
            printf("English scored an A-\n");
            if (English >= 70 && English <= 79) {
                printf("English scored a B+\n");
                if (English >= 60 && English <= 80) {
                    printf("English scored B plain\n");
                    if (English >= 50 && English <= 59) {
                        printf("English scored B-\n");
                        if (English >= 45 && English <= 49) {
                            printf("English scored a C+\n");
                            if (English >= 40 && English <= 44) {
                                printf("English scored a C plain\n");
                                if (English >= 35 && English <= 39) {
                                    printf("English scored a C\n");
                                    if (English >= 30 && English <= 34) {
                                        printf("English scored a D\n");
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }
    }
    else {
        printf("Unable to record your grade English\n");
    }

    if (Science >= 90) {
        printf("Science scored an A plain\n");
        if (Science >= 80 && Science <= 89) {
            printf("Science scored an A-\n");
            if (Science >= 70 && Science <= 79) {
                printf("Science scored a B+\n");
                if (Science >= 60 && Science <= 80) {
                    printf("Science scored B plain\n");
                    if (Science >= 50 && Science <= 59) {
                        printf("Science scored B-\n");
                        if (Science >= 45 && Science <= 49) {
                            printf("Science scored a C+\n");
                            if (Science >= 40 && Science <= 44) {
                                printf("Science scored a C plain\n");
                                if (Science >= 35 && Science <= 39) {
                                    printf("Science scored a C\n");
                                    if (Science >= 30 && Science <= 34) {
                                        printf("Science scored a D\n");
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }
    }
    else {
        printf("Unable to record your grade Science\n");
    }
    sleep(1.5);
    printf("*********************************************************\n");

    average = Math + English + Science / 3;
    sleep(2.5);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    sleep(3.5);
    printf("Your average marks is %.2f out of 300\n", average);
    sleep(1.5);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    sleep(2.5);
    printf("Closing the program.....");
    return 0;
}