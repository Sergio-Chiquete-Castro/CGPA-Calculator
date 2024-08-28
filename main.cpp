#include <iostream>
using namespace std;
class Cumulative_GPA{

private:
int number_of_testScores;
int total;
int avgTotal;

public:
void main() {
    testScores();
}
void testScores(){
 
    cout<<"Enter # of test scores : ";
    cin >> number_of_testScores;
    
    int numbers[number_of_testScores];

    total =0;

    for(int i=1; i<number_of_testScores+1;i++){
       
       cout << "Enter #"<<i<<": ";
       cin >> numbers[i];

    }

    for(int i = 1; i < number_of_testScores+1; i++){
    cout << numbers[i] << "  ";
    total += numbers[i];

   }
    
    cout << total << endl;
     //get average 
    avgTotal = total-1/number_of_testScores;


    if (avgTotal == 100) {
        cout << "Grade point A+"<<endl;
    }  
    else if(avgTotal>=80) {
        cout << "Grade point A"<<endl;
    }
    else if (avgTotal>=70){
        cout <<"Grade point B"<<endl;
    }
      else if (avgTotal>=60){
        cout <<"Grade point D"<<endl;
    }
      else if (avgTotal<=50){
        cout <<"Grade point F"<<endl;
    }
    else{
        cout<<"error"<<endl;
    }

} 
};
 
int main(){
    Cumulative_GPA start;
    start.main();

}
