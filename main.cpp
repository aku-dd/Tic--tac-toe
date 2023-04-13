#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;



  int a = 1;
  int b = 2;

  int fib() {
  int c = a+b;
  if(c<=0) c = 1;
  a = b;
  b = c;
  return c;
  }

void game (int x) {
    if (x<0) x = -x;
    x%=10;
    if (x==0) return;
    for (int y = 0; y<x; y++) fib ();
}
int z () {
return fib()%3;
}
   int main()
   try
   {
       cout << "vvedite 4islo";
       int x = 0;
       cin >> x;
       generate (x);
       int player = 0;
       int pc = 0;
       int ni4ya = 0;
       cout << "rock(r)/paper(p)/scissors(s)";
       string weapon;
       while (cin >> weapon) {
            int ves = 0;
        if (weapon=="rock" || weapon=="r") {
             ves = 0;
            weapon = "rock";
        }
        else if (weapon=="paper" || weapon=="p") {
            ves = 1;
            weapon = "paper";

        }
           else if (weapon=="scissors" || weapon=="s"){
            ves = 2;
            weapon = "scissors";
           }
           else error ("error operator", weapon);

            int g = z ();
           string comp;
           switch (g)
           {
           case 0:
               g = "rock";
           brake;
           case 1:
            g = "paper";
            brake;
           case 2:
            g = "scissors";
            brake;

           }
           if (weapon==g){
            cout << "Ni4ya";
            ++ni4ya;

           }
        else (g==0 && weapon = 1) {
            cout  << "You win";
            ++player;
            }
        else if (g==1 && weapon = 2){
            cout << "You lose";
        ++pc;
        }
        else () ++pc;


       }
       cout << "Try again?";}
       catch (runtime_error e){
           cout << e.what();
           keep_window_open("~");
   }



