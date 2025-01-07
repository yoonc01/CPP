#include "Bureaucrat.hpp"
#include "Intern.hpp"

// #include <cstdlib>
// void leaks_check()
// {
// 	system("leaks intern");
// }

int main() {
	Intern intern;
	AForm* form;

	try {
		std::cout << "-- Bureaucrat 'A' grade '1'\n\n";
		Bureaucrat A("A", 1);
		std::cout << A << "\n\n";

		form = intern.makeForm("shrubbery creation", "michang1");
		if (form) {
			A.signForm(*form);
			A.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("robotomy request", "michang1");
		if (form) {
			A.signForm(*form);
			A.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("presidential pardon", "michang1");
		if (form) {
			A.signForm(*form);
			A.executeForm(*form);
			delete form;
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << "\n\n-- Bureaucrat 'B' grade '50'\n\n";
		Bureaucrat B("B", 50);
		std::cout << B << "\n\n";

		form = intern.makeForm("shrubbery creation", "michang2");
		if (form) {
			B.signForm(*form);
			B.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("robotomy request", "michang2");
		if (form) {
			B.signForm(*form);
			B.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("presidential pardon", "michang2");
		if (form) {
			B.signForm(*form);
			B.executeForm(*form);
			delete form;
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << "\n\n-- Bureaucrat 'C' grade '150'\n\n";
		Bureaucrat C("C", 150);
		std::cout << C << "\n\n";

		form = intern.makeForm("shrubbery creation", "michang3");
		if (form) {
			C.signForm(*form);
			C.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("robotomy request", "michang3");
		if (form) {
			C.signForm(*form);
			C.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("presidential pardon", "michang3");
		if (form) {
			C.signForm(*form);
			C.executeForm(*form);
			delete form;
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << "\n\n-- Bureaucrat 'D' grade '33'\n\n";
		Bureaucrat D("D", 33);
		std::cout << D << "\n\n";

		form = intern.makeForm("SHRUBBERY CREATION", "michang4");
		if (form) {
			D.signForm(*form);
			D.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("robotomyrequest", "michang4");
		if (form) {
			D.signForm(*form);
			D.executeForm(*form);
			delete form;
		}

		form = intern.makeForm("presidential pardon ", "michang4");
		if (form) {
			D.signForm(*form);
			D.executeForm(*form);
			delete form;
		}
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	// atexit(leaks_check);

	return (0);
}