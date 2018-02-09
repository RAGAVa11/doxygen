// objective: test that namespace members are put to file docs when enabled
// check: 073__xml__namespace__members__in__file__scope_8h.xml
// config: XML_NAMESPACE_MEMBERS_IN_FILE_SCOPE = YES

namespace Namespace {

/**
@brief A function

Detailed documentation.
*/
void foo();

/** @brief An enum */
enum class Enum {};

}
