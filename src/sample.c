#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 100

int
main (void)
{
  printf ("Hello, world!\n");

  char myStrings[][10] = { "analysis_work", "bin_work", "config_work", "couple_work", "forcing_work", "input_work", "log_work", "mon_work", "outdata_work", "restart_work", "scripts_work", "unknown_work", "viz_work", "work_work"};

  size_t i = 0;
  for( i = 0; i < sizeof(myStrings) / sizeof(myStrings[0]); i++)
  {
    FILE * fPtr;
    fPtr = fopen(myStrings[i], "w");
    if(fPtr == NULL)
    {
      printf("Unable to create file.\n");
      exit(EXIT_FAILURE);
    }
  }
  return 0;
}

