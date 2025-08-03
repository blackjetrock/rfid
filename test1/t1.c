#include <stdio.h>
#include <string.h>

char line[300];

typedef struct _SE
{
  char *n;
  char *tag;
} SE;

SE tag[] =
  {
   {"0006117263", "William"},
   {"0006117258", "Alexander"},
  };

#define NUMTAGS (sizeof(tag)/sizeof(SE))

int main(void)
{
  while(1)
    {
      fgets(line, 200, stdin);
      printf("\n N:%s\n", line);


      for(int i=0; i<NUMTAGS; i++)
        {
          if( strncmp(line, tag[i].n, strlen(tag[i].n)) == 0 )
            {
              printf("\n%s\n", tag[i].tag);
            }
        }
    }
}
