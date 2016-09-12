//
//  Lab01A.c
//  Systems_programming
//
//  Created by Brashad Hasley on 9/12/16.
//  Copyright © 2016 Outofit_. All rights reserved.
//

#include <stdio.h>


void Checkline(int argc, char **argv);

int main(int argc,  char **argv)
{
    Checkline(argc, argv);
    
    return 0;
}

void Checkline(int argc, char **argv){
    int i =0;
    
    printf("command  : %s\n", &argv[i][2]);
    for (i = 1; i < argc - 1;i++){
        printf("option %d : %s\n", i, argv[i]);
    }
    printf("filename : %s\n", argv[argc-1]);
}