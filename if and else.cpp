#include<iostream>
using namespace std;

int main(){
int savings;
cin>>savings;
if(savings>5000){
        if(savings>10000){
            cout<<"going for roadtrip with neha";
        }
        else{
            cout<<"going to zoo with neha";
        }
}
else if(savings<5000){
        if(savings>2000){
                cout<<"going for shopping with sneha";
        }
        else{
            cout<<"go to a theater with sneha";
        }

}
else{
    cout<<"let's go with friends";
}
return 0;
}
