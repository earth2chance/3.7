//Chance Daily
//4-13-17

#include <iostream>
#include <string>

int main(){

	double sideA, sideB, sideC, area, perimeter, height;
	std::string stop, triangle;

	do{
		std::cout << "What type of triangle do you have? (Right, Isosceles, or Equilateral?) ";
		std::cin >> triangle;

		std::cout << "What is the length of side A? ";
		std::cin >> sideA;

		std::cout << "What is the length of side B? ";
		std::cin >> sideB;
		
		if (triangle == "Right" || triangle == "right"){
			sideC = sqrt((sideA * sideA) + (sideB * sideB));
			area = sideA * sideB;
			perimeter = (sideA * 2) + (sideB * 2);
			std::cout << "Side C = " << sideC << std::endl;
			std::cout << "Area of Right Triangle = " << area << std::endl;
			std::cout << "Perimeter of Right Triangle = " << perimeter << std::endl;
		}
		if (triangle == "Isosceles" || triangle == "isosceles"){
			height = sqrt((sideB * sideB) - (((sideA * sideA) / 4)));
			area = ((sideA * height) / 2);
			perimeter = ((sideA  + sideB) * 2);
			std::cout << "Height of Isosceles Triangle = " << height << std::endl;
			std::cout << "Area of Isosceles Triangle = " << area << std::endl;
			std::cout << "Perimeter of Isosceles Triangle = " << perimeter << std::endl;
		}
		if (triangle == "Equilateral" || triangle == "equilateral"){
			height = (((sqrt(3))*sideA) / 2);
			area = ((sideA * height) / 2);
			perimeter = (3 * sideA);
			std::cout << "Height of Equilateral Triangle = " << sideC << std::endl;
			std::cout << "Area of Equilateral Triangle = " << area << std::endl;
			std::cout << "Perimeter of Equilateral Triangle = " << perimeter << std::endl;
		}


		std::cout << "Would you like to stop the program? ";
		std::cin >> stop;
	} while (stop == "no" || stop == "No" || stop == "N" || stop == "n");

}