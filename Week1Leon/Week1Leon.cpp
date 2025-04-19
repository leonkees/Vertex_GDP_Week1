

#include <iostream>
#include <vector>

//int main()
//{
//	std::cout << "hola loco" << std::endl;
//	return 0;
//}


// TAREA: 
// 
// ask user for name and age and print to console
// 
// ask user for temp in celcius and converto to farenheit and print
// km to miles
// pounds to kilos
// dolar to euro

// create a vector of 4 float numbers
// calculate average and print
// there is and std function we can use, we need an include to do it, google it

// ask user to input 5 integers and store them in a vector
// print the sum of all integers
// find min and max (*std:: hay una para esto)
// ask user for a number and search to see if it is in the vector (there is an std function for this)



//int main()
//{
//	float celcius;
//	float faren;
//	
//	std::cout << "input temp in celcius:" << std::endl;
//	std::cin >> celcius;
//	std::cout << "la temp en farenheit es:";
//	std::cout << celcius * 9 / 5 + 32;
//
//	return 0;
//
//}





//int main()
//{
//	std::vector<float> numeros = { 10,15,3,22 };
//	//std::cout << "average of numbers is: " << (numeros.at(0)+numeros.at(1)+numeros.at(2)+numeros.at(3))/numeros.size();
//}


#include <numeric>

using namespace std;

//int main()
//{
//    vector<float> v;
//    int input;
//
//    cout << " Please enter numbers you want to find the mean of:" << endl;
//    while (cin >> input) {
//        v.push_back(input);
//    }
//
//    float average = accumulate(v.begin(), v.end(), 0.0) / v.size();
//    cout << "The average is " << average << endl;
//
//    return 0;
//
//}


	//int main()
	//{
	//	vector<int> v;
	//	int input;
	//	int i = 0;
	//
	//	cout << "Please enter 5 integer numbers: ";
	//	while (i < 5) {
	//		cin >> input;
	//		v.push_back(input);
	//		i++;
	//	}
	//
	//	int suma = accumulate(v.begin(), v.end(),0);
	//	cout << "la suma de todo es: " << suma;
	//
	//
	//	//para el MIN MAX podria iterar en loop por todos los elementos y compararlos al anterior tambien
	//
	//	int minimo = *min_element(v.begin(), v.end());
	//	cout << "el minimo es: " << minimo;
	//		
	//
	//}



//int main()
//{
//	vector<int> v;
//	int input;
//	int i = 0;
//
//	cout << "Please enter 5 integer numbers: ";
//	while (i < 5) {
//		cin >> input;
//		v.push_back(input);
//		i++;
//	}
//
//	int finder;
//	cout << "What number are you looking for? ";
//	cin >> finder;
//
//	if (find(v.begin(), v.end(), finder) != v.end())
//	{
//		cout << "number found!";
//	}
//	else
//		cout << "number not found ;(";
//	
//}





// SEGUNDA PARTE DE TAREA CHALLENGES




// MINI CHALLENGE: convert part 1 exercises to functions




//float CelsiustoFarenheit(int celsius)
//{
//	 return celsius * 9 / 5 + 32;
//}
//
//
//int main()
//{
//	float celcius;
//	float faren;
//	
//	std::cout << "input temp in celcius:" << std::endl;
//	std::cin >> celcius;
//	faren = CelsiustoFarenheit(celcius);
//	std::cout << "la temp en farenheit es:";
//	std::cout << faren;
//
//	return 0;
//
//}




// CHALLENGES PART 2


// A) ask user 5 integers, put in vector, use function to get max and print
// B) user input number, dont stop until 0 is pressed, use function to iterate every 2 numbers over vector and multiply by 2, print the numbers
// C) reverse a loop, any kind
// D) inputs width and height, until 0, calculate areas and sum them (HINT: use while(true) and break;)




// A)




//int MaximoEnVector(vector<int> v) {										
//	int j = 0;
//	int maximo = v[0];
//	while (j < v.size()) {
//
//		if (v[j] > maximo) {
//			maximo = v[j];
//		}
//		j++;
//	}
//	return maximo;
//}
//
// 
//int main()
//{
//	vector<int> v;
//	int input;
//	int i = 0;
//
//	cout << "Please enter 5 integer numbers: ";
//	while (i < 5) {
//		cin >> input;
//		v.push_back(input);
//		i++;
//	}
//
//
//	//int MaximoEnVector(v) { return										// SE ME COMPLICA PARA HACERLO FUNCION.... es que las funciones se definen AFUERA del MAIN
//	//	int j = 0;
//	//	int maximo = v[0];
//	//	while (j < v.size()) {
//
//	//		if (v[j] > maximo) {
//	//			maximo = v[j];
//	//		}
//	//		j++;
//	//	}
//	//}
//	cout << "the max value in the 5 inputed is: ";
//	cout << MaximoEnVector(v);	
//}



// B)


//void PrintSecondNumbersDoubled(vector<int> v) {
//	int j = 0;
//	while (j <= v.size()) {
//
//		if (j >= v.size())  break;
//		v[j] = v[j] * 2;
//		j++;
//		j++;
//	}
//	int n = 0;
//	for (int n : v) {											
//		cout << n << " ";
//	}
//}
//
//
//
//int main()
//{
//	vector<int> v;
//	int input=1;
//	
//
//	cout << "Please enter many integer numbers (input 0 to stop): ";
//	while (input!=0) {
//		
//			cin >> input;
//			if (input == 0)  break;							// ESTO ESTA RARO, tener que agregarlo a pesar del while?!!?
//			v.push_back(input);
//		
//	}
//
//	cout << "size vector is " << v.size() << endl;
//
//	//int j = 0;
//	//while (j <= v.size()) {
//	//	
//	//	if (j >= v.size())  break;							// ESTO ESTA RARO, tener que agregarlo a pesar del while?!!?
//	//	v[j] = v[j]*2;
//	//	j++;
//	//	j++;
//	//}
//
//	//int n = 0;
//	//	for (int n : v) {											// lo que rompia parece haber sido esto en realidad, que se salia del rango del vector
//	//		cout << n << " ";
//	//	}
//
//
//	PrintSecondNumbersDoubled(v);
//
//}


//		C) reverse loop


//int main()
//{
//	vector<int> v = {1, 2, 3, 4, 5};
//	
//	for (int i = v.size(); i--;) { cout << v[i] << " " << endl; }
//
//
//}




//  D)  inputs width and height, until 0, calculate areas and sum them (HINT: use while(true) and break;)



//int main()
//{
//	vector<int> v;
//	int input=1;
//	
//
//	cout << "Please enter many widths and then heights (input 0 to stop): ";
//	while (input!=0) {
//		cout << "Please enter a width: ";
//			cin >> input;
//			if (input == 0)  break;							
//			v.push_back(input);
//			cout << "Please enter a height: ";
//				cin >> input;
//				if (input == 0)   break; 
//			v.push_back(input);
//	}
//
//	cout << "size vector is " << v.size() << endl;
//
//	int j = 0;
//	int total = 0;
//	while (j < v.size()) {
//		
//		if (j >= v.size()-1)  break;							
//		total = total + v[j] * v[j+1];
//		j++;
//		j++;
//	}
//
//	cout << "total area is: "<< total;
//
//}






