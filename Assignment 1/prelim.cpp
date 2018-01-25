	
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;


int main() {

    char hostname[1024];
    gethostname(hostname, 1024);

    puts(hostname);

    return 0;
}