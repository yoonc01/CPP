#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    :AForm("ShrubberyCreationForm", "", 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    :AForm("ShrubberyCreationForm", target, 145, 137)
{
    std::cout << "ShrubberyCreationForm parameterized constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
    :AForm(obj)
{
    std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj)
        AForm::operator=(obj) ;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	std::ofstream fout;

	AForm::checkExecutePermission(executor);
	fout.open((getTarget() + "_shrubbery").c_str());
	if (!fout.is_open())
		throw AForm::FileNotOpenException();
	fout << "                           SDFSDFDS\n";
	fout << "                SDF    SDFSDFDSFFSDSDFSDF\n";
	fout << "             DSFDSFDSFSDJKLFNKLOJRNGJIONDFSKLFSDJL\n";
	fout << "           DSFSDFSDFEWRFJSDKNFKLDSMGIOJGHNORJUEN GKOJSDF\n";
	fout << "          DDSFDSFSDFSDFDSFFFKKKIEWIOJF34312414FHDUSIFFFSQ\n";
	fout << "           DSDFSDFSDSSDFSDFSDFDSFDSFSDFSDFDSFSDFDSFSDSF\n";
	fout << "     SDFD   DSFSDFSDF         SDFDSFSDFSDFSDFDSFSDFSDF\n";
	fout << "  SDFSDFDSFDSF  SDFSDFDS            SDFDSDF    DF\n";
	fout << "SDFDSFSDFSDFSDF DFSDFSDSDF\n";
	fout << "SDFSDFSDFSDFMLKDSSDFDSFSDFSD        D   DD\n";
	fout << "  DSFDSFSDFSDFSDD  DSFSDFS         SDFSDFSD   FSDF\n";
	fout << "    DFSFSDF       DFSDFSDFSFDSDF  DSFDSFSDFSDFDSFDSFSDF\n";
	fout << "      DDF        DSFSDFS+FDSSD       DSFSDFKJLNMSLKFFDS\n";
	fout << "                SDFSDFSDF+DFSDFDS         SDFSDFSDKLFJ\n";
	fout << "         sFDSFSDFDSFSDFSDF+FSDFSDFSD      KFFSDFSDF\n";
	fout << "       DSFFSDFSDFSDFJKSDL+   LNJNKJDSF    JKLFJSDKLFJSDKLFJ\n";
	fout << "      SDFSDFSDGDSGDSJIKO         FDSFDSFSD SKDJFKLSDJFKFKLSDJ\n";
	fout << "     SDFSDFSDFD  SDFSD            SDFDSFFSDFSDJKLFJDSKLFJSDKLJF   F\n";
	fout << "      DSFFSDDSF  DSFD                 DSFDSDFF SDFKSDJKKLFJSDKLFJSDKL\n";
	fout << "                                          DSFSDSDF   SDJFKJSFKLJSDLSDF\n";
	fout << "                                            DSFSDF        SDFSDFSDFJKLS\n";
	fout << "                                            SDFSDF               SDFSD\n";
	fout << "                                           SDFSDFF\n";
	fout << "                                          FDSSDFSD\n";
	fout << "                                         FSDFSDF\n";
	fout << "                                      SDFSDFSDF\n";
	fout << "                                     SDFSDFSD\n";
	fout << "                                    SDFDSFSD\n";
	fout << "                                 SDFDSFSD\n";
	fout << "                               SDFDSFSD\n";
	fout << "                              SDFDSFSDFD\n";
	fout << "                          SDFSDFDSFSDFSDFSDFSDF\n";
	fout << "            MLSDKFNMKLSDNMFKLSDJFKLSDJFKLSDJFKLSDJFFSDKLJ\n";
	fout << "        SDFSDDL:FJML:DSKFL:SDKFL:SDKFL:SDKFL:SDKFL:DSKFL:SDK\n";
	fout << "       DSKOSJFJKLSDJKKFLSDJLKFJSDKLFJMSDKLFJMSDKLFJMDKLSFJMSDD\n";
	fout << "       DFSFDSKLFJMKLERWMKLMEWKLFMKL:SDM<FL:SDM<FL:SDM<FL:SDMFD\n";
	fout << "         DFSDKLJFKLSDJFKLSDJFLKSDJFKLDSJFKLSDJFKLSDJFLKSDJF\n";
	fout << "         DDFSKLFJSDKLFJSDKLFJKLSDJFLSD:JFKLDSJFKL:SDJFLKSDJ\n";
	fout << "          SDFJKSDJFLKSDJFKLDSJFLKSDJFKLSDJFKLSDJFKLDSJFLKD\n";
	fout << "          DSFSDKLPFJPWEKLMFLPSDKMPFLKD<SLPFKSDLPKFDLPSKDFS\n";
	fout << "           SDJKLFJDKLSFJDKLSJFKLSDJFKLSDJFKLSDJFKLSDJFKLJ\n";
	fout << "           SDJKLFJDKLSFJDKLSJFKLSDJFKLSDJFKLSDJFKLSDJFKLJ\n";
	fout << "            IKDSFJKLSDJFKSDJFIKOWEMFOKDMSKOFMSDOKFMSDOF\n";
	fout << "            IKDSFJKLSDJFKSDJFIKOWEMFOKDMSKOFMSDOKFMSDOF\n";
	fout << "             IKDSFJKL:SDJFKLSDJFKLSDJFKLDJSFKLDJSFKLSD\n";
	fout << "             IKDSFJKL:SDJFKLSDJFKLSDJFKLDJSFKLDJSFKLSD\n";
	fout.close();
}