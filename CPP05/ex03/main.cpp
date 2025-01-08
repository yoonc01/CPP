#include "Bureaucrat.hpp"
#include "Intern.hpp"

//누수 제대로 잡은 건지 확인
//signForm하다가 오류나면 누수 잡고 가는건가???

int main() {

	Intern intern;
	AForm* form = NULL;

	try {
		std::cout << "-- Bureaucrat 'A' grade '1'\n\n";
		Bureaucrat A("A", 1);
		std::cout << A << "\n\n";

		form = intern.makeForm("shrubbery creation", "hyoyoon1");
		std::cout << "\n";
		if (form) {
			A.signForm(*form);
			std::cout << "\n";
			A.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("robotomy request", "hyoyoon1");
		std::cout << "\n";
		if (form) {
			A.signForm(*form);
			std::cout << "\n";
			A.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("presidential pardon", "hyoyoon1");
		std::cout << "\n";
		if (form) {
			A.signForm(*form);
			std::cout << "\n";
			A.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		if (form) {
			delete form;
			form = NULL;
		}
	}

	try {
		std::cout << "\n\n-- Bureaucrat 'B' grade '50'\n\n";
		Bureaucrat B("B", 50);
		std::cout << B << "\n\n";

		form = intern.makeForm("shrubbery creation", "hyoyoon2");
		std::cout << "\n";
		if (form) {
			B.signForm(*form);
			std::cout << "\n";
			B.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("robotomy request", "hyoyoon2");
		std::cout << "\n";
		if (form) {
			B.signForm(*form);
			std::cout << "\n";
			B.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("presidential pardon", "hyoyoon2");
		std::cout << "\n";
		if (form) {
			B.signForm(*form);
			std::cout << "\n";
			B.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		if (form) {
			delete form;
			form = NULL;
		}
	}

	try {
		std::cout << "\n\n-- Bureaucrat 'C' grade '150'\n\n";
		Bureaucrat C("C", 150);
		std::cout << C << "\n\n";

		form = intern.makeForm("shrubbery creation", "hyoyoon3");
		std::cout << "\n";
		if (form) {
			C.signForm(*form);
			std::cout << "\n";
			C.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("robotomy request", "hyoyoon3");
		std::cout << "\n";
		if (form) {
			C.signForm(*form);
			std::cout << "\n";
			C.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("presidential pardon", "hyoyoon3");
		std::cout << "\n";
		if (form) {
			C.signForm(*form);
			std::cout << "\n";
			C.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		if (form) {
			delete form;
			form = NULL;
		}
	}

	try {
		std::cout << "\n\n-- Bureaucrat 'D' grade '33'\n\n";
		Bureaucrat D("D", 33);
		std::cout << D << "\n\n";

		form = intern.makeForm("SHRUBBERY CREATION", "hyoyoon4");
		std::cout << "\n";
		if (form) {
			D.signForm(*form);
			std::cout << "\n";
			D.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("robotomyrequest", "hyoyoon4");
		std::cout << "\n";
		if (form) {
			D.signForm(*form);
			std::cout << "\n";
			D.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}

		form = intern.makeForm("presidential pardon ", "hyoyoon4");
		std::cout << "\n";
		if (form) {
			D.signForm(*form);
			std::cout << "\n";
			D.executeForm(*form);
			std::cout << "\n";
			delete form;
			form = NULL;
			std::cout << "\n";
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		if (form) {
			delete form;
			form = NULL;
		}
	}

	return (0);
}