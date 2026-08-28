#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// String Functions
void itoa(int n, char s[]);
void strcat(char s[], char t[]);
int strcmp(char *s, char *t);
void strcpy(char *s, char *t);
int strlen(char *s);
void reverse(char s[], int low, int high);

char *strncpy(char *s, char *t, int n);
char *strncat(char *s, char *t, int n);

// Storage Functions
char *alloc(int n);
void afree(char *p);

// Input converters
int getfloat(float *pn);
int getint(int *pn);

#endif
