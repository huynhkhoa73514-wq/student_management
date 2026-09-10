#include <iostream>
#include <sqlite3.h>
using namespace std;

int main() {
    sqlite3* db;
    char* errMsg = 0;

    int run = sqlite3_open("database.db", &db);
    if (run)
    {
        cerr << "Cant open file.db:" << sqlite3_errmsg(db); 
    }
    
    const char* sql =   R"(

                        )";
    
    run = sqlite3_exec(db, sql, 0, 0, &errMsg);
    
    if (run != SQLITE_OK)
    {
        cout << "Error: " << errMsg << endl;
    };
    
    sqlite3_close(db);

}