/** 
 *  @file   Student.h
 *  @brief  Student Class Head File
 *  @author SiM et JrX
 *  @date   2021-06-01 
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

/**
* @class Student
* Student class, four methods et two atts
*/
class Student
{
public:
    /**
     * Constructor
     * @param name (string)
     * @param present, default true (bool)
     */
    Student(std::string name, bool present = true);
    
    /**
     * Get students' names
     */
    std::string name() const;

    /**
     * Set student's name
     * @param name (string)
     */
    void setName(const std::string &name);

    /**
     * Get the presentation status of a student
     */
    bool present() const;

    /**
     * Set the presentation status of a student
     * @param present (bool)
     */
    void setPresent(bool present);
    
    /**
     * Print students' info
     */
    std::string print() const;

    /**
     * Get the number of students who present
     * @param students (vector)
     */
    static int nb_presents( const std::vector<Student> &students );

private:
    std::string m_name; ///student's name
    bool m_present = true; ///whether student present or not
};

#endif // STUDENT_H
