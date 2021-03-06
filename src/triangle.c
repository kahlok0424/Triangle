#include "triangle.h"

char *validity_of_triangle(int a ,int b, int c){
   if( (a+b>c) && (a+c>b) && (b+c>a))
  {
  return "valid";
  }
  else{
  return "invalid";
  }
}


void determine_length(Triangle *Triangle ,int a,int b ,int c){  //This is a function to determine the longest and shortest length

  Triangle->longest = a;
  
  if(b > Triangle->longest){
  Triangle->longest = b;
  Triangle->short1 = a;
  Triangle->short2 = c;
  }
  if(c > Triangle->longest){
  Triangle->longest = c;
  Triangle->short1 = a;
  Triangle->short2 = b;
  }
  else
  {
  Triangle->short1 = b;
  Triangle->short2 = c;
  }
}
 
char *getTriangle_type(int a ,int b ,int c){
  Triangle t;
  determine_length(&t,a,b ,c);
  printf("a: %d\n",t.short1);
  printf("b: %d\n",t.short2);
  printf("c: %d\n",t.longest);

  if( (t.short1 * t.short1 ) + (t.short2 * t.short2) > (t.longest * t.longest) ){
  return "acute";
  }
  
else if( (t.short1 * t.short1 ) + (t.short2 * t.short2) < (t.longest * t.longest) ){
  return "obtuse";
}

else if( (t.short1 * t.short1 ) + (t.short2 * t.short2) == (t.longest * t.longest) ){
  return "rightAngle";
}
  else{
  return "notValid";
  }
}