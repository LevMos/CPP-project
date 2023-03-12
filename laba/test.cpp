#include <iostream>
#include <string>
using namespace std;

struct Respondent {
    int age;
    char gender;
    string education;
    bool answer;
    Respondent* next;
    Respondent* prev;
};

void addRespondent(Respondent** head_ref, Respondent** tail_ref) {
    Respondent* new_node = new Respondent();
    cout << "Enter respondent's age: ";
    cin >> new_node->age;
    cout << "Enter respondent's gender (M/F): ";
    cin >> new_node->gender;
    cout << "Enter respondent's education level (primary/middle/high): ";
    cin >> new_node->education;
    cout << "Enter respondent's answer (1 for YES, 0 for NO): ";
    cin >> new_node->answer;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        *tail_ref = new_node;
    }
    else {
        (*tail_ref)->next = new_node;
        new_node->prev = *tail_ref;
        *tail_ref = new_node;
    }
}

int countMaleOver40WithHigherEducationAnsweredYes(Respondent* head) {
    int count = 0;
    Respondent* curr = head;
    while (curr != NULL) {
        if (curr->gender == 'M' && curr->age > 40 && curr->education == "high" && curr->answer == true) {
            count++;
        }
        curr = curr->next;
    }
    return count;
}

int countFemaleUnder30WithMiddleEducationAnsweredNo(Respondent* head) {
    int count = 0;
    Respondent* curr = head;
    while (curr != NULL) {
        if (curr->gender == 'F' && curr->age < 30 && curr->education == "middle" && curr->answer == false) {
            count++;
        }
        curr = curr->next;
    }
    return count;
}

int countMaleUnder25WithPrimaryEducationAnsweredYes(Respondent* head) {
    int count = 0;
    Respondent* curr = head;
    while (curr != NULL) {
        if (curr->gender == 'M' && curr->age < 25 && curr->education == "primary" && curr->answer == true) {
            count++;
        }
        curr = curr->next;
    }
    return count;
}

void printAllRespondents(Respondent* head) {
    Respondent* curr = head;
    while (curr != NULL) {
        cout << "Age: " << curr->age << endl;
        cout << "Gender: " << curr->gender << endl;
        cout << "Education level: " << curr->education << endl;
        cout << "Answer: " << (curr->answer ? "YES" : "NO") << endl << endl;
        curr = curr->next;
    }
}

int main() {
Respondent* head = NULL;
Respondent* tail = NULL;
int choice = 0;
do {
cout << "Enter your choice:\n1. Add respondent\n2. Count male respondents over 40 with higher education who answered YES\n3. Count female respondents under 30 with middle education who answered NO\n4. Count male respondents under 25 with primary education who answered YES\n5. Print all respondents\n6. Exit\n";
cin >> choice;
switch (choice) {
case 1:
addRespondent(&head, &tail);
break;
case 2:
cout << "Number of male respondents over 40 with higher education who answered YES: " << countMaleOver40WithHigherEducationAnsweredYes(head) << endl;
break;
case 3:
cout << "Number of female respondents under 30 with middle education who answered NO: " << countFemaleUnder30WithMiddleEducationAnsweredNo(head) << endl;
break;
case 4:
cout << "Number of male respondents under 25 with primary education who answered YES: " << countMaleUnder25WithPrimaryEducationAnsweredYes(head) << endl;
break;
case 5:
printAllRespondents(head);
break;
case 6:
cout << "Exiting program...";
break;
default:
cout << "Invalid choice, please try again.\n";
break;
}
} while (choice != 6);
return 0;
}