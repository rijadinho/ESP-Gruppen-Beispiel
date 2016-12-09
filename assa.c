//-----------------------------------------------------------------------------
// assa.c
//
// Gruppen Beispiel
//
// Group: 2 - Hasan Durmaz
//
// Authors: Rijad Kovacevic, 1231648
// Authors: Armin Pasalic, ????
//
// Latest Changes: December, 2016
//-----------------------------------------------------------------------------
//
#include<stdio.h>
#include<string.h>

struct _Bintree_
{
  char data_[10];
  struct _Bintree_ *left_;
  struct _Bintree_ *right_;  
};

//// declares a global array of 50 characters.
static char input[100];

int main()
{
   
  printf("Press Ctrl+c to Exit!\n");
  while(1)
  {
    //Input (stdin) and output (stdout) declared in <stdio.h> library
    fputs("esp>", stdout);
    fgets(input,100,stdin);

    if( strcmp( input, "\n" ) != 0 )
      break;
  }
 
  /*FILE *fp;
  int c;

  fp = fopen ("black_fam-tree.dot", "r");
  if (fp == NULL)
  {
    return -1;
  }

  printf("Reading from file:\n");
  while((c = fgetc (fp)) != EOF)
  {
    printf("%c",c);
  }
  printf("File parsing successful...\n");
  fclose(fp);*/


  return 0;
}
