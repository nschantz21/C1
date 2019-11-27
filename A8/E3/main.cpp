/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-09-02
 * C1A8E3_main.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Program performs "Search and Replace All" operation for an arbitrary
 * case-sensitive sequence of characters on an input file.
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

const int BUFSIZE = 256;
const int ARGCOUNT = 5;
const int INFILE = 1;
const int OUTFILE = 2;
const int SEARCHARG = 3;
const int REPLARG = 4;

void ErrorAndDie(const char *myString)
{
    cerr << "\"" << myString << "\": File access error\n";
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    /* check correct number of arguments */
    if (argc != ARGCOUNT) {
        cerr << "incorrect number of arguments.\n";
        exit(EXIT_FAILURE);
    }
    
    /* get commandline arguments */
    const char *ifName = argv[INFILE];
    const char *ofName = argv[OUTFILE];
    const char *search = argv[SEARCHARG];
    const char *replace = argv[REPLARG];
    
    int search_len = strlen(search);
    
    /* open source as read-only and check exists */
    ifstream fln(ifName);
    if (!fln.is_open()) {
        ErrorAndDie(ifName);
    }
    /* open destination as write-only and check exists */
    ofstream ofln(ofName);
    if (!ofln.is_open())
        ErrorAndDie(ofName);
    
    /* Search and Replace search argument with replace argument */
    char buf[BUFSIZE];
    while (!fln.eof()) {
        
        fln.getline(buf, BUFSIZE);
        string outstring;
        
        /* find position of substring search in buf */
        char *cp1 = buf;
        while (char *cp2 = strstr(cp1, search)) {
            /* write upto the substring */
            ofln.write(cp1, cp2 - cp1);
            /* instead write the replace word and skip cp1 ahead */
            ofln << replace;
            cp1 = cp2 + search_len;
        }
        ofln << cp1 << '\n';
    }
    
    fln.close();
    ofln.close();
    return 0;
}
