#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(NULL));

    int guess=rand() %100 ;
    int guessed, n=0;

    cout<<"Enter No. between 1 and 100."<<endl;

    do{
        cout<<"Enter you guessed no.: ";
        cin>>guessed;

        if(guessed<1 || guessed>100){
            cout<<"Please enter the number within valid range(1-100)"<<endl;
            continue;
        }

        if(guessed<guess){
            cout<<"Too Low"<<endl;
        }
        else if(guessed>guess){
            cout<<"Too High"<<endl;
        }
        else{
            cout<<"Congrats you made it......"<<endl;
        }
        n++;
    }while(guessed!=guess);

    cout<<"No. of trials: "<<n<<endl;
    return 0;
}