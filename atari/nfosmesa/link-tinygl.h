/*
 * -- DO NOT EDIT --
 * Generated by dyngl.pl from ./tools/glfuncs.h
 */

#undef NUM_TINYGL_PROCS

GL_PROC("information", tinyglinformation, "void information(void)")
GL_PROC("glBegin", glBegin, "void glBegin(GLenum mode)")
GL_PROC("glClear", glClear, "void glClear(GLbitfield mask)")
GL_PROC("glClearColor", glClearColor, "void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)")
GL_PROC("glColor3f", glColor3f, "void glColor3f(GLfloat red, GLfloat green, GLfloat blue)")
GL_PROC("glDisable", glDisable, "void glDisable(GLenum cap)")
GL_PROC("glEnable", glEnable, "void glEnable(GLenum cap)")
GL_PROC("glEnd", glEnd, "void glEnd(void)")
GL_PROC("glLightfv", glLightfv, "void glLightfv(GLenum light, GLenum pname, const GLfloat *params)")
GL_PROC("glLoadIdentity", glLoadIdentity, "void glLoadIdentity(void)")
GL_PROC("glMaterialfv", glMaterialfv, "void glMaterialfv(GLenum face, GLenum pname, const GLfloat *params)")
GL_PROC("glMatrixMode", glMatrixMode, "void glMatrixMode(GLenum mode)")
GL_PROC("glOrtho", glOrthof, "void glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near_val, GLfloat far_val)")
GL_PROC("glPopMatrix", glPopMatrix, "void glPopMatrix(void)")
GL_PROC("glPushMatrix", glPushMatrix, "void glPushMatrix(void)")
GL_PROC("glRotatef", glRotatef, "void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)")
GL_PROC("glTexEnvi", glTexEnvi, "void glTexEnvi(GLenum target, GLenum pname, GLint param)")
GL_PROC("glTexParameteri", glTexParameteri, "void glTexParameteri(GLenum target, GLenum pname, GLint param)")
GL_PROC("glTranslatef", glTranslatef, "void glTranslatef(GLfloat x, GLfloat y, GLfloat z)")
GL_PROC("glVertex2f", glVertex2f, "void glVertex2f(GLfloat x, GLfloat y)")
GL_PROC("glVertex3f", glVertex3f, "void glVertex3f(GLfloat x, GLfloat y, GLfloat z)")
GL_PROC("OSMesaCreateLDG", OSMesaCreateLDG, "void * OSMesaCreateLDG(GLenum format, GLenum type, GLint width, GLint height)")
GL_PROC("OSMesaDestroyLDG", OSMesaDestroyLDG, "void OSMesaDestroyLDG(void)")
GL_PROC("glArrayElement", glArrayElement, "void glArrayElement(GLint i)")
GL_PROC("glBindTexture", glBindTexture, "void glBindTexture(GLenum target, GLuint texture)")
GL_PROC("glCallList", glCallList, "void glCallList(GLuint list)")
GL_PROC("glClearDepth", glClearDepthf, "void glClearDepthf(GLfloat d)")
GL_PROC("glColor4f", glColor4f, "void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)")
GL_PROC("glColor3fv", glColor3fv, "void glColor3fv(const GLfloat *v)")
GL_PROC("glColor4fv", glColor4fv, "void glColor4fv(const GLfloat *v)")
GL_PROC("glColorMaterial", glColorMaterial, "void glColorMaterial(GLenum face, GLenum mode)")
GL_PROC("glColorPointer", glColorPointer, "void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)")
GL_PROC("glCullFace", glCullFace, "void glCullFace(GLenum mode)")
GL_PROC("glDeleteTextures", glDeleteTextures, "void glDeleteTextures(GLsizei n, const GLuint *textures)")
GL_PROC("glDisableClientState", glDisableClientState, "void glDisableClientState(GLenum array)")
GL_PROC("glEnableClientState", glEnableClientState, "void glEnableClientState(GLenum array)")
GL_PROC("glEndList", glEndList, "void glEndList(void)")
GL_PROC("glEdgeFlag", glEdgeFlag, "void glEdgeFlag(GLboolean32 flag)")
GL_PROC("glFlush", glFlush, "void glFlush(void)")
GL_PROC("glFrontFace", glFrontFace, "void glFrontFace(GLenum mode)")
GL_PROC("glFrustum", glFrustumf, "void glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near_val, GLfloat far_val)")
GL_PROC("glGenLists", glGenLists, "GLuint glGenLists(GLsizei range)")
GL_PROC("glGenTextures", glGenTextures, "void glGenTextures(GLsizei n, GLuint *textures)")
GL_PROC("glGetFloatv", glGetFloatv, "void glGetFloatv(GLenum pname, GLfloat *params)")
GL_PROC("glGetIntegerv", glGetIntegerv, "void glGetIntegerv(GLenum pname, GLint *params)")
GL_PROC("glHint", glHint, "void glHint(GLenum target, GLenum mode)")
GL_PROC("glInitNames", glInitNames, "void glInitNames(void)")
GL_PROC("glIsList", glIsList, "GLboolean glIsList(GLuint list)")
GL_PROC("glLightf", glLightf, "void glLightf(GLenum light, GLenum pname, GLfloat param)")
GL_PROC("glLightModeli", glLightModeli, "void glLightModeli(GLenum pname, GLint param)")
GL_PROC("glLightModelfv", glLightModelfv, "void glLightModelfv(GLenum pname, const GLfloat *params)")
GL_PROC("glLoadMatrixf", glLoadMatrixf, "void glLoadMatrixf(const GLfloat *m)")
GL_PROC("glLoadName", glLoadName, "void glLoadName(GLuint name)")
GL_PROC("glMaterialf", glMaterialf, "void glMaterialf(GLenum face, GLenum pname, GLfloat param)")
GL_PROC("glMultMatrixf", glMultMatrixf, "void glMultMatrixf(const GLfloat *m)")
GL_PROC("glNewList", glNewList, "void glNewList(GLuint list, GLenum mode)")
GL_PROC("glNormal3f", glNormal3f, "void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)")
GL_PROC("glNormal3fv", glNormal3fv, "void glNormal3fv(const GLfloat *v)")
GL_PROC("glNormalPointer", glNormalPointer, "void glNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer)")
GL_PROC("glPixelStorei", glPixelStorei, "void glPixelStorei(GLenum pname, GLint param)")
GL_PROC("glPolygonMode", glPolygonMode, "void glPolygonMode(GLenum face, GLenum mode)")
GL_PROC("glPolygonOffset", glPolygonOffset, "void glPolygonOffset(GLfloat factor, GLfloat units)")
GL_PROC("glPopName", glPopName, "void glPopName(void)")
GL_PROC("glPushName", glPushName, "void glPushName(GLuint name)")
GL_PROC("glRenderMode", glRenderMode, "GLint glRenderMode(GLenum mode)")
GL_PROC("glSelectBuffer", glSelectBuffer, "void glSelectBuffer(GLsizei size, GLuint *buffer)")
GL_PROC("glScalef", glScalef, "void glScalef(GLfloat x, GLfloat y, GLfloat z)")
GL_PROC("glShadeModel", glShadeModel, "void glShadeModel(GLenum mode)")
GL_PROC("glTexCoord2f", glTexCoord2f, "void glTexCoord2f(GLfloat s, GLfloat t)")
GL_PROC("glTexCoord4f", glTexCoord4f, "void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)")
GL_PROC("glTexCoord2fv", glTexCoord2fv, "void glTexCoord2fv(const GLfloat *v)")
GL_PROC("glTexCoordPointer", glTexCoordPointer, "void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)")
GL_PROC("glTexImage2D", glTexImage2D, "void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)")
GL_PROC("glVertex4f", glVertex4f, "void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)")
GL_PROC("glVertex3fv", glVertex3fv, "void glVertex3fv(const GLfloat *v)")
GL_PROC("glVertexPointer", glVertexPointer, "void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)")
GL_PROC("glViewport", glViewport, "void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)")
GL_PROC("swapbuffer", tinyglswapbuffer, "void swapbuffer(void *buffer)")
GL_PROC("max_width", max_width, "GLsizei max_width(void)")
GL_PROC("max_height", max_height, "GLsizei max_height(void)")
GL_PROC("glDeleteLists", glDeleteLists, "void glDeleteLists(GLuint list, GLsizei range)")
GL_PROC("gluLookAt", gluLookAtf, "void gluLookAtf(GLfloat eyeX, GLfloat eyeY, GLfloat eyeZ, GLfloat centerX, GLfloat centerY, GLfloat centerZ, GLfloat upX, GLfloat upY, GLfloat upZ)")
GL_PROC("exception_error", tinyglexception_error, "void exception_error(void (CALLBACK *exception)(GLenum param) )")

#undef GL_PROC
#define NUM_TINYGL_PROCS 83

/* Functions generated: 83 */

