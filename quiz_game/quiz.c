#include <stdio.h>
#include <string.h>

#define QUIZ_LENGTH 3

int main() {
  char QUIZ[QUIZ_LENGTH][228] = {
      "What is the greatest JRPG of all time: Chrono Trigger or "
      "Final Fantasy?",
      ("What Mass Effect character had the catch phrase: 'It had  to be me. "
       "Someone else might have gotten it wrong.'?"),
      "Who's the baddest?"};

  char ANS[QUIZ_LENGTH][32] = {"Yes", "Mordin", "Shonuff"};

  int score = 0;
  char user_ans[30];

  printf("Type your answer to the quiz question, then press ENTER.\n");

  for (int i = 0; i < QUIZ_LENGTH;
       i++) { // TODO: replace 3 with length of QUIZ/ANS
    printf("%s\n", QUIZ[i]);
    scanf("%s", user_ans); // TODO: add support for multi-word answers
    if (strcmp(user_ans, ANS[i]) == 0) {
      printf("Correct!\n");
      score++;
    } else {
      printf("That is incorrect. The answer is: \'%s\'.\n", ANS[i]);
    }
  }
  printf("Your total score is %d. ", score);
  score == QUIZ_LENGTH ? printf("You win!\n") : printf("Try again.\n");
}
