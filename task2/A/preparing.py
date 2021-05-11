header = "index.h"
code = """
bool checker()
{
 return true;
}
"""

f = open(header, "w")
f.write(code)
f.close()
