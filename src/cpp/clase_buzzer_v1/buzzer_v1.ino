#include "buzzer_v1.h"

void Buzzer::toca_do(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(do_1);
        break; case Octava::small       : toca(do0);
        break; case Octava::one_line    : toca(do1);
        break; case Octava::two_line    : toca(do2);
        break; case Octava::three_line  : toca(do3);
    }
}

void Buzzer::toca_do_sostenido(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(doS_1);
        break; case Octava::small       : toca(doS0);
        break; case Octava::one_line    : toca(doS1);
        break; case Octava::two_line    : toca(doS2);
        break; case Octava::three_line  : toca(doS3);
    }
}


void Buzzer::toca_re(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(re_1);
        break; case Octava::small       : toca(re0);
        break; case Octava::one_line    : toca(re1);
        break; case Octava::two_line    : toca(re2);
        break; case Octava::three_line  : toca(re3);
    }
}


void Buzzer::toca_re_sostenido(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(reS_1);
        break; case Octava::small       : toca(reS0);
        break; case Octava::one_line    : toca(reS1);
        break; case Octava::two_line    : toca(reS2);
        break; case Octava::three_line  : toca(reS3);
    }
}


void Buzzer::toca_mi(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(mi_1);
        break; case Octava::small       : toca(mi0);
        break; case Octava::one_line    : toca(mi1);
        break; case Octava::two_line    : toca(mi2);
        break; case Octava::three_line  : toca(mi3);
    }
}


void Buzzer::toca_fa(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(fa_1);
        break; case Octava::small       : toca(fa0);
        break; case Octava::one_line    : toca(fa1);
        break; case Octava::two_line    : toca(fa2);
        break; case Octava::three_line  : toca(fa3);
    }
}


void Buzzer::toca_fa_sostenido(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(faS_1);
        break; case Octava::small       : toca(faS0);
        break; case Octava::one_line    : toca(faS1);
        break; case Octava::two_line    : toca(faS2);
        break; case Octava::three_line  : toca(faS3);
    }
}


void Buzzer::toca_sol(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(sol_1);
        break; case Octava::small       : toca(sol0);
        break; case Octava::one_line    : toca(sol1);
        break; case Octava::two_line    : toca(sol2);
        break; case Octava::three_line  : toca(sol3);
    }
}


void Buzzer::toca_sol_sostenido(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(solS_1);
        break; case Octava::small       : toca(solS0);
        break; case Octava::one_line    : toca(solS1);
        break; case Octava::two_line    : toca(solS2);
        break; case Octava::three_line  : toca(solS3);
    }
}


void Buzzer::toca_la(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(la_1);
        break; case Octava::small       : toca(la0);
        break; case Octava::one_line    : toca(la1);
        break; case Octava::two_line    : toca(la2);
        break; case Octava::three_line  : toca(la3);
    }
}

void Buzzer::toca_la_sostenido(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(laS_1);
        break; case Octava::small       : toca(laS0);
        break; case Octava::one_line    : toca(laS1);
        break; case Octava::two_line    : toca(laS2);
        break; case Octava::three_line  : toca(laS3);
    }
}


void Buzzer::toca_si(Octava octava)
{
    switch(octava){
        break; case Octava::great       : toca(si_1);
        break; case Octava::small       : toca(si0);
        break; case Octava::one_line    : toca(si1);
        break; case Octava::two_line    : toca(si2);
        break; case Octava::three_line  : toca(si3);
    }
}
