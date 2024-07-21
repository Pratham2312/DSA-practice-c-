// 0001 ACCenture coding qs talent battel weight.cpp

// A person’s body mass index is a simple calculation based on height and weight that classifies the person as underweight, overweight, or normal. The formula for metric unit is,

// BMI = weight in kilograms / (height in meters)2

// If BMI < 18, return 0.
// If 18 >= BMI < 25, return 1.
// If 25 >= BMI <30, return 2.
// If 30 >= BMI < 40, return 3.
// If BMI >= 40, return 4.

#include<iostream>

using namespace std;

int GetBMICategory(int weight, float height){
    float sq=height*height;
    float bmi=weight/sq;
    if(bmi<18){
        return 0;
    }
    
    if(bmi<18){
        return 0;
    }
    else if(bmi>=18 && bmi<25){
        return 1;
    }
    else if(bmi>=25 && bmi<30){
        return 2;
    }
    else if(bmi>=30 && bmi<40){
        return 3;
    }
    else{
        return 4;
    }
    
}

int main(){
    int bmI=GetBMICategory(62,1.52);
    cout<<bmI;
}
