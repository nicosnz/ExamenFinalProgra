#pragma once
#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm> 
#include <functional>

using namespace std;
void transformadorAñosMesesDias(string& date, int& intAño,int& intMes, int& intDia);
// Función para eliminar un evento específico de una fecha determinada
void deleteEvent(map<string, set<string>>& database, const string& date, const string& evento); 

// Función para eliminar todos los eventos de una fecha determinada
void deleteAllEvents(map<string, set<string>>& database, const string& date); 

// Función para buscar eventos en una fecha determinada y mostrarlos en orden descendente
void findEvents(map<string, set<string>>& database, const string& date, vector<string>& eventoss); 

// Función para imprimir todos los eventos en la base de datos
void printAllEvents(const map<string, set<string>>& database); 