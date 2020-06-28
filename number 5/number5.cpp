#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;
class Wid
{
   private:
       float nw;//nw=no. of widgets
       float nd;//nd=no. of days
   public:
   	   void setWid(float w)
		{
		    if(w>0)
		  {
		    nw = w;
			nd = nw / 160;
			int x = nd * 10;
			if (x % 10 == 0)
				nd = (int) nd;
			else {
				nd = (int) nd;
				nd++;
			}	
		  }
		    else
			cout<<"Invalid no.of widgets!!!"<<endl;
        }
   double getWid()
   {
      return nd;
   }
};

int main()
{
	Wid w;
	double d;
	cout<<"Enter the number of widgets"<<endl;
	cin>>d;
	w.setWid(d);
	cout<<"The number of days it takes produce "<<d<<" widgets is:"<<w.getWid()<<endl;
	//system("pause");
	return 0;
}
	
