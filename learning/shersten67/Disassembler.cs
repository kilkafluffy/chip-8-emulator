using System;

class Disassembler
{
  
    public static string Disassemble(ushort opcode)
    {
        if (opcode == 0x00E0)
        {
            return "CLS";
        }

        ushort commandType = (ushort)(opcode & 0xF000);

        switch (commandType)
        {
            case 0x1000:
                {
                    ushort NNN = (ushort)(opcode & 0x0FFF);
                    return $"JP 0x{NNN:X3}"; 
                }
            case 0x6000:
                {
                    int X = (opcode & 0x0F00) >> 8;
                    int NN = opcode & 0x00FF;
                    return $"LD V{X:X}, 0x{NN:X2}";
                }
            case 0x7000:
                {
                    int X = (opcode & 0x0F00) >> 8;
                    int NN = opcode & 0x00FF;
                    return $"ADD V{X:X}, 0x{NN:X2}";
                }
            case 0xA000:
                { 
                    int NNN = opcode & 0x0FFF;
                    return $"ADD I, 0x{NNN:X2}";
                }
            default:
                {
                    return "UNKNOWN";
                }

        }
    }
}