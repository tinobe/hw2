#include <iostream>
#include<fstream>

using namespace std;

int main(){
	double x0 = 0.5,xskiped;
	int Nskip = 100; //Number of iterations to skip
	int Nend  = 200; //Number of total iterations
	double x[Nend-Nskip];
ofstream out("logmap-data.dat");

	for(double r=0; r <= 4; r += 0.001){
		xskiped=x0;
	   for(int i=1; i <= Nskip+1; i++)
		   xskiped = r*xskiped*(1-xskiped);
		x[0]=xskiped;
	   for(int i=Nskip+2; i <= Nend; i++)
	   	   x[i-Nskip-1] = r*x[i-Nskip-2]*(1-x[i-Nskip-2]);
	   for(int i=0;i<=Nend-Nskip-1;i++){
		   out << r << "\t" << x[i] << endl;
		}
	}

out.close();
	return 0;
}
