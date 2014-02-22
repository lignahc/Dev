#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
  int fd;
  fd = open("fdly.txt", O_RDONLY);
  
  if(fd < 0)
  {
    perror("file open error:");
    return 1;
  }

}

