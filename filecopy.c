/*
 ============================================================================
 Name        : filecopy.c
 Author      : kamel
 Email		 : kamelghalgaoui7@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Thread Copy content of file to another in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>


void *filecopy(const char *filename){
	FILE *file, *filecopy;
	char ch;
	file = fopen(filename, "r");
	char filecopyname[15] = "";
	//copy filename
	strcpy(filecopyname, filename);
	strcat(filecopyname, "copy_");
	filecopy = fopen(filecopyname, "w");

   	while( ( ch = fgetc(file) ) != EOF )
     		 fputc(ch, filecopy);

	fclose(file);
	fclose(filecopy);

}

int main() {
	char filename[15];
	pthread_t thread;
	scanf("%s", filename);
	printf("%s", filename);

	pthread_create(&thread, NULL, &filecopy, filename);

	pthread_join(thread, NULL);
	return 0;
}

