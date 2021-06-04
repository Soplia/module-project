/** 
 *  @file   Student.cpp
 *  @brief  Student Class Head File
 *  @author SiM et JrX
 *  @date   2021-06-01 
 */

#include "student.h"

    /**
     * Constructor
     * @param name (string)
     * @param present, default true (bool)
     */
Student::Student(std::string name, bool present): m_name(name), m_present(present)
{

}

    /**
     * Get students' names
     */
std::string Student::name() const
{
    return m_name;
}

    /**
     * Set student's name
     * @param name (string)
     */
void Student::setName(const std::string &name)
{
    m_name = name;
}

    /**
     * Get the presentation status of a student
     */
bool Student::present() const
{
    return m_present;
}

    /**
     * Set the presentation status of a student
     * @param present (bool)
     */
void Student::setPresent(bool present)
{
    m_present = present;
}

    /**
     * Print students' info
     */
std::string Student::print() const
{
    std::string out = name() + " " + (present()?"true":"false");
    return out;
}

    /**
     * Get the number of students who present
     * @param students (vector)
     */
int Student::nb_presents(const std::vector<Student> &students)
{
    int n = 0;
    for(int i=1;i<students.size();i++)
        if(students.at(i).present())
            n++;
    return n;
}
