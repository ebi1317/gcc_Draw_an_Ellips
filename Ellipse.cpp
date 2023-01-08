//
//  main.cpp
//  C++ program that reads in the lenghts 𝑎 and 𝑏 of the semiaxes of an ellipse (𝑎 > 𝑏) and
//  draws a filled ellipse consisting of asterisks (“*”) to the console window.
//
//  Created by ebrhaim zeinali
//



#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;

    // reading axis values
    cout<<"Please a: \n";
    cin>>a;

    cout<<"Please b: \n";
    cin>>b;


    for(int i =0;i <= b ; i++){
        // calculating number of stars
        int numOfStars=((a / b)*sqrt((2*b*i)-pow(i,2)));

        int numOfSpaces=a-numOfStars;

        for(int j = numOfSpaces; j>=0; j--){

            cout<<" ";

        }

        //doubling number of stars to cover the other half of the ellipse
        for(int k = -numOfStars ; k<=(numOfStars); k++){

            cout<<"*";
        }
        // next line
        cout<<endl;

        }


        //covering the other half
        for(int i=0;i<=b;i++){

            int numOfStars =(a / b)*sqrt((pow(b,2)-pow(i,2)));

            int numOfSpaces = a - numOfStars;

            for(int j=0; j<=numOfSpaces; j++)
			{
                cout<<" ";
            }

            //doubling number of stars to cover the other half of the ellipse
            for(int k = numOfStars; k>=-numOfStars; k--){
                cout<<"*";
            }
            cout<<endl;
    }
    return 0;
}
