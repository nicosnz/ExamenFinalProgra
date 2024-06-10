#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm> 
#include <functional>
#include "funciones.h"
using namespace std;


int main() {
    vector<string>eventoss;
    map <string,set<string>> database;

    
    string linea1;
    string date,evento,command,guion1,guion2;
    int intMes,intAño,intDia;
    
   
   
    //Comienzo del bucle
    while(getline(cin,linea1)){ 
    
        istringstream d(linea1);

        d >> command >> date >> evento;
        
        transformadorAñosMesesDias(date,intAño,intMes,intDia);
        if(date.size()!=10 ){
            cout<<"Wrong Date: "<<date<<endl;
        }
        
         
        /////////////////////////////////////////////////////////////////////////////////
        if(command=="Add"){
            auto on=database.find(date);
             if(intMes<1 || intMes >12){
                cout<<"Month value is invalid: "<<intMes<<endl;
                break;
            }
            if(intDia<1 || intDia>31){
                cout<<"Day value is invalid: "<<intDia<<endl;
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
       
        
        /////////////////////////////////////////////////////////////////////////////
        
        else if (command == "Delall") {
           deleteAllEvents(database,date);
        }

        

        /////////////////////////////////////////////////////////////////////////////////
        else if(command=="Del"){
                deleteEvent(database,date,evento);
            }
   
    
        /////////////////////////////////////////////////////////////////////////////////
        else if(command=="Find"){
            findEvents(database,date,eventoss);
        }
        

        /////////////////////////////////////////////////////////////////////////////////
        else if(command=="Print"){
            printAllEvents(database);
            
        }
        
        //////////////////////////////////////////////////////////////////////////////////
        
        else{
            cout<<"Unknown Command: "<<command<<endl;
            break;
        }
        

}//termina el bucle while
    

return 0;
}

