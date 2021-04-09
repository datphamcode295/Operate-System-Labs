#include <pthread.h>
 #include <stdio.h>

 int sum; /* t h i s data i s shared by the thread ( s ) */
 void *runner (void *param ) ; /* threads c a l l t h i s func t ion */

 int main(int argc , char *argv [ ] )
 {
 pthread_t tid ; /* the thread i d e n t if i e r */
 pthread_attr_t attr ; /* se t o f thread a t t r i b u t e s */

 if ( argc != 2) {
 fprintf ( stderr , "usage : ␣a . out␣<in tege r ␣value>\n" ) ;
 return -1;
 }

 if (atoi(argv[1]) < 0) {
 fprintf ( stderr , "%d␣must␣be␣>=␣0\n" , atoi ( argv [ 1 ] ) ) ;
 return -1;
 }
/* ge t the d e f a ul t a t t r i b u t e s */
 pthread_attr_init(&attr) ;
 /* crea te the thread */
 pthread_create(&tid , &attr , runner , argv [ 1 ] ) ;
 /* wait for the thread to e x i t */
 pthread_join ( tid ,NULL) ;

 printf ("sum␣=␣%d\n" ,sum ) ;
 }

 /* The thread w i l l beg in con trol in t h i s func t ion */
void *runner (void *param)
{
 int i , upper = atoi (param ) ;
 sum = 0;
 for ( i = 1; i <= upper ; i++)
 sum += i ;
 pthread_exit(0);
 }
