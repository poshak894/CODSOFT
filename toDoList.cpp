#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string title;
    bool isDone = false;
};

void showTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks added yet.\n";
        return;
    }

    cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].title;
        cout << " [" << (tasks[i].isDone ? "Done" : "Pending") << "]\n";
    }
}

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        cout << "\n--- To-Do Menu ---\n";
        cout << "1. Add Task\n2. View Tasks\n3. Mark as Done\n4. Delete Task\n5. Exit\nChoose an option: ";
        cin >> choice;

        if (choice == 1) {
            Task newTask;
            cout << "Enter task title: ";
            cin.ignore();
            getline(cin, newTask.title);
            tasks.push_back(newTask);
        } else if (choice == 2) {
            showTasks(tasks);
        } else if (choice == 3) {
            int index;
            cout << "Task number to mark done: ";
            cin >> index;
            if (index > 0 && index <= static_cast<int>(tasks.size())) {
                tasks[index - 1].isDone = true;
            } else {
                cout << "Invalid index.\n";
            }
        } else if (choice == 4) {
            int index;
            cout << "Task number to delete: ";
            cin >> index;
            if (index > 0 && index <= static_cast<int>(tasks.size())) {
                tasks.erase(tasks.begin() + index - 1);
            } else {
                cout << "Invalid index.\n";
            }
        } else if (choice == 5) {
            cout << "Exiting To-Do List. Have a productive day!\n";
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}