#include "Classify.hpp"
#include <sstream>

using namespace CLNSIH001;

int main(int argc, char * argv[]){
    std::string dataset = std::string(argv[1]);//folder location containing images
    if (argc == 2){
        //defualt
        //output=cout;n=10;b=1
        CLNSIH001::Classify KMC(dataset);
    }
    else if (argc > 2){
        std::string command = std::string(argv[2]);
        if (command == "-o"){
            //output file
            std::string output = std::string(argv[3]);
        }
        else if (command == "-k"){
            //number of clusters generated by algorithm
            int n;
            std::istringstream(std::string(argv[3])) >> n;
        }
        else if (command == "-bin"){
            //histogram width
            int b;
            std::istringstream(std::string(argv[3])) >> b;
        }
    }//Complete for up to argc = 8
    return 0;
}