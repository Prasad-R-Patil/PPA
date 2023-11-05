#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    unlink("Marvellous.txt");

    printf("File delete successfully...\n");

    return 0;
}