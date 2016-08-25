#ifndef KEYBOARD_H
#define KEYBOARD_H

  char* translateCode(unsigned int code, int release) {

    if (release == 0) {
      switch (code) {
        case 0x001d: return "(RELEASE CONTROL)"; break;
        case 0x0061: return "(RELEASE CONTROL)"; break;
        case 0x002a: return "(RELEASE SHIFT)"; break;
        case 0x0036: return "(RELEASE SHIFT)"; break;
        case 0x0038: return "(RELEASE ALT)"; break;
        case 0x0064: return "(RELEASE ALT)"; break;
        default: return ""; break;
      }
    } else if (release == 1){
      switch (code) {
        case 0x001e: return "a"; break;
        case 0x0030: return "b"; break;
        case 0x002e: return "c"; break;
        case 0x0020: return "d"; break;
        case 0x0012: return "e"; break;
        case 0x0021: return "f"; break;
        case 0x0022: return "g"; break;
        case 0x0023: return "h"; break;
        case 0x0017: return "i"; break;
        case 0x0024: return "j"; break;
        case 0x0025: return "k"; break;
        case 0x0026: return "l"; break;
        case 0x0032: return "m"; break;
        case 0x0031: return "n"; break;
        case 0x0018: return "o"; break;
        case 0x0019: return "p"; break;
        case 0x0010: return "q"; break;
        case 0x0013: return "r"; break;
        case 0x001f: return "s"; break;
        case 0x0014: return "t"; break;
        case 0x0016: return "u"; break;
        case 0x002f: return "v"; break;
        case 0x0011: return "w"; break;
        case 0x002d: return "x"; break;
        case 0x0015: return "y"; break;
        case 0x002c: return "z"; break;
        case 0x0002: return "1"; break;
        case 0x0003: return "2"; break;
        case 0x0004: return "3"; break;
        case 0x0005: return "4"; break;
        case 0x0006: return "5"; break;
        case 0x0007: return "6"; break;
        case 0x0008: return "7"; break;
        case 0x0009: return "8"; break;
        case 0x000a: return "9"; break;
        case 0x000b: return "0"; break;

        case 0x001c: return "(ENTER)\n"; break;
        case 0x0060: return "(ENTER)\n"; break;
        case 0x0001: return "(ESCAPE)"; break;
        case 0x000e: return "(DELETE)"; break;
        case 0x000f: return "(TAB)\t"; break;
        case 0x0039: return " "; break;
        case 0x003a: return "(CAPS LOCK)"; break;
        case 0x0063: return "(PRINT SCREEN)"; break;
        case 0x001d: return "(CONTROL)"; break;
        case 0x0061: return "(CONTROL)"; break;
        case 0x002a: return "(SHIFT)"; break;
        case 0x0036: return "(SHIFT)"; break;
        case 0x0038: return "(ALT)"; break;
        case 0x0064: return "(ALT)"; break;

        case 0x000c: return "(-_)"; break;
        case 0x000d: return "(=+)"; break;
        case 0x001a: return "([{)"; break;
        case 0x001b: return "(]})"; break;
        case 0x002b: return "(\\|))"; break;
        case 0x0027: return "(;:)"; break;
        case 0x0028: return "('\")"; break;
        case 0x0029: return "(`~)"; break;
        case 0x0033: return "(,<)"; break;
        case 0x0034: return "(.>)"; break;
        case 0x0035: return "(/?)"; break;
        case 0x003b: return "(F1)"; break;
        case 0x003c: return "(F2)"; break;
        case 0x003d: return "(F3)"; break;
        case 0x003e: return "(F4)"; break;
        case 0x003f: return "(F5)"; break;
        case 0x0040: return "(F6)"; break;
        case 0x0041: return "(F7)"; break;
        case 0x0042: return "(F8)"; break;
        case 0x0043: return "(F9)"; break;
        case 0x0044: return "(F10)"; break;
        case 0x0057: return "(F11)"; break;
        case 0x0058: return "(F12)"; break;
        case 0x0062: return "(/)"; break;
        case 0x0037: return "(*)"; break;
        case 0x004a: return "(-)"; break;
        case 0x004e: return "(+)"; break;
        case 0x004f: return "1"; break;
        case 0x0050: return "2"; break;
        case 0x0051: return "3"; break;
        case 0x004b: return "4"; break;
        case 0x004c: return "5"; break;
        case 0x004d: return "6"; break;
        case 0x0047: return "7"; break;
        case 0x0048: return "8"; break;
        case 0x0049: return "9"; break;
        case 0x0052: return "0"; break;
        case 0x0053: return "."; break;
        case 0x0075: return "="; break;
        case 0x00b7: return "F13"; break;
        case 0x00b8: return "F14"; break;
        case 0x00b9: return "F15"; break;
        case 0x00ba: return "F16"; break;
        case 0x00bb: return "F17"; break;
        case 0x00bc: return "F18"; break;
        case 0x00bd: return "F19"; break;
        case 0x00be: return "F20"; break;
        case 0x00bf: return "F21"; break;
        case 0x00c0: return "F22"; break;
        case 0x00c1: return "F23"; break;
        case 0x00c2: return "F24"; break;
        default: return "[NOT DEFINED]"; break;
      }
    }
  }
#endif
