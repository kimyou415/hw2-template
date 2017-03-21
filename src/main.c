#include <unistd.h>
#include <stdio.h>
#include <memory.h>
#include "shell.h"
#include "Tests/test.h"

int main(int argc, char *argv[]) {

    if(argc>1 && (strncmp(argv[1], "TESTING", 7)==0))  isTesting(1);
    else    isTesting(0);
    return shell(argc,argv);
    return 0;
}