//
//  main.c
//  string_reverse
//
//  Created by HyperLee on 2022/2/17.
//

#include <stdio.h>
#include "stdlib.h"
void reverse(char str[]);

int main(int argc, const char * argv[]) {

    char str[50];
    printf("input string:");
    //gets(str);
    fgets(str, (sizeof str / sizeof str[0]), stdin);
    reverse(str);
    
    return 0;
}

void reverse(char str[]){
    int i = 0, j = 0;
    while(str[i] !='\0')
    {
        i++;
    }
    printf("reverse: ");
    for(j = i - 1; j >=0; j--)
    {
        printf("%c",str[j]);
        
    }
    printf("\n");
}
