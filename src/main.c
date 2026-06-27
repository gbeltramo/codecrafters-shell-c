#include <stdio.h>
#include <stdlib.h>

#define MAX_COMMAND_LENGTH 1024

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);

  // Print prompt
  printf("$ ");

  // Get command from STDIN
  char command[MAX_COMMAND_LENGTH];
  for (size_t idx = 0; idx < MAX_COMMAND_LENGTH; idx++) {
    command[idx] = '\0';
  }
  fgets(command, sizeof(command), stdin);

  // Remove trailing newline from command
  size_t idx = 0;
  while (idx < MAX_COMMAND_LENGTH) {
    if (command[idx] == '\n') {
      command[idx] = '\0';
    }
    idx++;
  }

  printf("%s: command not found\n", command);

  return 0;
}
