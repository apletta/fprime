// ======================================================================
// \title  MathReceiver/test/ut/Tester.hpp
// \author alexpletta
// \brief  hpp file for MathReceiver test harness implementation class
// ======================================================================

#ifndef TESTER_HPP
#define TESTER_HPP

#include "GTestBase.hpp"
#include "Ref/MathReceiver/MathReceiver.hpp"

namespace Ref {

  class Tester :
    public MathReceiverGTestBase
  {
    private:
      
      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      enum class ThrottleState {
        THROTTLED,
        NOT_THROTTLED
      };


    public:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

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

      //! Test add command
      void testAdd();

      //! Test subtract command
      void testSub();

      //! Test multiply command
      void testMul();

      //! Test divide command
      void testDiv();

      //! Test throttle
      void testThrottle();

    private:

      // ----------------------------------------------------------------------
      // Handlers for typed from ports
      // ----------------------------------------------------------------------

      //! Handler for from_mathResultOut
      //!
      void from_mathResultOut_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          F32 result /*!< 
      The result of the operation
      */
      );

    private:

      // ----------------------------------------------------------------------
      // Helper methods
      // ----------------------------------------------------------------------

      //! Pick a random F32 value within a range
      F32 pickF32Value();

      //! Set the math operation scaling factor
      void setFactor(
        F32 factor, 
        ThrottleState throttleState
      );

      //! Compute a result
      F32 computeResult(
        F32 val1,
        MathOp op,
        F32 val2,
        F32 factor
      );

      //! Perform a math operation
      void doMathOp(
        MathOp op,
        F32 factor
      );

      //! Connect ports
      //!
      void connectPorts();

      //! Initialize components
      //!
      void initComponents();

    private:

      // ----------------------------------------------------------------------
      // Variables
      // ----------------------------------------------------------------------

      //! The component under test
      //!
      MathReceiver component;

  };

} // end namespace Ref

#endif
