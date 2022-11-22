#include "Comida.h"
Comida::Comida(string foodAndServing, int calories, int caloriesfromFat, double totalFatG, double totalFatDv, int sodiumG, double sodiumDv, int potassiumG,
	double potassiumDv, int totalCarboHydrateG, double totalCarboHydrateDv, int dietaryFiberG, double dietaryFiberDv, int sugarsG, int proteinG, double vitaminADv,
	double vitaminCDv, double calciumDv, double eeironeeDv, double saturatedFatDv, int saturatedFatMgE, double choleSterolDv,
	int choleSterolMgE, string foodType)
{
	this->food_and_serving = foodAndServing;
	this->calories = calories;
	this->caloriesfrom_fat = caloriesfromFat;
	this->total_fat_g = totalFatG;
	this->total_fat_dv = totalFatDv;
	this->sodium_g = sodiumG;
	this->sodium_dv = sodiumDv;
	this->potassium_g = potassiumG;
	this->potassium_dv = potassiumDv;
	this->total_carbo_hydrate_g = totalCarboHydrateG;
	this->total_carbo_hydrate_dv = totalCarboHydrateDv;
	this->dietary_fiber_g = dietaryFiberG;
	this->dietary_fiber_dv = dietaryFiberDv;
	this->sugars_g = sugarsG;
	this->protein_g = proteinG;
	this->vitamin_a_dv = vitaminADv;
	this->vitamin_c_dv = vitaminCDv;
	this->calcium_dv = calciumDv;
	this->eeironee_dv = eeironeeDv;
	this->saturated_fat_dv = saturatedFatDv;
	this->saturated_fat_mg_e = saturatedFatMgE;
	this->chole_sterol_dv = choleSterolDv;
	this->chole_sterol_mg_e = choleSterolMgE;
	this->food_type = foodType;
}
// get
string Comida::get_food_and_serving()
{
	return food_and_serving;
}

int Comida::get_calories()
{
	return calories;
}

int Comida::get_caloriesfrom_fat()
{
	return caloriesfrom_fat;
}

double Comida::get_total_fat_g()
{
	return total_fat_g;
}

double Comida::get_total_fat_dv()
{
	return total_fat_dv;
}

int Comida::get_sodium_g()
{
	return sodium_g;
}

double Comida::get_sodium_dv()
{
	return sodium_dv;
}

int Comida::get_potassium_g()
{
	return potassium_g;
}

double Comida::get_potassium_dv()
{
	return potassium_dv;
}

int Comida::get_total_carbo_hydrate_g()
{
	return total_carbo_hydrate_g;
}

double Comida::get_total_carbo_hydrate_dv()
{
	return total_carbo_hydrate_dv;
}

int Comida::get_dietary_fiber_g()
{
	return dietary_fiber_g;
}

double Comida::get_dietary_fiber_dv()
{
	return dietary_fiber_dv;
}

int Comida::get_sugars_g()
{
	return 0;
}

int Comida::get_protein_g()
{
	return protein_g;
}

double Comida::get_vitamin_a_dv()
{
	return vitamin_a_dv;
}

double Comida::get_vitamin_c_dv()
{
	return vitamin_c_dv;
}

double Comida::get_calcium_dv()
{
	return calcium_dv;
}

double Comida::get_eeironee_dv()
{
	return eeironee_dv;
}

double Comida::get_saturated_fat_dv()
{
	return saturated_fat_dv;
}

int Comida::get_saturated_fat_mg_e()
{
	return saturated_fat_mg_e;
}

double Comida::get_chole_sterol_dv()
{
	return chole_sterol_dv;
}

int Comida::get_chole_sterol_mg_e()
{
	return chole_sterol_mg_e;
}

string Comida::get_food_type()
{
	return food_type;
}
// set
void Comida::set_food_and_serving(string valor)
{
	food_and_serving = valor;
}

void Comida::set_calories(int valor)
{
	calories = valor;
}

