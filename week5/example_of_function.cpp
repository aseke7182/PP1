#include<iostream>
#include<cmath>
using namespace std;

const std::string getDate() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

string getError(){
	return "some error";
}

void printDateAndError(){
	string date = getDate();
	string error = getError();
	cout<< date << " " << error << endl;
}

int main(){
	printDateAndError();

	return 0;
}
