#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <filesystem>
#include <string>
#include <boost/lexical_cast.hpp>

using namespace boost;
using namespace std;

// const string file_path = "/mnt/g/_git/_programming_skills/_programming/_cpp/_linux/_fileHandling/text.txt";

// When built sources by cmake -> the current directory is in build folder
// So, we need to specify the file in correctly
const string file_path = "../_fileHandling/text.txt";

void read_from_file(map<string, int>& mapping_table, const string& file_path)
{
    char* current_path = new char[256];
    getcwd(current_path, 256);
    string file_name_path = current_path + file_path;
    cout << "file_path: " << file_path << endl;
    ifstream ifs(file_path, ios_base::in);
    string nation = "";
    string population = "";
    
    while(getline(ifs >> ws, nation, '\n'))
    {
        // While we can read the line
        // Reading next line
        getline(ifs, population,'\n');
        mapping_table[nation] = atoi(population.c_str());
    } 


    // Deallocated
    if (current_path)
    {
        delete current_path;
        current_path = nullptr;
    }
}

void display_nation_population(const map<string,int>& table)
{
    cout << "nation\t\tpopulation" << endl;
    for (auto& elem : table)
    {
        cout << elem.first << "\t" << elem.second << endl;
    }
}

int main()
{
    map<string, int> nation_population = {};
    read_from_file(nation_population, file_path);
    display_nation_population(nation_population);
    return 0;
}