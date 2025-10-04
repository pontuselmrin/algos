#include <stdio.h>

#include "lib.h"

int main(int argc, char const* argv[])
{
  (void)argc;
  (void)argv;

  printf("%s - Version %s\n", algos_get_name(), algos_get_version());
  printf("Algorithm implementations library\n");
  printf("Ready to implement.\n");

  return 0;
}
