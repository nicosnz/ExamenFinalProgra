#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <set>
using namespace std;
int main() {
    map <string,set<string>> database;
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
            database[date].insert(evento);
        }
    }

    if(command=="Print"){
        for(auto x:database){
            for(auto event:x.second)
            
            cout<<x.first<<" "<<evento<<endl;
            
        }
    }
    /* 
    if(command=="Del"){
        auto it= database.find(date,evento);
        if(it!= database.end()){
            auto xd= it->second;
            auto xdd= xd.erase();
            database.emplace(date,xdd);
                if(it->second.empty()){
                    database.erase(it);
                }
            cout<<"Deleted Sucessfully"<<endl;
        }
        else{
            cout<<"Event not Found"<<endl;
        }
    }
*/
}

return 0;

}