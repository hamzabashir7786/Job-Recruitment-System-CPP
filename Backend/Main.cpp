#include <iostream>
#include "RecruitmentSystem.h"
using namespace std;

int main() 
{
    RecruitmentSystem sys;
    int choice;

    while (true) 
    {
        cout << "\*******************JOB RECRUITMENT SYSTEM *******************\n";
        cout << "1. Add Job Posting\n";
        cout << "2. Search Job\n";
        cout << "3. Apply for Job\n";
        cout << "4. Update Applicant Info\n";
        cout << "5. Display All Job Listings\n";
        cout << "6. Delete Job Posting\n";
        cout << "7. Count Total Job Posts\n";
        cout << "8. Show Top Qualified Applicants\n";
        cout << "9. Display Company Jobs\n";
        cout << "0. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1: sys.addJob();
            break;
        case 2: sys.searchJob(); 
            break;
        case 3: sys.applyForJob(); 
            break;
        case 4: sys.updateApplicant(); 
            break;
        case 5: sys.displayJobs();
            break;
        case 6: sys.deleteJob(); 
            break;
        case 7: sys.countTotalJobs(); 
            break;
        case 8: sys.showTopApplicants(); 
            break;
        case 9: sys.showJobsByCompany(); 
            break;
        case 0: cout << "Exiting Program...\n"; 
            return 0;
        default: cout << "Invalid Option.\n";
        }
    }
}


