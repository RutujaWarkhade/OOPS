#include<iostream>
using namespace std;
class complex{
	public:
	int real;
	int imag;
	public:
	complex()
	{
		real=0;
		imag=0;
	}
	complex(complex&obj1, complex&obj2)
	{
		real = obj1.real;
		imag = obj2.imag;
	}

	void enter()
	{
		cout<<"enter real part = "<<endl;
		cin>>real;
		cout<<"enter imag pary = "<<endl;
		cin>>imag;
	}

	void display()
	{
		cout<<real<<"+"<<imag<<"i"<<endl;
	}

	complex operator+(complex&x)
	{
		complex temp;
		temp.real = real+x.real;
		temp.imag = imag+x.imag;
		return temp;
	}

	complex operator-(complex&x)
	{
		complex temp;
		temp.real = real-x.real;
		temp.imag = imag-x.imag;
		return temp;
	}

	complex operator*(complex&x)
	{
		complex temp;
		temp.real = (real*x.real-imag*x.imag);
		temp.imag = (real*x.imag+imag*x.real);
		return temp;
	}

	complex operator/(complex&x)
	{
		int denominator = x.real*x.real + x.imag*x.imag;
		if(denominator==0)
		{
			cout<<"not possible"<<endl;
		}
		else
		{
		complex temp;
		temp.real = (real*x.real+imag*x.imag)/denominator;
		temp.imag = (imag*x.real-real*x.imag)/denominator;
		return temp;
		}
		
	}
};
int main()
{
	complex obj1, obj2, result;
	int ch, t;
	do{
		cout<<"1.add\n2.sub\n3.mul\n4.div\nenter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			obj1.enter();
			obj2.enter();
			result = obj1+obj2;
			result.display();
			break;
			case 2:
			obj1.enter();
			obj2.enter();
			result = obj1-obj2;
			result.display();
			break;
			case 3:
			obj1.enter();
			obj2.enter();
			result = obj1*obj2;
			result.display();
			break;
			case 4:
			obj1.enter();
			obj2.enter();
			result = obj1/obj2;
			result.display();
			break;
			default:
			cout<<"wrong choice"<<endl;
			break;

		}
		cout<<"continue press 1 = "<<endl;
		cin>>t;


	}while(t==1);

	return 0;
}