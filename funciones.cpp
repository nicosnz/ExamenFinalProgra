#include "funciones.h"
void transformadorAñosMesesDias(string& date, int& intAño,int& intMes, int& intDia){
    string Año,Mes,Dia;
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

    
}

// Función para eliminar un evento específico de una fecha determinada
void deleteEvent(map<string, set<string>>& database, const string& date, const string& evento) {
    auto it = database.find(date);
    if (it != database.end()) {
        it->second.erase(evento);
        if (it->second.empty()) {
            database.erase(it);
        }
        cout << "Deleted Successfully" << endl;
    } else {
        cout << "Event not Found" << endl;
    }
}

// Función para eliminar todos los eventos de una fecha determinada
void deleteAllEvents(map<string, set<string>>& database, const string& date) {
    auto it = database.find(date);
    if (it != database.end()) {
        int numEventsDeleted = it->second.size();
        database.erase(it);
        cout << "Deleted " << numEventsDeleted << " events" << endl;
    }
}

// Función para buscar eventos en una fecha determinada y mostrarlos en orden descendente
void findEvents(map<string, set<string>>& database, const string& date, vector<string>& eventoss) {
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

// Función para imprimir todos los eventos en la base de datos
void printAllEvents(const map<string, set<string>>& database) {
    for (const auto& entry : database) {
        for (const auto& event : entry.second) {
            cout << entry.first << " " << event << endl;
        }
    }
}