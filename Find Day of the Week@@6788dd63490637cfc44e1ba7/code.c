#include <stdio.h>

#include <stdio.h>

int main() {
  int dayNumber;

  // Prompt the user to enter a number for the day of the week
  printf("Enter a number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ");
  scanf("%d", &dayNumber);

  // Use a switch statement to determine the day of the week
  switch (dayNumber) {
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thursday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 7:
      printf("Sunday\n");
      break;
    default:
      printf("Invalid\n");
      break;
  }

  return 0;
}

