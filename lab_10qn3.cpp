//including library
#include<iostream>
using namespace std;

//class function
class spark
{
	  public:
	  double l,b;
	  double a()
	    {
	       return l*b;
	    }
	  double p()
	    {
	       return (2*(l+b));
	    }
};
//including main function
int main()
{
	 double l1,b1,l2,b2;
	 //asking the user to input information
	    cout<<" Please enter the length of the 1st rectangle "<<endl;
	    cin>>l1;
	    cout<<" Please enter the breadth of the 1st rectangle "<<endl;
	    cin>>b1;
	    cout<<" Please enter the length of the 2nd rectangle "<<endl;
	    cin>>l2;
	    cout<<" Please enter the breadth of the 2nd rectangle "<<endl;
	    cin>>b2;
	    spark spark1;
	    spark spark2;
	    spark1.l=l1;
	    spark1.b=b1;
	    spark2.l=l2;
	    spark2.b=b2;
	    double a1=spark1.a();
	    double p1=spark1.p();
	    double a2=spark2.a();
	    double p2=spark2.p(); 

	    cout<<" Area of the 1st rectangle is equal to "<<a1<<endl;
	    cout<<" Area of 2nd rectangle is equal to "<<a2<<endl;
	    cout<<" Perimeter of 1st rectangle is equal to "<<p1<<endl;
	    cout<<" Perimeter of 2nd rectangle is equal to "<<p2<<endl;
	 //end
	 return 0;
}
