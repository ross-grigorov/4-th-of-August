#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd = open("test_binary", O_WRONLY | O_TRUNC);
    printf("new_fd: %d\n", fd);
    if(fd == -1)
    {
        perror("Could not open file\n");
    }
    int arr[] = {11, 12, 13, 14};
    int written_count;
    written_count = write(1, arr, sizeof(int)*4);
    if(written_count != sizeof(int)*4)
    {
        write(2, "Could not write to file!\n", 26);
    }
    return 0;
}
