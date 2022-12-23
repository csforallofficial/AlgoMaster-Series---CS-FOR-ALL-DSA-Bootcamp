#include<bits/stdc++.h>
using namespace std;

void Print(int value){
    cout << value << endl;
}

void Print(float value){
    cout << value << endl;
}

void Print( value){
    cout << value << endl;
}

int main(){
    Print(5);
    Print(5.5);
    Print("Ramy");
    return 0;
}

--------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

template<typename T>
void Print(T value){
    cout << value << endl;
}

int main(){
    Print(5);
    Print(5.5f);
    Print("Ramy");
    return 0;
}
