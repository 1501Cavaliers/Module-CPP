#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat Tim("Tim", 1);
    Bureaucrat Jim("Jim", 150);
    Bureaucrat Kim("Kim", 19);


    std::cout << "Bureaucrat " << Tim.getName() << " has a grade of " << Tim.getGrade() << std::endl;
    std::cout << "Bureaucrat " << Jim.getName() << " has a grade of " << Jim.getGrade() << std::endl;
    std::cout << "Bureaucrat " << Kim.getName() << " has a grade of " << Kim.getGrade() << std::endl;

    try
    {
        Tim.upgrade();
    }
    catch(Bureaucrat::GradeTooHighException)
    {
        std::cerr << "Grade too high" << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException)
    {
        std::cerr << "Grade too low" << std::endl;
    }
    
    try
    {
        Jim.downgrade();
    }
    catch(Bureaucrat::GradeTooHighException)
    {
        std::cerr << "Grade too high" << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException)
    {
        std::cerr << "Grade too low" << std::endl;
    }

    return (0);
}