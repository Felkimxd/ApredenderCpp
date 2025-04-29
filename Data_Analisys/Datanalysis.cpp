#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

std::vector<std::string> column_read_document(std::string const FILE_DIRECTORY){

    std::ifstream xlsx_file;
    xlsx_file.open(FILE_DIRECTORY, ios::in);


    vector<string> xd{};

    if (xlsx_file.is_open()){

        std::string line;

        while (getline(xlsx_file,line))
        {
            cout << line << endl;
        };

        
    }

    return xd;
}

int main(){

    string File = "C :\\CARPETAS IMPORTANTES\\Carpetas\\ApredenderC++\\Data_Analisys\\Online Retail.xlsx ";

    column_read_document(File);

    return 0;
}