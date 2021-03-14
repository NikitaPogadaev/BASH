header = "index.h"
code = """
bool checker()
{
 return true;
}
"""

fil = open(header, "w")
fil.write(code)
fil.close()
