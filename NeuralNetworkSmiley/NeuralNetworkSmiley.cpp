// NeuralNetworkSmiley.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include "stdafx.h"
#include "Network.h"

int main()
{
	properties properties;
	network({ 2, 3, 1 }, properties);
    return 0;
}

