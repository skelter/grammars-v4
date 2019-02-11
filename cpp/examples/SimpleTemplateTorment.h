namespace mynamespaceA
{
   namespace mynamespaceB
   {

      template <typename MyParamType>
      class ForceCalculatorNode : public IForceCalcNode<MyParamType>
      {
      private:
         std::shared_ptr<IMassNode<MyParamType>> m_mass_node;
      public:
         ForceCalculatorNode(
             std::shared_ptr<IMassNode<MyParamType>> mass_node
            ) :
            m_mass_node(mass_node)
         {

         }

         double Evaluate(const MyParamType& conditions) override
         {
            return m_mass_node->Evaluate(conditions);
         }
      };
   }
}
