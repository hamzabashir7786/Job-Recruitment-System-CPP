#include <iostream>
#include "RecruitmentSystem.h"
using namespace std;

RecruitmentSystem::RecruitmentSystem() 
{
    jobHead = nullptr;
    appHead = nullptr;
}


void RecruitmentSystem::addJob()
{
    int id;
    string title, desc, company, req;
    double salary;

    cout << "Enter Job ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Job Title: ";
    getline(cin, title);
    cout << "Enter Description: ";
    getline(cin, desc);
    cout << "Enter Company Name: ";
    getline(cin, company);
    cout << "Enter Salary: ";
    cin >> salary;
    cin.ignore();
    cout << "Enter Requirements: ";
    getline(cin, req);

    Job* newJob = new Job(id, title, desc, company, salary, req);

    newJob->next = jobHead;
    jobHead = newJob;

    cout << "Job Added Successfully!\n";
}

// ............................. SEARCH JOB ..........................
void RecruitmentSystem::searchJob()
{
    int choice;
    cout << "Search by: 1-ID  2-Title : ";
    cin >> choice;

    if (choice == 1) 
    {
        int id;
        cout << "Enter Job ID: ";
        cin >> id;

        Job* temp = jobHead;
        while (temp) 
        {
            if (temp->id == id)
            {
                cout << "Job Found: " << temp->title << " (" << temp->company << ")\n";
                return;
            }
            temp = temp->next;
        }
    }
    else
    {
        cin.ignore();
        string title;
        cout << "Enter Title: ";
        getline(cin, title);

        Job* temp = jobHead;
        while (temp) 
        {
            if (temp->title == title) 
            {
                cout << "Job Found: ID=" << temp->id << " Company=" << temp->company << "\n";
                return;
            }
            temp = temp->next;
        }
    }

    cout << "Job Not Found.\n";
}

//......................... COUNT JOBS ..........................
void RecruitmentSystem::countTotalJobs() 
{
    int count = 0;
    Job* temp = jobHead;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    cout << "Total Job Postings: " << count << "\n";
}

// ........................ APPLY JOB ...........................
void RecruitmentSystem::applyForJob() 
{
    int aid, jobID, score;
    string name, email;

    cout << "Enter Applicant ID: ";
    cin >> aid;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Email: ";
    getline(cin, email);
    cout << "Enter Job ID Applying For: ";
    cin >> jobID;

    cout << "Enter Qualification Score (1-100): ";
    cin >> score;

    Applicant* newApp = new Applicant(aid, name, email, jobID, score);
    newApp->next = appHead;
    appHead = newApp;

    appQueue.push(aid);

    cout << "Application Submitted Successfully!\n";
}

//............................ UPDATE APPLICANT ...............................
void RecruitmentSystem::updateApplicant() 
{
    int id;
    cout << "Enter Applicant ID to Update: ";
    cin >> id;

    Applicant* temp = appHead;
    while (temp)
    {
        if (temp->applicantID == id) 
        {
            cin.ignore();
            cout << "Enter New Email: ";
            getline(cin, temp->email);
            cout << "Enter New Qualification Score: ";
            cin >> temp->qualificationScore;

            cout << "Applicant Updated Successfully!\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Applicant Not Found.\n";
}

// ........................... TOP APPLICANTS .............................
void RecruitmentSystem::showTopApplicants() 
{
    // Simple bubble sort on linked list by qualificationScore
    for (Applicant* i = appHead; i && i->next; i = i->next)
    {
        for (Applicant* j = i->next; j; j = j->next)
        {
            if (i->qualificationScore < j->qualificationScore)
            {
                swap(i->qualificationScore, j->qualificationScore);
                swap(i->name, j->name);
                swap(i->email, j->email);
            }
        }
    }

    cout << "Top Qualified Applicants:\n";
    Applicant* t = appHead;
    while (t) {
        cout << t->name << " - Score: " << t->qualificationScore << "\n";
        t = t->next;
    }
}

// ...................... DISPLAY JOBS ...............................
void RecruitmentSystem::displayJobs() 
{
    Job* temp = jobHead;
    if (!temp)
    {
        cout << "No Jobs Available.\n";
        return;
    }

    cout << "\n--- ALL JOB LISTINGS ---\n";
    while (temp) 
    {
        cout << "ID: " << temp->id << "  |  " << temp->title
            << "  |  " << temp->company << "  |  Salary: " << temp->salary << "\n";
        temp = temp->next;
    }
}

// ...................... DELETE JOB ..............................
void RecruitmentSystem::deleteJob() 
{
    int id;
    cout << "Enter Job ID to Delete: ";
    cin >> id;

    Job* temp = jobHead, * prev = nullptr;

    while (temp) 
    {
        if (temp->id == id)
        {
            if (prev) prev->next = temp->next;
            else jobHead = temp->next;

            delete temp;
            cout << "Job Deleted.\n";
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    cout << "Job Not Found.\n";
}

// ........................... SHOW JOBS BY COMPANY ...............................
void RecruitmentSystem::showJobsByCompany() 
{
    cin.ignore();
    string company;
    cout << "Enter Company Name: ";
    getline(cin, company);

    Job* temp = jobHead;
    cout << "\nJobs from " << company << ":\n";
    while (temp) 
    {
        if (temp->company == company) 
        {
            cout << temp->title << " (ID: " << temp->id << ")\n";
        }
        temp = temp->next;
    }
}