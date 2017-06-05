#ifndef _TRIANGLE_H
#define _TRIANGLE_H

typedef struct Triangle Triangle;

struct Triangle{
  int short1;
  int short2;
  int longest;
};

char *getTriangle_type(int a ,int b ,int c);
void determine_length(Triangle *Triangle ,int a,int b ,int c);

#endif // _TRIANGLE_H
