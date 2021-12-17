#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){    
    
    ifstream source;
    source.open("score.txt"); 
    int i = 0;
    double mean, a = 0, sum = 0, sta;
   

    string textline;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        a += pow(atof(textline.c_str()),2);
        i++; 
    }
    mean = sum/i;
    sta = sqrt((a/i)-pow(mean,2));
    cout << "Number of data = "<< i << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean << "\n";
    cout << "Standard deviation = "<< sta;
}