//#pragma once
//#include "Modules\\stuff.h"
//#include <memory>

namespace mynamespaceA
{
   namespace mynamespaceB
   {
      template <typename MyParamType>
      class ForceCalculatorNode : public IForceCalcNode<MyParamType>
      {
      private:
         std::shared_ptr<IMassNode<MyParamType>> m_mass_node;
         std::shared_ptr<IAccelerationNode<MyParamType>> m_accel_node;
         std::shared_ptr<IExtraNodeA<MyParamType>> m_a_node;
         std::shared_ptr<IExtraNodeB<MyParamType>> m_b_node;
//       std::shared_ptr<IExtraNodeC<MyParamType>> m_c_node;
//       std::shared_ptr<IExtraNodeD<MyParamType>> m_d_node;
//       std::shared_ptr<IExtraNodeE<MyParamType>> m_e_node;
//       std::shared_ptr<IExtraNodeF<MyParamType>> m_f_node;
//       std::shared_ptr<IExtraNodeG<MyParamType>> m_g_node;
//       std::shared_ptr<IExtraNodeH<MyParamType>> m_h_node;
      public:
         ForceCalculatorNode(
             std::shared_ptr<IMassNode<MyParamType>> mass_node,
             std::shared_ptr<IForceNode<MyParamType>> accel_node,
             std::shared_ptr<IExtraNodeA<MyParamType>> a_node,
             std::shared_ptr<IExtraNodeB<MyParamType>> b_node
//           std::shared_ptr<IExtraNodeC<MyParamType>> c_node,
//           std::shared_ptr<IExtraNodeD<MyParamType>> d_node,
//           std::shared_ptr<IExtraNodeE<MyParamType>> e_node,
//           std::shared_ptr<IExtraNodeF<MyParamType>> f_node,
//           std::shared_ptr<IExtraNodeG<MyParamType>> g_node,
//           std::shared_ptr<IExtraNodeH<MyParamType>> h_node
            ) :
         m_mass_node(mass_node),
         m_accel_node(accel_node),
         m_a_node(a_node),
         m_b_node(b_node)
//       m_c_node(c_node),
//       m_d_node(d_node),
//       m_e_node(e_node),
//       m_f_node(f_node),
//       m_g_node(g_node),
//       m_h_node(h_node)
         {

         }

         double Evaluate(const MyParamType& conditions) override
         {
            auto m = m_mass_node->Evaluate(conditions);
            auto a = m_accel_node->Evaluate(conditions);
            auto ret_val = forceAndStuff(m,a);
            return ret_val;
         }
      };
   }
}
