#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
        void set_age(int age1)
            {
            age = age1;
        }
         void set_standard(int standard1)
            {
            standard = standard1;
        }
    void set_first_name(string first_name1)
            {
            first_name = first_name1;
        }
    void  set_last_name(string last_name1)
            {
            last_name = last_name1;
        }
    int get_age()
        {
        return age;
    }
    int  get_standard()
        {
        return standard;
    }
    string get_first_name()
        {
        return first_name;
    }
    string get_last_name()
        {
        return last_name;
    }
    void to_string()
        {
         cout << age << "," << first_name << ","<< last_name << ","  << standard;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();

    return 0;
}
