#include "../tests/catch.hpp"
#include "../src/Usuario.hpp"

TEST_CASE("Usuario deve saber informar seu primeiro nome") {
	Usuario vinicius("Vinicius");

	std::string nome = vinicius.recuperaPrimeiroNome();

	REQUIRE("Vinicius" == nome);
}
