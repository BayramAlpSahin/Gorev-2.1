#include <bits/stdc++.h>
using namespace std;
 
double mean (vector <double> data){
	double sum=0;
	for (int i=0;i<data.size();i++){
		sum+=data[i];}
	return sum/data.size();}
double stddev(vector <double> data){
	double var=0;
	for (int i=0;i<data.size();i++){
		var+=(data[i]-mean(data))*(data[i]-mean(data));}
	return sqrt(var/(data.size()-1));
}

int main()
{ 	
		
return 0;
}
