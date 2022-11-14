

/* break vs. continue   calculating maximum
#include <iostream>
using namespace std;
int main (){
    int a[100];
    int size;
    int y,i;
    int max;
    cout << "enter size of the array" << endl;
    cin >> size;
    cout << "please enter " << size << " numbers except 0" << endl;
    for(i=0; i<size; i++){
        cin >> y;
        if(y==0) 
            continue;
        cout << "you entered" << y << endl;
        a[i] = y;
    }
    for (i=0; i<size; i++)
        cout << a[i] << " ";
    //max = (a[0] > a[1]) ? a[0]:a[1];

    max = a[0];
    for (i=0 ; i<(size-1) ; i++){
        //if(a[i] < a[i+1])
        //    max=a[i+1];
        //else 
        //    max=a[i];
        max= a[i+1] > a[i] ? a[i+1] : a[i];
    }
    cout << "maxiumum is: " << max << endl;
    return 0; 
}
*/


/* enum class
#include <stdio.h>
enum class day:char16_t {sunday = 1, tuesday, wednesday, thursday, friday, saturday}myDay;
int main()
{
    //enum day myDay;
    myDay = day::saturday;
    printf("The day number stored in d is %d and its size is %d bytes", myDay, sizeof(myDay));
    return 0;
}
*/

/* pointer
#include <stdio.h>
int main(){
    int a;
    a = 15;
    int *p;
    p = &a;
    printf("pointer p is pointing to %d", (int)*p);
}
*/


/* pointer condition for loop
#include <stdio.h>
int main(){
    int a [10];
    int *p;
    int i;
    for (p=a, i=0; p<&a[10]; p++, i++)
        *p = i;
    for (p=a; p<&a[10]; p++){
        printf("%d ", *p);
    }

    printf("\n");
    return 0;
}
*/


/* constant pointer
#include <stdio.h>
int a = 10;
//const int a=5;
//int * const p = &a;
int *const p = &a;
//const int *q;
int main(){
    //p=&a;
    *p = 14;
    //q=&a;
    printf("%d", *p);
    return 0;
}
*/


/* average of array
#include <iostream>
#include <stdint.h>
float average(float a[], int count);
int main(){
    float c[] = {20.6, 34.5, 22.5, 0.5};
    float answer = average(c, 4);
    std::cout << "average is: " << answer << std::endl;
    return 0;
}
float average(float a[], int count){
    float sum = 0;
    for (int i=0;i<count;i++){
        sum += a[i];
    }
    return sum/count;
}
*/


/* memory allocation
#include <stdint.h>
#include <malloc.h>
#include <iostream>

int main(){
    int *p;
    p = (int*) malloc(1000*sizeof(int));
    for(int i=0;i<1000;i++)
        p[i]=i+6;
    std::cout << p[348] << std::endl;
    free(p);
    return 0;
}
*/