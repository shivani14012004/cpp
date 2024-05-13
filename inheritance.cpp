#include<iostream>
#include<string>

using namespace std;

class Father
{
protected:
	float property;

public:
	Father(float prop){
	}

void displayProperty()
{
	cout<<"Father's Property:$"<<property<<endl;
}
};
class Son:public Father
{
protected:
	float sonPorperty;
public:
	Son(float fatherProp,float sonProp){
	}

void displayProperty()
{
	Father::displayProperty();
		cout<<"Son's Property:$"<<sonProperty<<endl;
}
};

class Grandson:public Son
{
private:
	float grandsonProperty;
public:
	Grandson(float fatherProp,float sonProp,float grandsonProp)

void displayProperty()
{
	Son::displayProperty();
		cout<<"GrandSon's property:$"<<grandsonProperty<<endl;
}
};

int main()
{
	Grandson gs(1000000000.0,50000000,2000000000.0);

	gs.displayProperty();
	return 0;
}





