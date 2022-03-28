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

	return;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException(); // Exception plus pertinente
	else
		setTree();
	return ;
}

void ShrubberyCreationForm::setTree() {

	std::string file = setTarget() + "_shrubbery";
	std::ofstream outfile (file.c_str());

	outfile << "                           ,                                               
                              .&#      ,           *                            
                          ./%#, /#%#, %&#*/ ,( * * ,     .,                     
                        (/.( %#%#&&&(*(((*%,*// (.(   %*%/                      
                   , (/ //#(*%% .%%%(*.%%%&#(#/%((&/*#*&&%#(#/.*/&(             
              . *(   .(*#.&## (*#*/**&/(@##&&#*#&&%/@&&@&%@&/&%#&@%(#           
        */#(#(%*/@&#.*,.(*,%#&(%#/%%#(#%%&##/%&@&#&&%&&%**/@%&&&&%@%&%          
       ./*/#&%@@&&&(#%##%%%.,*%&%#(&%%%%##%%%@/@@&@*&@@&@%#@*&*#@&&&&%%(**      
       *# %/ %%@&((,//&/,,((./%#%@&&*&/%@%#&&//#%.,&(@ *&&*&#%. /%%#@&%&&%&#    
      #&/,# ,(//(//( #,(,%&*%##&&#&&%@@#@#%&%(&%##%*(&&&@(&%@&&&#@%&&#%@%%#% %  
  .(#*/*,%%%%%%.#,(#&#*(/%&/&#&##@/@# %@&#%,&&@%%&&@  #&@&/&%(&%##&%&@&@&@&#&   
   ///(%#&/#@&@&&&(((&%%(,%&@%%%&&@%%/&%%&%@@&%&&&&@#%#%*(@@@&##%&&&@&%%&%(/%   
        # *& &(# @&&&&@&//%%**&@&&#*(%. &(@&&&%%%(#%%/*((#@(& ###. ,#%&(%@%     
        %. %&* *,#,(%%#%/% #&(%*&@(#(#*(%(#*(#%#/(##&/&%(#%*    %@&@*&,&&(   (  
          ,(%*%&%*.#,*(#/.##@&%/#&& @*(/&%(&#%%&&(%#@#&@(@  %&@%&#@@% %&&#      
          *#,*.,(#((%,.%%,%&.*%%%%&#@#((&#%%&%@&& (##/@%%@ */ &&@%@             
        //*/,%##@##@%%%&@&&%%&%*%%%#&#&%@%(/&&@.@(% &%%@&%@&@@%&@  &%           
     //*##*&%#*/#%# @@&@#&%%&.@& .%&&%%%&&@@&#%(&@&&%&#%@@#&@&#@&               
    */%,,((#*#%#((&#@(% @# % &#&%@@@ &@ #@&%&%%@@#&&%#%&&&#@&&%@##/,            
           *&&/(&%%  .   & /&&&@&* @ @&&@&&@&&&&&   * %@&%@&&&@@(%%#(           
             %. .%         .%&%%%&%&@ @%@*%%&&&%&@ #&(%@(&@%&&,#&&%             
                          %*&(%/&&&&@&&@#*  %&%(&&* .%    ( (,%&&%              
                               % & #&#%&@@&    &,                               
                                 %&/%&&@                                        
                                   #&&@                                         
                                   %&&@                                         
                                   (%%&                                         
                                   %%%&                                         
                                   %%%%                                         
                              ...,(#(//#/#*,.   ";
	return ;
}


ShrubberyCreationForm::~ShrubberyCreationForm ( void ) {

	return ;
}