#include<vector>
#include<iostream>
#include<string>

using namespace std;

int main(){
    // 1. Different tpes of nitialization in C++

    int num_int1 = 0;
    int num_int2 (1);
    int num_int3 {2};

    int int_nums[3] {num_int1,num_int2,num_int3};

    auto [copy_1, copy_2, copy_3] = int_nums;

    cout << "Primer variable: " << copy_1 << endl
         << "Segunda variable: " << copy_2 << endl
         << "Tercer variable: " << copy_3 << endl;

    cout << "========================================================" << endl;

    double num_double1 = 1.5;
    double num_double2 (2.8);
    double num_double3 {1.1};

    double double_nums[3] {num_double1,num_double2,num_double3};

    auto [copy_4, copy_5, copy_6] = double_nums;

    cout << "Cuarta variable: " << copy_4 << endl
         << "Quinta variable: " << copy_5 << endl
         << "Sexta variable: " << copy_6 << endl;

    cout << "========================================================" << endl;
    
    string Nombre1 = "Felipe";
    string Nombre2 ("Victor");
    string Nombre3 {"Manuel"};

    string vector_names[3] {Nombre1,Nombre2,Nombre3};

    auto [copy_7, copy_8, copy_9] = vector_names;

    cout << "Septima variable: " << copy_7 << endl
         << "Octavaa variable: " << copy_8 << endl
         << "Novena variable: " << copy_9 << endl;

    cout << "========================================================" << endl;
    
    bool Indicador1 = true;
    bool Indicador2 (false);

    bool vector_indicadores[2] {Indicador1,Indicador2};

    auto [copy_10, copy_11] = vector_indicadores;

    cout << "Decima variable: " << copy_10 << endl
         << "Onceava variable: " << copy_11 << endl;

    cout << "========================================================" << endl;
    // 2. The use of references and pointers to modify values
    // Las referencias solamente sirven para variables mas no para conjuntos de datos como vectores

    string& name_arrow = copy_7;

    cout << "Antes de usar referencia: " << copy_7 << endl;

    name_arrow = "Anita";

    cout << "Original: " << copy_7 <<endl<< "Referencia: " << name_arrow <<endl;
    
    cout << "========================================================" << endl;
    
    bool& arrows = copy_10;

    cout << "Antes de usar referencia: " << copy_10 << endl;

    arrows = false;

    cout << "Original: " << copy_10 <<endl<< "Referencia: " << arrows <<endl;

    cout << "========================================================" << endl;
    
    double& double_arrows = copy_4;

    cout << "Antes de usar referencia: " << copy_4 << endl;

    double_arrows = 2.69;

    cout << "Original: " << copy_4 <<endl<< "Referencia: " << double_arrows <<endl;

    cout << "========================================================" << endl;
    
    int& int_arrows = copy_1;

    cout << "Antes de usar referencia: " << copy_1 << endl;

    int_arrows = 81;

    cout << "Original: " << copy_1 <<endl<< "Referencia: " << int_arrows <<endl;

    cout << "========================================================" << endl;

    // 3. Structures bindings to unpac values from a structure.

    struct Point
    {
        float x;
        float y;
        float z;
    };

    Point primer_punto {5.5,2,9};

    auto [x_new, y_new, z_new] = primer_punto;

    cout << "Punto x: " << x_new << endl
         << "Punto y: " << y_new << endl
         << "Punto z: " << z_new << endl;

    cout << "========================================================" << endl;

    // 4. Identification of l-values and r-values in various expressions.

    /*
    1. a = 42;
    2. int x = a + b;
    3. & a;
    4. std::string s = c + " World";
    5. int &refX = x;
    6. int &&rref = 100;
    */
   
    return 0;
}