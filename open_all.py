import glob
files = glob.glob('**/**.cbp', recursive=True)

f = open("prog_c.workspace", "w")
f.write("""\
<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_workspace_file>
\t<Workspace title="Workspace">
""")

for name in files:
    f.write('\t\t<Project filename="')
    f.write(name)
    f.write('" />\n')

f.write("""\
\t</Workspace>
</CodeBlocks_workspace_file>

""")
