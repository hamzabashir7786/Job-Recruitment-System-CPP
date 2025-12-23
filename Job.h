#include <string>
using namespace std;

// .............................Simple structure to store job details......................
struct Job
{
    int id;
    string title;
    string description;
    string company;
    double salary;
    string requirements;
    //................. Linked list pointer...................
    Job* next; 

    Job(int i = 0, string t = "", string d = "", string c = "", double s = 0, string r = "") {
        id = i;
        title = t;
        description = d;
        company = c;
        salary = s;
        requirements = r;
        next = nullptr;
    }
};
