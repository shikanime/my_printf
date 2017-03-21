#include "../../loader.h"

/* local functions */

bool integerCheck(const string query, int n){
  if (query[n] == 'd')
    return true;
}

bool longCheck(const string query, int n){
  if (query[n] == 'l' && query[n + 1] == 'd')
    return true;
}

bool charCheck(const string query, int n){
  if (query[n] == 'c' || (query[n]))
    return true;
}

bool stringCheck(const string query, int n){
  if (query[n] == 's')
    return true;
}

bool pointerCheck(const string query, int n){
  if (query[n] == 'p')
    return true;
}

bool shortCheck(const string query, int n){
  if (query[n] == 'h' && query[n + 1] == 'd')
    return true;
}

bool hexadecimalCheck(const string query, int n){
  if (query[n] == 'x')
    return true;
}