#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    int dem2 = 0;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        if(input == 2){
            dem2 ++;
        }
        arr.push_back(input);
    }

    sort(arr.begin(), arr.end());

//    for(int i=0; i<arr.size(); i++){
//        cout<<arr.at(i)<< " ";
//    }
    int car4 = 0;//day
    int car3 = 0;
    int car2 = 0;
    int car1 = 0;

    if(dem2 % 2){
        car4 = (dem2-1)/2;
        car2 = 1;
    }else{
        car4 = dem2/2;
    }

    for(int i=0; i<n; i++){
        if(arr.at(i) == 4){
            car4++;
        }else if(arr.at(i) == 3){
            car3++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr.at(i) == 1 && car3 != 0){
            car3--;
            car4++;
        }else if(arr.at(i) == 1 && car2 != 0){
            car3++;
            car2--;
        }else if(arr.at(i) == 1){
            car1 ++;
        }
    }
    if(car1){
        car4 += car1/4;
        car1 = car1 - (car1/4)*4;
        if(car1 > 0){
            if(car1 == 2){
                car2 ++;
                car1 = 0;
            }else if(car1 == 3){
                car3 ++;
                car1 = 0;
            }
        }
    }
//    cout<< car1<<endl;
//    cout<< car2<<endl;
//    cout<< car3<<endl;
//    cout<< car4<<endl;

    cout<<car1+car2+car3+car4;


    return 0;
}
