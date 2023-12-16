#include "Leilao.hpp"

Leilao::Leilao(std::string descricao): descricao(descricao)
{
    
}

const std::vector<Lance>& Leilao::recuperaLances() const
{
    return lances;
}

void Leilao::recebeLance(const Lance& lance)
{
    if (lances.empty() || UsuarioAtualDiferenteDoUsuarioDoUltimoLance(lance)) {
        lances.push_back(lance);
    }
}

bool Leilao::UsuarioAtualDiferenteDoUsuarioDoUltimoLance(const Lance& lance)
{
    return lances.back().recuperaNomeUsuario() != lance.recuperaNomeUsuario();
}
