#include<iostream>

using namespace std;

class parts{
	public:

		virtual wheels()=0;
		virtual color()=0;//black pure vitual function	

	
};
class truck:public parts{
	public:
			wheels()
	{
		cout<<"18 wheel "<<endl<<endl;	
	}
	    color()
    {
	    	cout<<"blue color & red flames"<<endl;
	}
	
};
class  bike:public parts{
	public:
		wheels()
	{
		cout<<"2 wheel "<<endl<<endl;	
	}
	    color()
    {
	    	cout<<"gold leafs with mateblack"<<endl;
	}
	
};
class Auto:public parts{
	public:
		wheels()
	{
		cout<<"3 wheel "<<endl<<endl;	
	}
	    color()
    {
	    	cout<<"black & yellow"<<endl;
	}
	
};


main()
{
	truck obj;
	obj.color();
	obj.wheels();
	
    bike obj1;
	obj1.color();
	obj1.wheels();
	
	Auto obj2;
	obj2.color();
	obj2.wheels();
}
