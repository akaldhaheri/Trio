#include <iostream>
using namespace std;

void rearrange(int &, int &, int &);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

	rearrange(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void rearrange(int & red,int & green, int & blue)
{
	int greatest;
	int middle;
	int least;

if(red>=green && red>=blue && green>=blue)
{
	greatest = red;
	middle = green;
	least = blue;

}
else if(red>=green  && red>=blue && blue>=green)
{
	greatest = red;
	middle = blue;
	least = green;
}
else if(green>=red && green>=blue && red>=blue)
{
	greatest = green;
	middle = red;
	least = blue;
}
else if(green>=red && green>=blue && blue>=red)
{
	greatest = green;
	middle = blue;
	least = red;
}
else if(blue>=red && blue>=green && green>=red)
{
	greatest = blue;
	middle = green;
	least = red;
}
else if(blue>=red && blue>=green && red>=green)
{
	greatest = blue;
	middle = red;
	least = green;
}

	red = greatest;
	green = middle;
	blue = least;
}
