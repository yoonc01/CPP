#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    :AForm("RobotomyRequestForm", "", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor" <<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    :AForm("RobotomyRequestForm", target,72, 45)
{
    std::cout << "RobotomyRequestForm parameterized constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
    :AForm(obj)
{
    std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj)
        AForm::operator=(obj) ;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    // 시드를 한 번만 설정하기 위한 static 변수
	static bool isSeedInitialized = false;

	AForm::checkExecutePermission(executor);
	std::cout << "*drilling noises*\n";
	if (!isSeedInitialized) {
		std::srand(static_cast<unsigned int>(std::time(0)));
		isSeedInitialized = true;
	}

	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully\n";
	else
		std::cout << getTarget() << " robotomization failed\n";
}