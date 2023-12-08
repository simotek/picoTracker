#include "Scale.h"

// Source of scales in original release:
// https://upload.wikimedia.org/wikipedia/commons/thumb/3/35/PitchConstellations.svg/1280px-PitchConstellations.svg.png

//const int numScales = 44;

const char *scaleNames[numScales] = {
  "None (Chromatic)",
  "Acoustic",
  "Adonal malakh",
  "Aeolian mode (minor)",
  "Algerian",
  "Altered",
  "Augmented",
  "Bebop dominant",
  "Blues",
  "Dorian",
  "Double harmonic",
  "Enigmatic",
  "Flamenco",
  "Gypsy",
  "Half diminished",
  "Harmonic major",
  "Harmonic minor",
  "Hirajoshi",
  "Hungarian gypsy",
  "Hungarian minor",
  "Insen",
  "Ionian mode (major)",
  "Istrian",
  "Iwato",
  "Locrian",
  "Lydian augmented",
  "Lydian",
  "Major bebop",
  "Major locran",
  "Major pentatonic",
  "Melodic minor",
  "Melodic minor (asc)",
  "Minor pentatonic",
  "Mixolydian",
  "Neapolitan major",
  "Neapolitan minor",
  "Octatonic",
  "Persian",
  "Phrygian dominant",
  "Phrygian",
  "Prometheus",
  "Tritone",
  "Ukranian",
  "Whole tone"
};

const bool scaleSteps[numScales][12] = {
  {true, true, true, true, true, true, true, true, true, true, true, true},
  {true, false, true, false, true, false, true, true, false, true, false, false},
  {true, false, true, false, true, true, false, true, true, false, true, false},
  {true, false, true, true, false, true, false, true, true, false, true, false},
  {true, false, true, true, false, false, true, true, true, false, false, true},
  {true, true, false, true, true, false, true, false, true, false, true, false},
  {true, false, false, true, true, false, false, true, true, false, false, true},
  {true, false, true, false, true, true, false, true, false, true, true, true},
  {true, false, false, true, false, true, true, true, false, false, true, false},
  {true, false, true, true, false, true, false, true, false, true, true, false},
  {true, true, false, false, true, true, false, true, true, false, false, true},
  {true, true, false, false, true, false, true, false, true, false, true, true},
  {true, true, false, false, true, true, false, true, true, false, false, true},
  {true, false, true, true, false, false, true, true, true, false, true, false},
  {true, false, true, true, false, true, true, false, true, false, true, false},
  {true, false, true, false, true, true, false, true, true, false, false, true},
  {true, false, true, true, false, true, false, true, true, false, false, true},
  {true, false, true, true, false, false, false, true, true, false, false, false},
  {true, false, true, true, false, false, true, true, true, false, false, true},
  {true, false, true, true, false, false, true, true, true, false, false, true},
  {true, true, false, false, false, true, false, true, false, false, true, false},
  {true, false, true, false, true, true, false, true, false, true, false, true},
  {true, true, false, true, true, false, true, true, false, false, false, false},
  {true, true, false, false, false, true, true, false, false, false, true, false},
  {true, true, false, true, false, true, true, false, true, false, true, false},
  {true, false, true, false, true, false, true, false, true, true, false, true},
  {true, false, true, false, true, false, true, true, false, true, false, true},
  {true, false, true, false, true, true, false, true, true, true, false, true},
  {true, false, true, false, true, true, true, false, true, false, true, false},
  {true, false, true, false, true, false, false, true, false, true, false, false},
  {true, false, true, true, false, true, false, true, true, true, true, true},
  {true, false, true, true, false, true, false, true, false, true, false, true},
  {true, false, false, true, false, true, false, true, false, false, true, false},
  {true, false, true, false, true, true, false, true, false, true, true, false},
  {true, true, false, true, false, true, false, true, false, true, false, true},
  {true, true, false, true, false, true, false, true, true, false, false, true},
  {true, false, true, true, false, true, true, false, true, true, false, true},
  {true, true, false, false, true, true, true, false, true, false, false, true},
  {true, true, false, false, true, true, false, true, true, false, true, false},
  {true, true, false, true, false, true, false, true, true, false, true, false},
  {true, false, true, false, true, false, true, false, false, true, true, false},
  {true, true, false, false, true, false, true, true, false, false, true, false},
  {true, false, true, true, false, false, true, true, false, true, true, false},
  {true, false, true, false, true, false, true, false, true, false, true, false}
};

