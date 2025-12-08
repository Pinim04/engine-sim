#ifndef ATG_ENGINE_SIM_LANGUAGE_RULES_H
#define ATG_ENGINE_SIM_LANGUAGE_RULES_H

#include <piranha/include/language_rules.h>

namespace es_script {

    class LanguageRules : public piranha::LanguageRules {
    public:
        LanguageRules();
        ~LanguageRules();

    protected:
        virtual void registerBuiltinNodeTypes();
    };

} /* namespace es_script */

#endif /* ATG_ENGINE_SIM_LANGUAGE_RULES_H */
