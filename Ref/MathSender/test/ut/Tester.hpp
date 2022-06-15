// ======================================================================
// \title  MathSender/test/ut/Tester.hpp
// \author alexpletta
// \brief  hpp file for MathSender test harness implementation class
// ======================================================================

#ifndef TESTER_HPP
#define TESTER_HPP

#include "GTestBase.hpp"
// #include "Ref/MathSender/MathSenderComponentImpl.hpp" // fatal error: 'Ref/MathSender/MathSenderComponentImpl.hpp' file not found --> file renamed per 4.3 in fprime math component tutorial
#include "Ref/MathSender/MathSender.hpp"

namespace Ref {

  class Tester :
    public MathSenderGTestBase
  {

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

    public:

      //! Construct object Tester
      //!
      Tester();

      //! Destroy object Tester
      //!
      ~Tester();

    public:

      // ----------------------------------------------------------------------
      // Tests
      // ----------------------------------------------------------------------

      //! To do
      //!
      void toDo();

      //! Test an ADD command
      void testAddCommand();

      //! Test an SUB command
      void testSubCommand();

      //! Test an MUL command
      void testMulCommand();

      //! Test an DIV command
      void testDivCommand();

      //! Test receipt of a result
      void testResult();

    private:

      // ----------------------------------------------------------------------
      // Handlers for typed from ports
      // ----------------------------------------------------------------------

      //! Handler for from_mathOpOut
      //!
      void from_mathOpOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          F32 val1, /*!< 
      The first operand
      */
          const Ref::MathOp &op, /*!< 
      The operation
      */
          F32 val2 /*!< 
      The second operation
      */
      );

    private:

      // ----------------------------------------------------------------------
      // Helper methods
      // ----------------------------------------------------------------------

      //! Connect ports
      //!
      void connectPorts();

      //! Initialize components
      //!
      void initComponents();

      //! Test a DO_MATH command
      void testDoMath(MathOp op);

    private:

      // ----------------------------------------------------------------------
      // Variables
      // ----------------------------------------------------------------------

      //! The component under test
      //!
      // MathSenderComponentImpl component; // error: unknown type name 'MathSenderComponentImpl'; did you mean 'MathSenderComponentBase'?
      // MathSenderComponentBase component; // error: field type 'Ref::MathSenderComponentBase' is an abstract class
      MathSender component;
  };

} // end namespace Ref

#endif
