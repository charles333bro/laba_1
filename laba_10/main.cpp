#include <iostream>
#include <list>
#include <cmath>

using namespace std;

struct Node {
    int data;
    Node* next;
};

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void insert(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void freeList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void sortDescendingByLastDigit(list<int>& numbers) {
    numbers.sort([](int a, int b) {
        return (a % 10) > (b % 10);
    });
}

int main() {
    Node* head = nullptr;
    int n, value;
    
    cout << "Введите количество чисел: ";
    cin >> n;

    cout << "Введите последовательность натуральных чисел: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        insert(head, value);
    }

    bool hasThreeStarting = false;
    Node* current = head;

    while (current) {
        if (to_string(current->data).front() == '3') {
            hasThreeStarting = true;
            break;
        }
        current = current->next;
    }

    if (!hasThreeStarting) {
        list<int> numbers;
        current = head;
        while (current) {
            numbers.push_back(current->data);
            current = current->next;
        }
        sortDescendingByLastDigit(numbers);
        cout << "Упорядоченная последовательность по невозрастанию последней цифры: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        Node* newHead = nullptr;
        current = head;
        while (current) {
            if (current->data % 2 != 0 || current->data == 2) {
                insert(newHead, current->data);
                if (isPrime(current->data)) {
                    insert(newHead, current->data); // Дублирование простых чисел
                }
            }
            current = current->next;
        }
        cout << "Обновленная последовательность: ";
        printList(newHead);
        freeList(newHead);
    }

    freeList(head);
    return 0;
}