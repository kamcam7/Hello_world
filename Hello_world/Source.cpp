#include<iostream>
#include <string>

using namespace std;
std::string myfun()
{
	std::string mystring = "Not going to print\n";
	return mystring;
}

int add2(int num1, int num2)
{
	return num1 + num2;
}

void myfun2()
{
	std::cout << "going to print\n";
}

void camsFun(int age, double height, std::string favcolor, char favletter)
{
	int myage = age;
	double myheight = height;
	std::string myfavcoloris = favcolor;
	char myfavletteris = favletter;
	std::printf("Hi im cam and im %d. My height is\n %g. My favorite color is\n %s. My favorite letter is\n %c.", myage, myheight, favcolor.c_str(), favletter);
}

int main()
{
	int donsage = 32;
	std::string color1 = "green";
	std::string color2 = "perrywinkle";
	camsFun(24, 3.33, color1, 'C');

	camsFun(donsage, 5.7, color2, 'm');

	//int othernum = 10;
	//int mynum = add2(4, 5);
	//printf("My value is %d\n", othernum);
	//printf("My value is %d\n", mynum);
	//printf("My \tvalue is %d\n", add2(10, 45));

	system("pause");
	return 0;
}