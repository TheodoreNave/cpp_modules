#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	{
		// const AAnimal wolf();
		// const AAnimal wolf("theo");
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();



		delete j;//should not create a leak
		delete i;

	}
	{
		int i = 0;
		const AAnimal *pet[10];

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
			delete pet[i];
			i++;
		}
		const AAnimal* dog = new Cat();
		std::cout << dog->getType() << " " << std::endl;
		dog->makeSound();
		delete dog;
	}
}