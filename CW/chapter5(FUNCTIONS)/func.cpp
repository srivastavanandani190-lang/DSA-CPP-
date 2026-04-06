#include<iostream>
using namespace std;
void greet(){
    cout<<"HELLO,NANDANI"<<"\n";
    //return;//function ends here.
    cout<<"WELCOME TO CODING WORLD"<<"\n";
}
void INDIA(){
    cout<<"WORK AND CONTRIBUTE TO YOUR COUNTRY"<<"\n";
    return;//in case of void you may or maynot mention return.
    greet();//function in function.
}

int main(){
//functions->1.To tackle repetition.
//2.certain piece of code using numbers of time.
//DRY(do not repeat yourself).
//always main function is excuted first.
//you can make number of functions.(unlimited)

greet();//function call.
cout<<"KEEP EXPLORING"<<"\n";
greet();//function call.
INDIA();

    return 0;
}
/* main()can't be called by anyother function.(just once)
return;(end of function similar to that of break used in loop).
(int,float,bool,void) before any name of function is mainly indicating return type.
*/