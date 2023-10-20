#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Task {
public:
    std::string title;
    int priority;
    std::string dueDate;
    std::vector<std::string> tags;

    Task(const std::string& t, int p, const std::string& date) : title(t), priority(p), dueDate(date) {}

    void addTag(const std::string& tag) {
        tags.push_back(tag);
    }
};


class TaskList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void removeTask(const Task& task) {
      
    }

    void searchByDate(const std::string& date) {
        
    }

    void searchByPriority(int priority) {
       
    }

    void searchByTag(const std::string& tag) {
        
    }
};


class TaskListStorage {
private:
    TaskList taskList;
    TaskListStorage() {} 

public:
    static TaskListStorage& getInstance() {
        static TaskListStorage instance;
        return instance;
    }

    TaskList& getTaskList() {
        return taskList;
    }
};


class FileHandler {
public:
    static void saveTaskListToFile(const TaskList& taskList, const std::string& filename) {
        
    }

    static TaskList loadTaskListFromFile(const std::string& filename) {
        TaskList taskList;
        
        return taskList;
    }
};

int main() {
    TaskList& taskList = TaskListStorage::getInstance().getTaskList();

    Task task1("Задача 1", 1, "2023-10-20");
    task1.addTag("Важливо");
    task1.addTag("Робота");

    Task task2("Задача 2", 2, "2023-10-22");
    task2.addTag("Особисте");
    task2.addTag("Дозвілля");

    taskList.addTask(task1);
    taskList.addTask(task2);

    FileHandler::saveTaskListToFile(taskList, "tasks.txt");

    TaskList loadedTaskList = FileHandler::loadTaskListFromFile("tasks.txt");

    

    return 0;
}
