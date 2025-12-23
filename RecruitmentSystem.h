#include "Job.h"
#include "Applicant.h"
#include <queue>

class RecruitmentSystem 
{
private:
    // ....................Linked List for Jobs...................
    Job* jobHead; 
    // .......................Linked List for Applicants...............
    Applicant* appHead; 
    // ....................Queue for Applications........................
    queue<int> appQueue;      

public:
    RecruitmentSystem();

   
    void addJob();
    void searchJob();
    void countTotalJobs(); 

   
    void applyForJob();
    void updateApplicant();
    void showTopApplicants();

    
    void displayJobs();
    void deleteJob();
    void showJobsByCompany(); 
};
