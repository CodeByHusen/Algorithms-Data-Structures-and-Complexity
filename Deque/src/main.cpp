#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <deque>



void push_front(int x);   // head
int pop_front();          // head
void push_back(int x);    // tail
int pop_back();           // tail

int empty(); //returns 1 for true and 0 for false
int full(); // returns 1 for true and 0 for false




int main()
{
    std::deque<int> d;
    char line[256];


    while( fgets(line, sizeof(line), stdin)>0 ) {
        char* operation = strtok(line, " \n");

        if( strcmp(operation,"push_front")==0 ) {
            char *number = strtok(NULL, " \n");
            int x = atoi(number);
            d.push_front(x);
        }

        if( strcmp(operation,"push_back")==0 ) {
            char *number = strtok(NULL, " \n");
            int x = atoi(number);
            d.push_back(x);
        }
        //... // die restlichen Operationen hier ergänzen!

        if( strcmp(operation,"pop_front")==0 ) {
            int x = d.front();
            d.pop_front();

            printf("%d\n",x);
        }

        if( strcmp(operation,"pop_back")==0 ) {
            int x = d.back();
            d.pop_back();

            printf("%d\n",x);
        }

        if( strcmp(operation,"end")==0 ) {
            break;
        }
    }

    return 0;
}
