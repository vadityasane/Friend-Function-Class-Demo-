#include <iostream>

using namespace std;

class you ;

class My
{
private: int a;
protected:  int b;
public:  int c;
friend you;
};

class you
{
   public:
       My m;
       void fun()
       {
           m.a = 20;
           m.b = 52;
           m.c = 15;
       }
};

int main()
{

    return 0;
}
