//multiple inheritance
#include<iostream>
using namespace std;

class A{
	public:
		void Afunc() {
			cout<<"Fucn A"<<endl;
		}
};
class B{
	public:
		void Bfunc(){
			cout<<"Func B"<<endl;
		}
};
class C : public A, public B{
public:
};

int main(){
	C c;
	c.Afunc();
	c.Bfunc();
	
	
	return 0;
}
