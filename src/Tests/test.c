#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

static int counter = 1;
int isTestingBit = 0;
void isTesting(int bit){
    isTestingBit = bit;
}

int read_custom(int stdin_fileno, void* buffer, int size){
    char *file;
    sleep(2);
    if(counter == 1)
        file = "F1.txt";
    else if(counter == 2)
        file = "F2.txt";
    else if(counter == 3)
        file = "F3.txt";
    else if(counter == 4)
        file = "F4.txt";
    else if(counter == 5)
        file = "F5.txt";
    else
        file = "F6.txt";

    counter++;
    if(counter > 7)
        exit(1);
    int fp = open(file, O_RDONLY);
    if(isTestingBit!=0) fp = open(file, O_RDONLY);
    else fp =stdin_fileno;
    int ret = read(fp, buffer, size);
    return ret;
}