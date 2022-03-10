#ifndef P2RAMMACHINE_RAM_MACHINE_RAM_MACHINE_H_
#define P2RAMMACHINE_RAM_MACHINE_RAM_MACHINE_H_

#include <fstream>

#include "data_memory/data_memory.h"
#include "program_memory/program_memory.h"
#include "tapes/input_tape.h"
#include "tapes/output_tape.h"

namespace daa {

class RamMachine {
 public:
  RamMachine(std::ifstream& instructions_file, std::ifstream& input_file,
             std::ofstream& output_file);

  void Init();

 private:
  DataMemory data_memory_;
  ProgramMemory program_memory_;
  InputTape input_tape_;
  OutputTape output_tape_;
  std::size_t program_counter_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_RAM_MACHINE_RAM_MACHINE_H_
