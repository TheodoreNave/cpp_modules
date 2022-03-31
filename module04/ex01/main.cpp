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
			std::cout << "pet = " << pet[i]->getType() << std::endl;
			i++;
		}
		i = 0;
		while (i < 10)
		{
			pet[i++]->makeSound();
			pet[i++]->makeSound();
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
		Animal *cat = new Cat();


		cat->setIdeas("cat want to play");
		cat->printIdeas();

		dog->setIdeas("dog wanna sleep");
		dog->printIdeas();

		// std::cout << std::endl;
		delete dog;
		delete cat;

	}

	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;

		return 0;
	}

}