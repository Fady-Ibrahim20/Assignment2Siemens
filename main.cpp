#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int getSum(vector<int> myVector);
float getAverage(vector<int> myVector);
int main()
{
    vector<int> toBePassedVector ;
    /* fill the vector with values from 1 to 10 */
     for (int i = 1; i < 11; i++){
        toBePassedVector.push_back(i);
     }
     int sumOfTheVector=getSum(toBePassedVector);
     cout << "the sum of the vector is " << sumOfTheVector <<endl;
     float averageOfTheVector= getAverage(toBePassedVector);
    cout << "the average of the vector is " << averageOfTheVector <<endl;


    return 0;
}

int getSum(vector<int> myVector){
    int sum=0;
for(int i=0;i<myVector.size();i++){
    sum+=myVector.at(i);
}
return sum;
}
float getAverage(vector<int> myVector){
    float average=0.0;
    int sum=0;
    for(int i=0;i<myVector.size();i++){
    sum+=myVector.at(i);
}

 average=(float)sum/myVector.size();  
 
    return average;
}