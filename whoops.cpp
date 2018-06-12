#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
        //Question 1
    cout<< "*\t*\t*\t*\t*\t *\t*\n*\t*\t*\t*\t*\*\t*\t";
    system ("pause");
    //Question 2
    system ("cls");

    //rectangle perimeter
    double length, width,r;
    cout<<"Enter the length of the recteangle /n";
    cin>>length;
    const double PI=3.142;



		cout <<"\n\n Find the area and circumference of any circle :\n";
		cout <<"----------------------------------------------------\n";
		cout<<"Input the radius(1/2 of diameter) of a circle : ";
    	cin>>r;

    	double circum=2*PI*r;

    	circum = 2*PI*r;
		//area = PI*r*r;
        cout<<" The area of the circle is : "<< PI*r*r << endl;
        cout<<" The circumference of the circle is : "<< circum << endl;

        cout << endl;
        return 0;;
}
