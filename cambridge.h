//
// Created by Abby Sweet on 9/15/22.
// CS 124
// Project 1
//

#ifndef PROJECT1_CAMBRIDGE_H
#define PROJECT1_CAMBRIDGE_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout, std::endl, std::ifstream, std::string, std::vector;

/*
*
* Dog_Name - the name of the licensed dog
* Dog_Breed - the breed of the licensed dog
* Location_masked - the location both latitude and longitude together in one point
* Latitude_masked - the latitude of the location of the dog
* Longitude_masked - the longitude of the location of the dog
* Neighborhood - the neighborhood which the dog lives in
*
*/
class cambridge {
private:
    //define variables
    string name;
    string breed;
    string neighborhood;
    string point;
    vector<float> location;

public:
    //constructor for unknowns
    cambridge() {
        name = "none";
        breed = "unknown";
        neighborhood = "unknown";
    }

    //constructor for a creating dog
    cambridge(string n, string b, string p, float lat, float lon, string h) {
        name = n;
        breed = b;
        point = p;
        location.push_back(lat);
        location.push_back(lon);
        neighborhood = h;
    }

    //add a location
    void addLoc(float lat, float lon) {
        location.push_back(lat);
        location.push_back(lon);
    }

    // getter for location
    int getLoc(int index) const{
        float loc = 0;
        cout << location.size() << endl;
        if(location.size() >= index) {
            loc = location[index-1];
        }
        return loc;
    }

    // change location
    bool changeLoc(int index, float lat, float lon) {
        bool worked = false;
        if(location.size() <= index) {
            location[index - 1] = lat;
            location[index - 1] = lon;
        }
    }

    // getter for name
    string getName() const{
        return name;
    }

    // getter for breed
    string getBreed() const{
        return breed;
    }

    // getter for neighborhood
    string getNeighborhood() const{
        return neighborhood;
    }

    // setter for name
    void setName(string n) {
        name = n;
    }

    // setter for breed
    void setBreed(string b) {
        breed = b;
    }

    // setter for neighborhood
    void setNeighborhood(string n) {
        neighborhood = n;
    }
};

// function to read the data in from the file
void getDataFromFile(string filename, vector<cambridge>& cam) {
    ifstream inFile;
    //open file and catch if file does not open
    inFile.open(filename);
    if (inFile) {
        string header;
        getline(inFile, header);
        cout << header <<endl;
    } else {
        cout << "Could not open file." << endl;
    }

    //declare variables for input file
     string name, breed, point, neighborhood;
    float lat, lon;
    int zero;
    char comma, quote;

    //loop until file ends
    while (inFile && inFile.peek() != EOF) {
        //read in name
        if (inFile.peek() == '"') {
            inFile >> quote;
            getline(inFile, name, '"');
            inFile >> comma;
        } else {
            getline(inFile, name, ',');
        }

        //read in breed
        if (inFile.peek() == '"') {
            inFile >> quote;
            getline(inFile, breed, '"');
            inFile >> comma;
        } else {
            getline(inFile, breed, ',');
        }

        //read in location
        getline(inFile, point, ',');

        //read in latitude
        inFile >> lat;
        inFile >> comma;

        //read in longitude
        inFile >> lon;
        inFile >> comma;

        //read in neighborhood
        if (inFile.peek()=='"') {
            inFile >> quote;
            getline(inFile, neighborhood, '"');
        } else {
            getline(inFile, neighborhood);
        }

        //save the information
        cam.push_back(cambridge(name, breed, point, lat, lon, neighborhood));
    }
    // close file
    inFile.close();
}

// calculation function for counting the number of names
int calc(vector<cambridge> cam) {
    int count = 0;
    for (int i=0; i<cam.size(); i++) {

        if(cam[i].getName() == "Luna" || "LUNA" == cam[i].getName() || "luna" == cam[i].getName())
            count++;
    }
    return count;
}

#endif //PROJECT1_CAMBRIDGE_H