void Comida::set_caloriesfrom_fat(int valor)
{
	caloriesfrom_fat = valor;
}

void Comida::set_total_fat_g(double valor)
{
	total_fat_g = valor;
}

void Comida::set_total_fat_dv(double valor)
{
	total_fat_dv = valor;
}

void Comida::set_sodium_g(int valor)
{
	sodium_g = valor;
}

void Comida::set_sodium_dv(double valor)
{
	sodium_dv = valor;
}

void Comida::set_potassium_g(int valor)
{
	potassium_g = valor;
}

void Comida::set_potassium_dv(double valor)
{
	potassium_dv = valor;
}

void Comida::set_total_carbo_hydrate_g(int valor)
{
	total_carbo_hydrate_g = valor;
}

void Comida::set_total_carbo_hydrate_dv(double valor)
{
	total_carbo_hydrate_dv = valor;
}

void Comida::set_dietary_fiber_g(int valor)
{
	dietary_fiber_g = valor;
}

void Comida::set_dietary_fiber_dv(double valor)
{
	dietary_fiber_dv = valor;
}

void Comida::set_sugars_g(int valor)
{
	sugars_g = valor;
}

void Comida::set_protein_g(int valor)
{
	protein_g = valor;
}

void Comida::set_vitamin_a_dv(double valor)
{
	vitamin_a_dv = valor;
}

void Comida::set_vitamin_c_dv(double valor)
{
	vitamin_c_dv = valor;
}

void Comida::set_calcium_dv(double valor)
{
	calcium_dv = valor;
}

void Comida::set_eeironee_dv(double valor)
{
	eeironee_dv = valor;
}

void Comida::set_saturated_fat_dv(double valor)
{
	saturated_fat_dv = valor;
}

void Comida::set_saturated_fat_mg_e(int valor)
{
	saturated_fat_mg_e = valor;
}

void Comida::set_chole_sterol_dv(double valor)
{
	chole_sterol_dv = valor;
}

void Comida::set_chole_sterol_mg_e(int valor)
{
	chole_sterol_mg_e = valor;
}

void Comida::set_food_type(string valor)
{
	food_type = valor;
}

void Comida::tabela_nutricional()
{
	cout << "::Tabela nutricional::" << endl;
	cout << "Food and Serving: " << food_and_serving << endl;
	cout << "Calories: " << calories << endl;
	cout << "Calories From Fat: " << caloriesfrom_fat << endl;
	cout << "Total Fat G: " << total_fat_g << endl;
	cout << "Total Fat DV: " << total_fat_dv << endl;
	cout << "Sodium G: " << sodium_g << endl;
	cout << "Sodium DV: " << sodium_dv << endl;
	cout << "Potassium G: " << potassium_g << endl;
	cout << "Potassium DV: " << potassium_dv << endl;
	cout << "Total Carbo Hydrate G: " << total_carbo_hydrate_g << endl;
	cout << "Total Carbo Hydrate DV: " << total_carbo_hydrate_dv << endl;
	cout << "Dietary Fiber G: " << dietary_fiber_g << endl;
	cout << "Dietary Fiber DV: " << dietary_fiber_dv << endl;
	cout << "Sugars G: " << sugars_g << endl;
	cout << "Protein G: " << protein_g << endl;
	cout << "Vitamin A DV: " << vitamin_a_dv << endl;
	cout << "Vitamin C DV: " << vitamin_c_dv << endl;
	cout << "Calcium DV: " << calcium_dv << endl;
	cout << "Eeironee DV: " << eeironee_dv << endl;
	cout << "Saturated Fat DV: " << saturated_fat_dv << endl;
	cout << "Saturated Fat Mg E: " << saturated_fat_mg_e << endl;
	cout << "Chole Sterol DV: " << chole_sterol_dv << endl;
	cout << "Chole Sterol Mg E: " << chole_sterol_mg_e << endl;
	cout << "Food Type: " << food_type << endl;
}

