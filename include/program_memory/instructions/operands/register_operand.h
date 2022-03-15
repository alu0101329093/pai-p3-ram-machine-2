#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_OPERAND_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_OPERAND_H_

#include "program_memory/instructions/operands/operand.h"

namespace daa {

class RegisterOperand : public Operand {
 public:
  RegisterOperand(std::size_t index, Operand* index_operand = nullptr);
  ~RegisterOperand();

  int& GetValue(DataMemory& data_memory, std::size_t current_line) override;

  int GetIndex(DataMemory& data_memory);

 private:
  int index_;
  Operand* index_operand_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_OPERAND_H_
