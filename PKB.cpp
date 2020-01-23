#include <iostream>
using namespace std;

double calc_gdp_change( double greece_gdp_2005 ) { 
	double greece_gdp_2006=greece_gdp_2005+0.057*greece_gdp_2005;
	double greece_gdp_2007=greece_gdp_2006+0.033*greece_gdp_2006;
	double greece_gdp_2008=greece_gdp_2007-0.003*greece_gdp_2007;
	double greece_gdp_2009=greece_gdp_2008-0.043*greece_gdp_2008;
	double greece_gdp_2010=greece_gdp_2009-0.055*greece_gdp_2009;
	double greece_gdp_2011=greece_gdp_2010-0.091*greece_gdp_2010;
	double greece_gdp_2012=greece_gdp_2011-0.073*greece_gdp_2011;
	double greece_gdp_2013=greece_gdp_2012-0.032*greece_gdp_2012;
	double greece_gdp_2014=greece_gdp_2013-0.007*greece_gdp_2013;
	double greece_gdp_2015=greece_gdp_2014-0.002*greece_gdp_2014;
	return greece_gdp_2015;
}

int main() {
	double pkb;
	cout<<"Podaj PKB Grecji"<<endl;
	cin>>pkb;
	cout<<"PKB Grecji na koniec 2015 wynosi"<<endl;
	cout<<calc_gdp_change(pkb)<<endl;
	return 0;
}