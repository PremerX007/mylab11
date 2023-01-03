#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int i=0,num=0;
    double sum=0, sum2=0;
    ifstream source("score.txt");
    string text;
    while(getline(source,text)){
        sum += stod(text);
        sum2 += pow(stod(text),2);
        num++;
    }
    source.close();

    double mean, sd;
    mean = (1.0/num)*sum;

    sd = sqrt((sum2/num)-pow(mean,2));
     
    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
}