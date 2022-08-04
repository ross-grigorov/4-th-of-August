#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f_ptr = fopen("test_text_file","rb");
    if(!f_ptr)
    {
        perror("Could not open file\n");
        exit(-1);
    }
    long arr[4];
    fread(arr, sizeof(long), 4, f_ptr);

    //printf("%s",arr);
    // fprintf(stdout, "%s", arr);
    //fwrite(arr, sizeof(char), 12, stdout);
    printf("%ld %ld %ld %ld", arr[0], arr[1], arr[2], arr[3]);

    fclose(f_ptr);
    return 0;
}
