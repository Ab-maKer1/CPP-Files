#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct Task {
    int id;
    string description;
    string status;
};

void saveToFile(const vector<Task>& tasks) {
    ofstream file("tasks.txt");
    for (const auto& task : tasks) {
        file << task.id << "," << task.description << "," << task.status << endl;
    }
    file.close();
}

vector<Task> loadFromFile() {
    vector<Task> tasks;
    ifstream file("tasks.txt");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string idStr, description, status;
        getline(ss, idStr, ',');
        getline(ss, description, ',');
        getline(ss, status, ',');
        tasks.push_back({stoi(idStr), description, status});
    }
    file.close();
    return tasks;
}

void addTask(vector<Task>& tasks, const string& description) {
    int id = tasks.empty() ? 1 : tasks.back().id + 1;
    tasks.push_back({id, description, "not done"});
    saveToFile(tasks);
}

void updateTask(vector<Task>& tasks, int id, const string& newDescription) {
    for (auto& task : tasks) {
        if (task.id == id) {
            task.description = newDescription;
            break;
        }
    }
    saveToFile(tasks);
}

void deleteTask(vector<Task>& tasks, int id) {
    tasks.erase(remove_if(tasks.begin(), tasks.end(), [id](const Task& task) { return task.id == id; }), tasks.end());
    saveToFile(tasks);
}

void markTask(vector<Task>& tasks, int id, const string& status) {
    for (auto& task : tasks) {
        if (task.id == id) {
            task.status = status;
            break;
        }
    }
    saveToFile(tasks);
}

void listTasks(const vector<Task>& tasks, const string& filter = "") {
    for (const auto& task : tasks) {
        if (filter.empty() || task.status == filter) {
            cout << "ID: " << task.id << ", Description: " << task.description << ", Status: " << task.status << endl;
        }
    }
}

void displayMenu() {
    cout << "Task Tracker Menu:" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Update Task" << endl;
    cout << "3. Delete Task" << endl;
    cout << "4. Mark Task" << endl;
    cout << "5. List All Tasks" << endl;
    cout << "6. List Done Tasks" << endl;
    cout << "7. List Not Done Tasks" << endl;
    cout << "8. List In Progress Tasks" << endl;
    cout << "9. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    vector<Task> tasks = loadFromFile();
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                string description;
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, description);
                addTask(tasks, description);
                break;
            }
            case 2: {
                int id;
                string description;
                cout << "Enter task ID to update: ";
                cin >> id;
                cout << "Enter new task description: ";
                cin.ignore();
                getline(cin, description);
                updateTask(tasks, id, description);
                break;
            }
            case 3: {
                int id;
                cout << "Enter task ID to delete: ";
                cin >> id;
                deleteTask(tasks, id);
                break;
            }
            case 4: {
                int id;
                string status;
                cout << "Enter task ID to mark: ";
                cin >> id;
                cout << "Enter new status (not done/in progress/done): ";
                cin.ignore();
                getline(cin, status);
                markTask(tasks, id, status);
                break;
            }
            case 5:
                listTasks(tasks);
                break;
            case 6:
                listTasks(tasks, "done");
                break;
            case 7:
                listTasks(tasks, "not done");
                break;
            case 8:
                listTasks(tasks, "in progress");
                break;
            case 9:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    } while (choice != 9);

    return 0;
}