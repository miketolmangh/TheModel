/*
 * God.cpp
 *
 *  Created on: Jul 5, 2023
 *      Author: mike
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "GLOBALS.HPP"
#include "God.hpp"
#include "World.hpp"

void God::modellog(char* msg, bool newline, bool timestamp)
{
    char op[300];
    char* nowchar;
    time_t nowtime_t;

    memset(op, 0, 300);
   
    FILE* of = fopen("OUTPUT", "a");

    if (timestamp)
    {
         nowtime_t = time(NULL);
         nowchar =  asctime(localtime(&nowtime_t));
         strcat(op, nowchar);
         op[24] = 0;
         strcat(op, " ");
    }
    strcat(op, msg);
    int c = fprintf(of, "%s", op);
    printf("%s", op);
    fflush(stdout);
    if (newline)
    {
        fprintf(of, "\n");
        printf("\n");
        fflush(stdout);
    }

    c = fclose(of);

}

God::God()
{
}
