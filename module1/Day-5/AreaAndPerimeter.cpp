#include <iostream>
using namespace std;

int main(){
    float length, breath;
    cout << "Enter the length of rectangle" << endl;
    cin >> length;
    cout << "Enter the breath of rectangle" << endl;
    cin>> breath;

    float area = length * breath;
    float perimeter = 2 * (length + breath);

    if (area > perimeter)
    {
        cout << "Area is greater : " << area << endl;
    }
    else if(area == perimeter){
       cout << "Area is equals to perimeter : " << area << " " << perimeter << endl; 
    }
    else{
        cout << "Perimter is greater : " << perimeter << endl;
    }


    return 0;
}