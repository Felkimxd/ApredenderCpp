
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "CLI11.hpp"
#include "barkeep.h"
#include <chrono>
#include <thread>

using namespace std;
using namespace barkeep;

vector<string> split(const string &s, char delim)
{
    std::vector<string> return_vec;
    std::stringstream ss(s);
    std::string token;
    while (getline(ss, token, delim))
    {
        return_vec.push_back(token);
    }
    return return_vec;
}

vector<vector<string>> fromCountry(string fileName, string country)
{
    string line;
    vector<vector<string>> ans;
    ifstream file(fileName);
    if (file.is_open())
    {
        // Inicializar el contador
        int work{0};
        auto c = barkeep::Counter(&work, {.message = "Reading Lines",
                                          .speed = 1.0,
                                          .speed_unit = "lines/s"});

        getline(file, line);
       
        // Segunda pasada para procesar datos
        while (getline(file, line))
        {
            vector<string> aux = split(line, ';');
            if (aux.size() >= 8 && aux[7] == country)
            {
                ans.push_back(aux);
            }
            work++;
           
        }

        c->done();
    }
    else
    {
        cout << "no se abrió el archivo" << endl;
    }

    file.close();
    return ans;
}

vector<vector<string>> fromCountry(string fileName)
{
    string line;
    vector<vector<string>> ans;
    ifstream file(fileName);
    while (getline(file, line))
    {
        vector<string> aux = split(line, ';');
        ans.push_back(aux);
    }
    return ans;
}

void printing(vector<vector<string>> &filtered)
{
    cout << "InvoiceNo; StockCode; Description; Quantity; InvoiceDate; UnitPrice; CustomerID; Country" << endl;
    for (auto i : filtered)
    {
        for (auto j : i)
        {
            cout << j << "; ";
        }
        cout << "\n";
    };
};

int main(int argc, char **argv)
{
    string fileName = "..\\..\\Data\\Online_Retail.csv";

    CLI::App app("first try");
    string country;
    app.add_option("-c, --country", country, "filter by country: ");
    CLI11_PARSE(app, argc, argv);
    vector<vector<string>> ans;
    if (country.empty())
    {
        ans = fromCountry(fileName);
    }
    else
    {
        ans = fromCountry(fileName, country);
    }
    printing(ans);
    return 0;
}