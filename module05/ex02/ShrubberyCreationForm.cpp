#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("default_shrub", 145, 137) {

	this->setTarget("Jardin");
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm ( std::string target ) : AForm("ShrubberyCreationForm", 145, 137) {

	this->setTarget(target);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src)  : AForm("default_shrub", 145, 137) {

	*this = src;
	return;
}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
		setTree();
	return false ;
}

void ShrubberyCreationForm::setTree() const {

	std::string file = getTarget() + "_shrubbery";
	std::ofstream outfile (file.c_str());

	outfile << "                           ,                                               " << std::endl
  << 	"                           .&#      ,           *                            "<< std::endl
 << "                         ./%#, /#%#, %&#*/ ,( * * ,     .,                     "<< std::endl
 << "                       (/.( %#%#&&&(*(((*%,*// (.(   %*%/                      "<< std::endl
 << "                  , (/ //#(*%% .%%%(*.%%%&#(#/%((&/*#*&&%#(#/.*/&(             "<< std::endl
 << "             . *(   .(*#.&## (*#*/**&/(@##&&#*#&&%/@&&@&%@&/&%#&@%(#           "<< std::endl
 << "       */#(#(%*/@&#.*,.(*,%#&(%#/%%#(#%%&##/%&@&#&&%&&%**/@%&&&&%@%&%          "<< std::endl
 << "      ./*/#&%@@&&&(#%##%%%.,*%&%#(&%%%%##%%%@/@@&@*&@@&@%#@*&*#@&&&&%%(**      "<< std::endl
 << "      *# %/ %%@&((,//&/,,((./%#%@&&*&/%@%#&&//#%.,&(@ *&&*&#%. /%%#@&%&&%&#    "<< std::endl
 << "     #&/,# ,(//(//( #,(,%&*%##&&#&&%@@#@#%&%(&%##%*(&&&@(&%@&&&#@%&&#%@%%#% %  "<< std::endl
 << " .(#*/*,%%%%%%.#,(#&#*(/%&/&#&##@/@# %@&#%,&&@%%&&@  #&@&/&%(&%##&%&@&@&@&#&   "<< std::endl
 << "  ///(%#&/#@&@&&&(((&%%(,%&@%%%&&@%%/&%%&%@@&%&&&&@#%#%*(@@@&##%&&&@&%%&%(/%   "<< std::endl
 << "       # *& &(# @&&&&@&//%%**&@&&#*(%. &(@&&&%%%(#%%/*((#@(& ###. ,#%&(%@%     "<< std::endl
 << "       %. %&* *,#,(%%#%/% #&(%*&@(#(#*(%(#*(#%#/(##&/&%(#%*    %@&@*&,&&(   (  "<< std::endl
 << "         ,(%*%&%*.#,*(#/.##@&%/#&& @*(/&%(&#%%&&(%#@#&@(@  %&@%&#@@% %&&#      "<< std::endl
 << "         *#,*.,(#((%,.%%,%&.*%%%%&#@#((&#%%&%@&& (##/@%%@ */ &&@%@             "<< std::endl
 << "       /*/,%##@##@%%%&@&&%%&%*%%%#&#&%@%(/&&@.@(% &%%@&%@&@@%&@  &%           "<< std::endl
 << "    /*##*&%#*/#%# @@&@#&%%&.@& .%&&%%%&&@@&#%(&@&&%&#%@@#&@&#@&               "<< std::endl
 << "   */%,,((#*#%#((&#@(% @# % &#&%@@@ &@ #@&%&%%@@#&&%#%&&&#@&&%@##/,            "<< std::endl
 << "          *&&/(&%%  .   & /&&&@&* @ @&&@&&@&&&&&   * %@&%@&&&@@(%%#(           "<< std::endl
 << "            %. .%         .%&%%%&%&@ @%@*%%&&&%&@ #&(%@(&@%&&,#&&%             "<< std::endl
 << "                         %*&(%/&&&&@&&@#*  %&%(&&* .%    ( (,%&&%              "<< std::endl
 << "                              % & #&#%&@@&    &,                               "<< std::endl
 << "                                %&/%&&@                                        "<< std::endl
 << "                                  #&&@                                         "<< std::endl
 << "                                  %&&@                                         "<< std::endl
 << "                                  (%%&                                         "<< std::endl
 << "                                  %%%&                                         "<< std::endl
 << "                                  %%%%                                         "<< std::endl
 << "                            ...,(#(//#/#*,.   "								<< std::endl;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {

	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void ) {

	return ;
}