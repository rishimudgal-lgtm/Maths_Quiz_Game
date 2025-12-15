#include<stdio.h>
#include<ctype.h>

#define TOTAL_QUESTIONS 10

struct Question {
    char question[1000];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char correctOption;
};

void showInstructions() {
    printf("\n-------------------------------------------");
    printf("\n MATHEMATICS QUIZ - INSTRUCTIONS AND RULES\n");
    printf("\n-------------------------------------------\n");
    printf("1. This quiz consists of multiple-choice maths questions.\n");
    printf("2. Questions are based on Arithmetic, Algebra, Number System and Logical Reasoning.\n");
    printf("3. Each question has four options: A, B, C and D.\n");
    printf("4. Enter only one option letter(A,B,C, or D) as your answer.\n");
    printf("5. Each question carries 4 marks.\n");
    printf("6. +4 marks will be awarded for each correct answer.\n");
    printf("7. -1 marks will be given for each incorrect answer.\n");
    printf("8. 0 marks will be given for all unattempted questions.(Enter 'O' in that case.)\n");
    printf("9. Once an answer is submitted, it cannot be changed.\n");
    printf("10. The quiz will automatically proceed to the next question after your response.\n");
    printf("11. Any invalid input(other than A/B/C/D/O) will be considered wrong.\n");
    printf("12. Answers are not case sensitive (A = a).\n");
    printf("13. Your final score will be displayed at the end of the quiz.\n");
    printf("-----------------------------------------\n");
}
void startQuiz() {
    struct Question q[TOTAL_QUESTIONS] = {
        {
            "Ques 1) A triangle has one side equal to 12 and other equals to 5, find its perimeter.",
            "A) 13",
            "B) 26",
            "C) 30",
            "D) 34",
            'C'
        },
        {
            "Ques 2) What was the mean score on the quiz if 2 students scored 1, 6 students scored 2, 7 students scored 3, and 5 students scored 4?",
            "A) 2.75",
            "B) 2.50",
            "C) 2.40",
            "D) 3.00",
            'A'
        },
        {
            "Ques 3) If 1 = 3, 2 = 3, 3 = 5, 4 = 4, 5 = 4, then 6 equals to?",
            "A) 6",
            "B) 4",
            "C) 3",
            "D) 7",
            'C'
        },
        {
            "Ques 4) There are 49 dogs registered for a dog show. There are 35 more small dogs than large dogs. How many large dogs have registered to compete?",
            "A) 14",
            "B) 7",
            "C) 42",
            "D) 35",
            'B'
        },
        {
            "Ques 5) If a shirt costs 1200 Rs. and is on sale for 20% off, what is the sale price?",
            "A) 1000",
            "B) 1080",
            "C) 240",
            "D) 960",
            'D'
        },
        {
            "Ques 6) What is the year next to 1981 in roman numerals?",
            "A) MCMXXXII",
            "B) MCMLXXXII",
            "C) MCMLXXIII",
            "D) MCMMXLVII",
            'B'
        },
        {
            "Ques 7) A girl went for a five-hour walk. Her average speed was between 3 km/h and 4 km/h. Which of the following could be the distance she walked?",
            "A) 12 km",
            "B) 14 km",
            "C) 19 km",
            "D) 24 km",
            'C'
        },
        {
            "Ques 8) What is the value of the expression: 20 - [3 x (6 + 22) / 4]?",
            "A) 1",
            "B) 4",
            "C) 24",
            "D) -1",
            'D'
        },
        {
            "Ques 9) What is the value of the expression: (2^3)^2 + 5^2",
            "A) 89",
            "B) 57",
            "C) 61",
            "D) 129",
            'A'
        },
        {
            "Ques 10) In a right-angled triangle, the side opposite angle 0 is 3 units, and the hypotenuse is 5 units. What is the value of sin(0)?",
            "A) 4/5",
            "B) 3/5",
            "C) 3/4",
            "D) 5/3",
            'B'
        },
    };
    int score = 0;
    char answer;

    printf("Here comes the first question!\n");
    printf("-------------------------------\n");

    for(int i = 0; i < TOTAL_QUESTIONS; i++) {
        printf("%s\n", q[i].question);
        printf("%s\n", q[i].optionA);
        printf("%s\n", q[i].optionB);
        printf("%s\n", q[i].optionC);
        printf("%s\n", q[i].optionD);
        printf("Your answer : ");
        scanf(" %c", &answer);

        answer = toupper(answer);

        if(answer == 'O') {
            score += 0;
        } else if (answer == q[i].correctOption) {
            score += 4;
        } else if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            score += -1;
        } else {
            score += -1;
        }
    }
    printf("\n =================================== \n");
    printf("Quiz Completed\n");
    printf("Your final score is : %d out of 40\n", score);
    if(score >= 30) {
        printf("Excellent performance!\n");
    } else if(score >= 15) {
        printf("Good attempt!\n");
    } else {
        printf("Needs improvement.\n");
    }
    printf(" =================================== \n");
}
int main() {
    int choice;
    while(1) {
        printf("\n======= MATHS QUIZ MENU =======\n");
        printf("1. Start Quiz\n");
        printf("2. Instructions\n");
        printf("3. Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        if(choice == 1) {
            startQuiz();
        } else if (choice == 2) {
            showInstructions();
        } else if(choice == 3) {
            printf("\nThank you for playing!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        } 
    }
    return 0;
}