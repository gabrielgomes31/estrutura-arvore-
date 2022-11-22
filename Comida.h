#ifndef COMIDA
#define COMIDA
#include <string>
#include <iostream>
using namespace std;

class Comida
{
public:
	// Construtor
    Comida(string foodAndServing, int calories, int caloriesfromFat, double totalFatG, double totalFatDv, int sodiumG, double sodiumDv, int potassiumG, 
		double potassiumDv, int totalCarboHydrateG, double totalCarboHydrateDv, int dietaryFiberG, double dietaryFiberDv, int sugarsG, int proteinG, double vitaminADv, 
		double vitaminCDv, double calciumDv, double eeironeeDv, double saturatedFatDv, int saturatedFatMgE, double choleSterolDv,
		int choleSterolMgE, string foodType);
	Comida() {};

    // get
	string get_food_and_serving();
	int get_calories();
	int get_caloriesfrom_fat();
	double get_total_fat_g();
	double get_total_fat_dv();
	int get_sodium_g();
	double get_sodium_dv();
	int get_potassium_g();
	double get_potassium_dv();
	int get_total_carbo_hydrate_g();
	double get_total_carbo_hydrate_dv();
	int get_dietary_fiber_g();
	double get_dietary_fiber_dv();
	int get_sugars_g();
	int get_protein_g();
	double get_vitamin_a_dv();
	double get_vitamin_c_dv();
	double get_calcium_dv();
	double get_eeironee_dv();
	double get_saturated_fat_dv();
	int get_saturated_fat_mg_e();
	double get_chole_sterol_dv();
	int get_chole_sterol_mg_e();
	string get_food_type();

	// set
	void set_food_and_serving(string valor);
	void set_calories(int valor);
	void set_caloriesfrom_fat(int valor);
	void set_total_fat_g(double valor);
	void set_total_fat_dv(double valor);
	void set_sodium_g(int valor);
	void set_sodium_dv(double valor);
	void set_potassium_g(int valor);
	void set_potassium_dv(double valor);
	void set_total_carbo_hydrate_g(int valor);
	void set_total_carbo_hydrate_dv(double valor);
	void set_dietary_fiber_g(int valor);
	void set_dietary_fiber_dv(double valor);
	void set_sugars_g(int valor);
	void set_protein_g(int valor);
	void set_vitamin_a_dv(double valor);
	void set_vitamin_c_dv(double valor);
	void set_calcium_dv(double valor);
	void set_eeironee_dv(double valor);
	void set_saturated_fat_dv(double valor);
	void set_saturated_fat_mg_e(int valor);
	void set_chole_sterol_dv(double valor);
	void set_chole_sterol_mg_e(int valor);
	void set_food_type(string valor);

	void tabela_nutricional();
private:
	string food_and_serving;
	int calories;
	int caloriesfrom_fat;
	double total_fat_g;
	double total_fat_dv;
	int sodium_g;
	double sodium_dv;
	int potassium_g;
	double potassium_dv;
	int total_carbo_hydrate_g;
	double total_carbo_hydrate_dv;
	int dietary_fiber_g;
	double dietary_fiber_dv;
	int sugars_g;
	int protein_g;
	double vitamin_a_dv;
	double vitamin_c_dv;
	double calcium_dv;
	double eeironee_dv;
	double saturated_fat_dv;
	int saturated_fat_mg_e;
	double chole_sterol_dv;
	int chole_sterol_mg_e;
	string food_type;
};

#endif