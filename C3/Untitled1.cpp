#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    char* res;

    char* _in;
    _in = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",_in);
    printf("%d\n", (int)_in[0]-'0');
    
    return 0;

}

