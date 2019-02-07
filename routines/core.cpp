//
//  core.cpp
//  
//
//  Created by Pedro Vicente on 03/11/2018.
//

#include "core.hpp"

#include "routines.h"

#define PI 3.14159265
using namespace std;

#define NUM_THREADS 5

/*
* Math Functions
*
*/
void *PrintHello(void *threadid) {
    long tid;
    tid = (long)threadid;
    cout << "Hello World! Thread ID, " << tid << endl;
    pthread_exit(NULL);
}


double absolute()
{
    double x;
    double abs(double x);
    float abs(float x);
    long double abs(long double x);
    double abs(T x); // For integral type
    
    

}


int tan ()
{
    double param, result;
    param =  cin.get();//45.0;
    result = tan ( param * PI / 180.0 );
    printf ("The tangent of %f degrees is %f.\n", param, result );
    return 0;
}

int acos()
{
    double param, result;
    param = cin.get();//0.5;
    result = acos (param) * 180.0 / PI;
    printf ("The arc cosine of %f is %f degrees.\n", param, result);
    return 0;
}

/*
 * Core Function
 *
 *
 */
int core()
{
    pthread_t threads[NUM_THREADS];
    int rc;
    int i;
    
    for( i = 0; i < NUM_THREADS; i++ ) {
        cout << "main() : creating thread, " << i << endl;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
        
        if (rc) {
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
    }
    
    return absolute;
    return tan;
    return acos;
    pthread_exit(NULL);
    
}
