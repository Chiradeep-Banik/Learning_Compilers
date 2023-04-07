#include<stdio.h>

static void readFileUsingfgetc(char* filename){
    FILE* fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error!");
    }

    char ch;
    while ((ch=fgetc(fp)) != EOF){
        printf("%c",ch);
    }printf("\n\n");

    fclose(fp);
}

static void readFileUsingfgets(char* filename){
    FILE* fp = fopen(filename,"r");
    if(fp == NULL){
        printf("Error!");
    }

    char buffer[500];
    while (fgets(buffer,500,fp) != NULL){
        printf("%s",buffer);
    }printf("\n\n");

    fclose(fp);
}

static void appendToFile(char* filename,char* text){

    FILE* fp3 = fopen("test.txt","a");

    fprintf(fp3,text);

    fclose(fp3);
}

static void writeToFile(char* filename,char* text){
    FILE* fp = fopen(filename,"w");

    fprintf(fp,text);

    fclose(fp);
}

