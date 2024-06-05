#include <iostream>
#include <sstream>
#include <map>
using namespace std;
int main() {
    map <string,string> database;
    string linea1;
    string date,evento,command;
    int year,month,day;
    char s1,s2;
    while(getline(cin,linea1)){ 
    
    istringstream s(linea1);
    s>> command>> date >> evento;
    
    istringstream d(date);
    d >> year >> s1 >> month >> s2 >> day;
   

    if(command=="Add"){
        if(month<1 || month >12){
            cout<<"Mes inválido: "<<month<<endl;
            }
        if(day<1 || day>31){
            cout<<"Día inválido: "<<day<<endl;
            }
        else{ 
            database[date]=evento;
        }
    }
    if(command=="Print"){
        for(auto x:database){
            
            cout<<x.first<<" "<<x.second<<endl;
            
        }
    }

}
return 0;

}