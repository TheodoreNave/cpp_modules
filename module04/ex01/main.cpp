#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	{
		int i;
		const Animal *pet[10];

		i = 0;
		while (i < 10)
		{
			pet[i++] = new Dog();
			pet[i++] = new Cat();
		}
		i = 0;
		while (i < 10)
		{
			delete pet[i];
			i++;
		}
	}

	{
		Animal *dog = new Dog();
		dog->setIdeas("cozy");
		dog->printIdeas();
		delete dog;

	}

	{

		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;

		return 0;
	}

}