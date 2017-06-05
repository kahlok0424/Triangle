#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_valid_Triangle(void)

{

  UnityAssertEqualString((const char*)(("valid")), (const char*)((validity_of_triangle(5,5,5))), (

 ((void *)0)

 ), (UNITY_UINT)(14));

}



void test_not_valid_Triangle(void)

{

  UnityAssertEqualString((const char*)(("invalid")), (const char*)((validity_of_triangle(1,2,10))), (

 ((void *)0)

 ), (UNITY_UINT)(19));

}



void test_triangle_type_acute(void)

{

  UnityAssertEqualString((const char*)(("acute")), (const char*)((getTriangle_type(1,1,1))), (

 ((void *)0)

 ), (UNITY_UINT)(24));

}



void test_triangle_type_obtuse(void)

{

  UnityAssertEqualString((const char*)(("obtuse")), (const char*)((getTriangle_type(10,10,15))), (

 ((void *)0)

 ), (UNITY_UINT)(29));

}



void test_triangle_type_rigntAngle(void)

{

  UnityAssertEqualString((const char*)(("rightAngle")), (const char*)((getTriangle_type(3,4,5))), (

 ((void *)0)

 ), (UNITY_UINT)(34));

}
