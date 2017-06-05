#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_valid_Triangle(void)
{
  TEST_ASSERT_EQUAL_STRING("valid",validity_of_triangle(5,5,5) );
}

void test_not_valid_Triangle(void)
{
  TEST_ASSERT_EQUAL_STRING("invalid",validity_of_triangle(1,2,10) );
}

void test_triangle_type_acute(void)
{ 
  TEST_ASSERT_EQUAL_STRING("acute", getTriangle_type(1,1,1));
}

void test_triangle_type_obtuse(void)
{
  TEST_ASSERT_EQUAL_STRING("obtuse",getTriangle_type(10,10,15));
}

void test_triangle_type_rigntAngle(void)
{
  TEST_ASSERT_EQUAL_STRING("rightAngle", getTriangle_type(3,4,5));  
}






