#include <string>
using namespace std;

// .......................Node for Applicant Linked List.......................
struct Applicant
{
    int applicantID;
    string name;
    string email;
    int appliedJobID;
    // .....................Used for sorting top applicants...............
    int qualificationScore; 

    Applicant* next;

    Applicant(int id = 0, string n = "", string e = "", int jobID = 0, int q = 0) 
    {
        applicantID = id;
        name = n;
        email = e;
        appliedJobID = jobID;
        qualificationScore = q;
        next = nullptr;
    }
};
