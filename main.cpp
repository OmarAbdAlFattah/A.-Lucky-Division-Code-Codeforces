#include <iostream>
using namespace std;

bool checkLucky(int x){
    if(x < 10 && (x == 4 || x == 7)){
        return 1;
    }
    else if((x > 10 && x < 100) && ((x/10 == 4 || x/10 == 7) && (x%10 == 4 || x%10 ==7))){  //check the first digit and last digit
        return 1;
    }
    else if((x > 100 && x < 1000) && ((x%10 == 7 || x%10 == 4)) && (x/10 == 44 || x/10 == 47 || x/10 == 77 || x/10 == 74) ){ //check first two digits and last digit
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int number;
    cin>>number;
    string check;
    for(int i = 1; i < 1000; i++){
        if(checkLucky(i)){
            if(number%i == 0){
                check = "YES";
            }
        }
    }
    if(check == "YES"){cout<<check;}
    else{check = "NO"; cout<<check;}
    return 0;
}
