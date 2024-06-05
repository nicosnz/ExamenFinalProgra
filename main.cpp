#include <iostream>
#include <sstream>
#include <map>
using namespace std;
int main() {
    map <string,string> database;
    string linea1;
    string date,evento,command;

    while(getline(cin,linea1)){ 
    
    istringstream s(linea1);
    s>> command>> date >> evento;
    
    if(command=="Add"){
        database[date]=evento;
    }
    if(command=="Print"){
        for(auto x:database){
        cout<<x.first<<" "<<x.second<<endl;
        }
    }

}
return 0;
}