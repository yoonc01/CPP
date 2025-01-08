
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	try {
		std::cout << "--- Bureaucrat 'A' grade '1'\n\n";
		Bureaucrat A("A", 1);
		std::cout << A << "\n\n";

		ShrubberyCreationForm shrubberyForm("hyoyoon1");
		std::cout << '\n';
		RobotomyRequestForm roboForm1("hyoyoon1");
		RobotomyRequestForm roboForm2("hyoyoon1");
		RobotomyRequestForm roboForm3("hyoyoon1");
		std::cout << '\n';
		PresidentialPardonForm PardonForm("hyoyoon1");

		std::cout << '\n';

		A.signForm(shrubberyForm);
		std::cout << "\n";
		A.signForm(roboForm1);
		A.signForm(roboForm2);
		A.signForm(roboForm3);
		std::cout << "\n";
		A.signForm(PardonForm);

		std::cout << '\n';

		A.executeForm(shrubberyForm);
		std::cout << "\n";
		A.executeForm(roboForm1);
		A.executeForm(roboForm2);
		A.executeForm(roboForm3);
		std::cout << "\n";
		A.executeForm(PardonForm);
		std::cout << '\n';
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << "\n\n--- Bureaucrat 'B' grade '50'\n\n";
		Bureaucrat B("B", 50);
		std::cout << B << "\n\n";

		ShrubberyCreationForm shrubberyForm("hyoyoon2");
		std::cout << '\n';
		RobotomyRequestForm roboForm1("hyoyoon2");
		RobotomyRequestForm roboForm2("hyoyoon2");
		RobotomyRequestForm roboForm3("hyoyoon2");
		std::cout << '\n';
		PresidentialPardonForm PardonForm("hyoyoon2");

		std::cout << '\n';

		B.signForm(shrubberyForm);
		std::cout << '\n';
		B.signForm(roboForm1);
		B.signForm(roboForm2);
		B.signForm(roboForm3);
		std::cout << '\n';
		B.signForm(PardonForm);

		std::cout << '\n';

		B.executeForm(shrubberyForm);
		std::cout << '\n';
		B.executeForm(roboForm1);
		B.executeForm(roboForm2);
		B.executeForm(roboForm3);
		std::cout << '\n';
		B.executeForm(PardonForm);
		std::cout << '\n';
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << "\n\n--- Bureaucrat 'C' grade '150'\n\n";
		Bureaucrat C("C", 150);
		std::cout << C << "\n\n";

		ShrubberyCreationForm shrubberyForm("hyoyoon3");
		std::cout << '\n';
		RobotomyRequestForm roboForm1("hyoyoon3");
		RobotomyRequestForm roboForm2("hyoyoon3");
		RobotomyRequestForm roboForm3("hyoyoon3");
		std::cout << '\n';
		PresidentialPardonForm PardonForm("hyoyoon3");

		std::cout << '\n';

		C.signForm(shrubberyForm);
		std::cout << '\n';
		C.signForm(roboForm1);
		C.signForm(roboForm2);
		C.signForm(roboForm3);
		std::cout << '\n';
		C.signForm(PardonForm);

		std::cout << '\n';

		C.executeForm(shrubberyForm);
		std::cout << '\n';
		C.executeForm(roboForm1);
		C.executeForm(roboForm2);
		C.executeForm(roboForm3);
		std::cout << '\n';
		C.executeForm(PardonForm);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	return (0);
}