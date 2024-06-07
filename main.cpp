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
        auto on=database.find(date);
        if(month<1 || month >12){
            cout<<"Mes inválido: "<<month<<endl;
            }
        if(day<1 || day>31){
            cout<<"Día inválido: "<<day<<endl;
            }
        if (on!=database.end()){ //PARA VERIFICAR SI UN EVENTO EN UNA FECHA ESPECIFICA SE REPITE O NO
            if(on->second.find(evento) != on->second.end()){
                continue;
            }
            else{
                on->second.insert(evento);
            }
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
    
    if(command=="Del"){
        auto it= database.find(date);
        if(it!= database.end()){
            it->second.erase(evento);
       
            if(it->second.empty()){
                database.erase(it);
            }
            cout<<"Deleted Successfully"<<endl;
        }    
        else{
            cout<<"Event not Found"<<endl;
        }
   

    }
}
return 0;

}