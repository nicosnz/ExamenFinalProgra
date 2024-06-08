#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm> 
#include <functional>

using namespace std;


int main() {
    vector<string>eventoss;
    map <string,set<string>> database;
    string linea1;
    string date,evento,command,guion1,guion2;
    int intMes,intAño,intDia;
    string Año,Mes,Dia;
   
   
   
    while(getline(cin,linea1)){ 
    
        istringstream d(linea1);

        d >> command >> date >> evento;
        
        size_t posicionG= date.find("-");
        Año = date.substr(0,posicionG);
        date.erase(0,posicionG+1);
        size_t posicionH = date.find("-");
        Mes= date.substr( 0, posicionH);
        date.erase(0,posicionH+1);
        Dia = date;
        
        while(Año.size()<4){
            Año="0"+Año;
        }
        if(Mes.size()<2){
            Mes="0"+Mes;

        }
        if(Dia.size()<2){
            Dia="0"+Dia;
        }
        
        date= Año+ "-" + Mes + "-" + Dia;
        intAño=stoi(Año);
        intMes=stoi(Mes);
        intDia=stoi(Dia);

        if(date.size()!=10 ){
            cout<<"Wrong Date: "<<date<<endl;
        }
        
         
        /////////////////////////////////////////////////////////////////////////////////
        if (command == "Del" && !evento.empty()) {
            auto it = database.find(date);
            if (it != database.end()) {
                int numEventosEliminados = it->second.size();
               database.erase(it);
                cout << "Deleted " << numEventosEliminados << " events" << endl;
            }
        }
        
        /////////////////////////////////////////////////////////////////////////////
        else if(command=="Add"){
            auto on=database.find(date);
            if(intMes<1 || intMes >12){
                cout<<"Mes inválido: "<<intMes<<endl;
                break;
                }
            if(intDia<1 || intDia>31){
                cout<<"Día inválido: "<<intDia<<endl;
                break;
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

        

        /////////////////////////////////////////////////////////////////////////////////
        else if(command=="Del" && evento.empty()){
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
   
    
        /////////////////////////////////////////////////////////////////////////////////
        else if(command=="Find"){
            auto in=database.find(date);
            if(in!=database.end()){
                for(auto event:in->second){
                    eventoss.push_back(event);
                }
            }
            sort(eventoss.begin(),eventoss.end(),greater<string>());
            for(auto& i:eventoss){
                cout<<i<<endl;
            }
        }
        

        /////////////////////////////////////////////////////////////////////////////////
        else if(command=="Print"){
            for(const auto& x :database){
                for(const auto& event :x.second)
                
                    cout<<x.first<<" "<<event<<endl;
                
            }
        }
        
        
        
        else{
            cout<<"Unknown Command: "<<command<<endl;
            break;
        }
        

}//termina el bucle while
    

return 0;
}

