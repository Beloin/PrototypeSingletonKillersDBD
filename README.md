# Ideia

## Criação dinâmica de Killers do DBD:

Prototype sendo a base de cada um e Singleton para ter um gerenciador de Killers?

Criação de Killers dinamicamente a partir de presets.

Prototype:
    clone(): Prototype;

Killer : Prototype
    public:
        speed: float (x.x)
        name: string
        weapon: Weapon

Weapon : Prototype
...

KillerStorage:
private:
    allKillers: Array<Killer>

public:
    getAllKillers() : Array<Killer>
    getKillerByName(string name): Killer
    addNewKiller(Killer killer): void


Isso permite a geração de "Novos Assasinos" em Runtime a pártir de assassinos Base.