#include "pulsador_v2.h"

Pulsador_estado Pulsador::estado()
{
    if (presionado_){
	if (digitalRead(pin) == LOW){
	    // presionado_ = true; <-- esto sobra, ¿por qué?
	    return Pulsador_estado::sigue_pulsado;
	}

	else{
	    presionado_ = false;
	    return Pulsador_estado::recien_soltado;
	}
    }

    else { // este else se puede comentar. Aquí llega solo si presionado_ == false
	if (digitalRead(pin) == LOW){
	    presionado_ = true; 
	    return Pulsador_estado::recien_pulsado;
	}

	else{
	    // presionado_ = false; <-- ¿por qué comento este?
	    return Pulsador_estado::sigue_soltado;
	}
	
    }
}
