
#include "utst.h"

void sort( int* x_ptr, int* y_ptr )
{
  if ( (*y_ptr) < (*x_ptr) ) {
    int temp = *x_ptr;
    *x_ptr   = *y_ptr;
    *y_ptr   = temp;
  }
}

int main( void )
{
  int a = 20;
  int b = 9;
  sort( &a, &b );
  UTST_ASSERT_INT_EQ( a, 9 );
  UTST_ASSERT_INT_EQ( b, 20 );
  int c = 3;
  int d = 2;
  sort( &c, &d );
  UTST_ASSERT_INT_EQ( c, 2 );
  UTST_ASSERT_INT_EQ( d, 3 )
  return 0;
}
