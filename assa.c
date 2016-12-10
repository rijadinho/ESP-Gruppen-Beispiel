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
// Latest Changes: December 10, 2016
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

struct _Bintree_ *root = 0;






void interactivePrompt() 
{   
  // declares array of 100 characters.
  static char input[100];

  printf ("Press Ctrl+c to Exit!\n");
  while(1)
  { 
    //Input (stdin) and output (stdout) declared in <stdio.h> library
    fputs("esp>", stdout);
    fgets(input,100,stdin);

    //"strcmp" from <string.h> library compares input and '\n'.
    //If they are not equal to Null ( !=0), breaks !
    if( strcmp( input, "\n" ) != 0 )
      break;
  }
}


typedef struct _Relations_
{
  char *relative_ ;
}Relation;


int main()
{
  interactivePrompt();
  
  //Relation for "mother"
  Relation relation1;
  relation1.relative_ = (char*)malloc(10*sizeof(char));
  relation1.relative_ = "mother";

  //Relation for "father"
  Relation relation2;
  relation2.relative_ = (char*)malloc(10*sizeof(char));
  relation2.relative_ = "father";

  //Relation for "mgm" (mother-grandmother)
  Relation relation3;
  relation3.relative_ = (char*)malloc(10*sizeof(char));
  relation3.relative_ = "mgm";

  //Relation for "fgm" (father-grandmother)
  Relation relation4;
  relation4.relative_ = (char*)malloc(10*sizeof(char));
  relation4.relative_ = "fgm";

  //Relation for "mgf" (mother-grandfather)
  Relation relation5;
  relation5.relative_ = (char*)malloc(10*sizeof(char));
  relation5.relative_ = "mgf";

  //Relation for "fgf" (father-grandfather)
  Relation relation6;
  relation6.relative_ = (char*)malloc(10*sizeof(char));
  relation.6relative_ = "fgf";


  FILE *fp;
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
  fclose(fp);
  return 0;
}
