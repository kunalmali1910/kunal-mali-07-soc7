#include <iostream>
using namespace std;

class Animal
{

public:
 
 virtual void sound()
{
     cout<<"Animal makes sound"<<endl;
}
};

class Cat : public Animal
{ 

public:

void sound()
{
       cout<<" Cat sleeps"<<endl;
}
};
int main()
{
	        Animal*ptr
	        Cat c;

                ptr=&c;
                ptr->sound():
                return 0;
};



