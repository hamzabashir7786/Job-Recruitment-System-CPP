# 🚀 Job Recruitment System (C++)

A modular, console-based **Job Recruitment Management System** developed using **Object-Oriented Programming (OOP)** and **Data Structures (DSA)**. This system automates the process of posting jobs, managing applicants, and ranking candidates based on merit.

---

# 🛠️ Technical Core
This project demonstrates the practical application of essential Computer Science concepts:

- **Singly Linked Lists:** Custom implementation to manage dynamic records for `Jobs` and `Applicants` without memory overhead.
- **Queue (STL):** Used to maintain the sequence of applications (FIFO) for fair processing.
- **Algorithm (Bubble Sort):** A specialized sorting logic applied directly to the linked list to rank applicants by their **Qualification Scores**.
- **Modular Architecture:** Separation of concerns using Header (`.h`) and Implementation (`.cpp`) files.

---

# ✨ Key Functionalities

# 🏢 For Employers (Job Management)
- **Dynamic Posting:** Add job listings with ID, Title, Company, and Salary details.
- **Company Filtering:** Search and display all job openings specific to a company name.
- **Inventory Management:** Delete outdated job posts and track total active listings.

# 👤 For Applicants (Candidate Tracking)
- **Application Portal:** Direct application to jobs using unique IDs.
- **Search Engine:** Find relevant jobs by ID or Title.
- **Profile Updates:** Edit applicant contact information and scores dynamically.
- **Leaderboard:** View top-qualified candidates ranked by an automated sorting engine.

---

# 📂 Project Structure

| File | Role |
| :--- | :--- |
| `Main.cpp` | Entry point containing the menu-driven user interface. |
| `RecruitmentSystem.h/cpp` | The engine containing the core logic (Search, Sort, Delete, Apply). |
| `Job.h` | Blueprint for the Job node in the linked list. |
| `Applicant.h` | Blueprint for the Applicant node in the linked list. |

---

# 🚀 Installation & Usage

# 1. Clone the Repository
```bash
git clone [https://github.com/hamzabashir7786/Job-Recruitment-System.git](https://github.com/hamzabashir7786/Job-Recruitment-System.git)
