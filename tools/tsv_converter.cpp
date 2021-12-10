#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream file("file.tsv", ifstream::in);
    ofstream row("row.txt", ofstream::out);
    ofstream val("val.txt", ofstream::out);

    int last_destination = 1;
    int row_length = 0;
    while(!file.eof()){
        int source, destination, weight;

        file >> source >> destination >> weight;

        if(destination != last_destination){
            row << " " << row_length;
            // val << endl;
            last_destination = destination;
            row_length = 0;
        }

        val << " " << source;
        row_length++;
    }

    return 0;
}
