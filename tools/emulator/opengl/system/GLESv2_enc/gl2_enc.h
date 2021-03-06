// Generated Code - DO NOT EDIT !!
// generated by 'emugen'

#ifndef GUARD_gl2_encoder_context_t
#define GUARD_gl2_encoder_context_t

#include "IOStream.h"
#include "gl2_client_context.h"


#include <string.h>
#include "glUtils.h"
#include "GL2EncoderUtils.h"

struct gl2_encoder_context_t : public gl2_client_context_t {

	IOStream *m_stream;

	gl2_encoder_context_t(IOStream *stream);


};

extern "C" {
	void glActiveTexture_enc(void *self , GLenum texture);
	void glAttachShader_enc(void *self , GLuint program, GLuint shader);
	void glBindAttribLocation_enc(void *self , GLuint program, GLuint index, const GLchar* name);
	void glBindBuffer_enc(void *self , GLenum target, GLuint buffer);
	void glBindFramebuffer_enc(void *self , GLenum target, GLuint framebuffer);
	void glBindRenderbuffer_enc(void *self , GLenum target, GLuint renderbuffer);
	void glBindTexture_enc(void *self , GLenum target, GLuint texture);
	void glBlendColor_enc(void *self , GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	void glBlendEquation_enc(void *self , GLenum mode);
	void glBlendEquationSeparate_enc(void *self , GLenum modeRGB, GLenum modeAlpha);
	void glBlendFunc_enc(void *self , GLenum sfactor, GLenum dfactor);
	void glBlendFuncSeparate_enc(void *self , GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
	void glBufferData_enc(void *self , GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
	void glBufferSubData_enc(void *self , GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
	GLenum glCheckFramebufferStatus_enc(void *self , GLenum target);
	void glClear_enc(void *self , GLbitfield mask);
	void glClearColor_enc(void *self , GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
	void glClearDepthf_enc(void *self , GLclampf depth);
	void glClearStencil_enc(void *self , GLint s);
	void glColorMask_enc(void *self , GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	void glCompileShader_enc(void *self , GLuint shader);
	void glCompressedTexImage2D_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
	void glCompressedTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
	void glCopyTexImage2D_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	void glCopyTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	GLuint glCreateProgram_enc(void *self );
	GLuint glCreateShader_enc(void *self , GLenum type);
	void glCullFace_enc(void *self , GLenum mode);
	void glDeleteBuffers_enc(void *self , GLsizei n, const GLuint* buffers);
	void glDeleteFramebuffers_enc(void *self , GLsizei n, const GLuint* framebuffers);
	void glDeleteProgram_enc(void *self , GLuint program);
	void glDeleteRenderbuffers_enc(void *self , GLsizei n, const GLuint* renderbuffers);
	void glDeleteShader_enc(void *self , GLuint shader);
	void glDeleteTextures_enc(void *self , GLsizei n, const GLuint* textures);
	void glDepthFunc_enc(void *self , GLenum func);
	void glDepthMask_enc(void *self , GLboolean flag);
	void glDepthRangef_enc(void *self , GLclampf zNear, GLclampf zFar);
	void glDetachShader_enc(void *self , GLuint program, GLuint shader);
	void glDisable_enc(void *self , GLenum cap);
	void glDisableVertexAttribArray_enc(void *self , GLuint index);
	void glDrawArrays_enc(void *self , GLenum mode, GLint first, GLsizei count);
	void glDrawElements_enc(void *self , GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
	void glEnable_enc(void *self , GLenum cap);
	void glEnableVertexAttribArray_enc(void *self , GLuint index);
	void glFinish_enc(void *self );
	void glFlush_enc(void *self );
	void glFramebufferRenderbuffer_enc(void *self , GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	void glFramebufferTexture2D_enc(void *self , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	void glFrontFace_enc(void *self , GLenum mode);
	void glGenBuffers_enc(void *self , GLsizei n, GLuint* buffers);
	void glGenerateMipmap_enc(void *self , GLenum target);
	void glGenFramebuffers_enc(void *self , GLsizei n, GLuint* framebuffers);
	void glGenRenderbuffers_enc(void *self , GLsizei n, GLuint* renderbuffers);
	void glGenTextures_enc(void *self , GLsizei n, GLuint* textures);
	void glGetActiveAttrib_enc(void *self , GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
	void glGetActiveUniform_enc(void *self , GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
	void glGetAttachedShaders_enc(void *self , GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
	int glGetAttribLocation_enc(void *self , GLuint program, const GLchar* name);
	void glGetBooleanv_enc(void *self , GLenum pname, GLboolean* params);
	void glGetBufferParameteriv_enc(void *self , GLenum target, GLenum pname, GLint* params);
	GLenum glGetError_enc(void *self );
	void glGetFloatv_enc(void *self , GLenum pname, GLfloat* params);
	void glGetFramebufferAttachmentParameteriv_enc(void *self , GLenum target, GLenum attachment, GLenum pname, GLint* params);
	void glGetIntegerv_enc(void *self , GLenum pname, GLint* params);
	void glGetProgramiv_enc(void *self , GLuint program, GLenum pname, GLint* params);
	void glGetProgramInfoLog_enc(void *self , GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
	void glGetRenderbufferParameteriv_enc(void *self , GLenum target, GLenum pname, GLint* params);
	void glGetShaderiv_enc(void *self , GLuint shader, GLenum pname, GLint* params);
	void glGetShaderInfoLog_enc(void *self , GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
	void glGetShaderPrecisionFormat_enc(void *self , GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
	void glGetShaderSource_enc(void *self , GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
	const GLubyte* glGetString_enc(void *self , GLenum name);
	void glGetTexParameterfv_enc(void *self , GLenum target, GLenum pname, GLfloat* params);
	void glGetTexParameteriv_enc(void *self , GLenum target, GLenum pname, GLint* params);
	void glGetUniformfv_enc(void *self , GLuint program, GLint location, GLfloat* params);
	void glGetUniformiv_enc(void *self , GLuint program, GLint location, GLint* params);
	int glGetUniformLocation_enc(void *self , GLuint program, const GLchar* name);
	void glGetVertexAttribfv_enc(void *self , GLuint index, GLenum pname, GLfloat* params);
	void glGetVertexAttribiv_enc(void *self , GLuint index, GLenum pname, GLint* params);
	void glGetVertexAttribPointerv_enc(void *self , GLuint index, GLenum pname, GLvoid** pointer);
	void glHint_enc(void *self , GLenum target, GLenum mode);
	GLboolean glIsBuffer_enc(void *self , GLuint buffer);
	GLboolean glIsEnabled_enc(void *self , GLenum cap);
	GLboolean glIsFramebuffer_enc(void *self , GLuint framebuffer);
	GLboolean glIsProgram_enc(void *self , GLuint program);
	GLboolean glIsRenderbuffer_enc(void *self , GLuint renderbuffer);
	GLboolean glIsShader_enc(void *self , GLuint shader);
	GLboolean glIsTexture_enc(void *self , GLuint texture);
	void glLineWidth_enc(void *self , GLfloat width);
	void glLinkProgram_enc(void *self , GLuint program);
	void glPixelStorei_enc(void *self , GLenum pname, GLint param);
	void glPolygonOffset_enc(void *self , GLfloat factor, GLfloat units);
	void glReadPixels_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
	void glReleaseShaderCompiler_enc(void *self );
	void glRenderbufferStorage_enc(void *self , GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	void glSampleCoverage_enc(void *self , GLclampf value, GLboolean invert);
	void glScissor_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height);
	void glShaderBinary_enc(void *self , GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
	void glShaderSource_enc(void *self , GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
	void glStencilFunc_enc(void *self , GLenum func, GLint ref, GLuint mask);
	void glStencilFuncSeparate_enc(void *self , GLenum face, GLenum func, GLint ref, GLuint mask);
	void glStencilMask_enc(void *self , GLuint mask);
	void glStencilMaskSeparate_enc(void *self , GLenum face, GLuint mask);
	void glStencilOp_enc(void *self , GLenum fail, GLenum zfail, GLenum zpass);
	void glStencilOpSeparate_enc(void *self , GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
	void glTexImage2D_enc(void *self , GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
	void glTexParameterf_enc(void *self , GLenum target, GLenum pname, GLfloat param);
	void glTexParameterfv_enc(void *self , GLenum target, GLenum pname, const GLfloat* params);
	void glTexParameteri_enc(void *self , GLenum target, GLenum pname, GLint param);
	void glTexParameteriv_enc(void *self , GLenum target, GLenum pname, const GLint* params);
	void glTexSubImage2D_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
	void glUniform1f_enc(void *self , GLint location, GLfloat x);
	void glUniform1fv_enc(void *self , GLint location, GLsizei count, const GLfloat* v);
	void glUniform1i_enc(void *self , GLint location, GLint x);
	void glUniform1iv_enc(void *self , GLint location, GLsizei count, const GLint* v);
	void glUniform2f_enc(void *self , GLint location, GLfloat x, GLfloat y);
	void glUniform2fv_enc(void *self , GLint location, GLsizei count, const GLfloat* v);
	void glUniform2i_enc(void *self , GLint location, GLint x, GLint y);
	void glUniform2iv_enc(void *self , GLint location, GLsizei count, const GLint* v);
	void glUniform3f_enc(void *self , GLint location, GLfloat x, GLfloat y, GLfloat z);
	void glUniform3fv_enc(void *self , GLint location, GLsizei count, const GLfloat* v);
	void glUniform3i_enc(void *self , GLint location, GLint x, GLint y, GLint z);
	void glUniform3iv_enc(void *self , GLint location, GLsizei count, const GLint* v);
	void glUniform4f_enc(void *self , GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	void glUniform4fv_enc(void *self , GLint location, GLsizei count, const GLfloat* v);
	void glUniform4i_enc(void *self , GLint location, GLint x, GLint y, GLint z, GLint w);
	void glUniform4iv_enc(void *self , GLint location, GLsizei count, const GLint* v);
	void glUniformMatrix2fv_enc(void *self , GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
	void glUniformMatrix3fv_enc(void *self , GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
	void glUniformMatrix4fv_enc(void *self , GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
	void glUseProgram_enc(void *self , GLuint program);
	void glValidateProgram_enc(void *self , GLuint program);
	void glVertexAttrib1f_enc(void *self , GLuint indx, GLfloat x);
	void glVertexAttrib1fv_enc(void *self , GLuint indx, const GLfloat* values);
	void glVertexAttrib2f_enc(void *self , GLuint indx, GLfloat x, GLfloat y);
	void glVertexAttrib2fv_enc(void *self , GLuint indx, const GLfloat* values);
	void glVertexAttrib3f_enc(void *self , GLuint indx, GLfloat x, GLfloat y, GLfloat z);
	void glVertexAttrib3fv_enc(void *self , GLuint indx, const GLfloat* values);
	void glVertexAttrib4f_enc(void *self , GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	void glVertexAttrib4fv_enc(void *self , GLuint indx, const GLfloat* values);
	void glVertexAttribPointer_enc(void *self , GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
	void glViewport_enc(void *self , GLint x, GLint y, GLsizei width, GLsizei height);
	void glEGLImageTargetTexture2DOES_enc(void *self , GLenum target, GLeglImageOES image);
	void glEGLImageTargetRenderbufferStorageOES_enc(void *self , GLenum target, GLeglImageOES image);
	void glGetProgramBinaryOES_enc(void *self , GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, GLvoid* binary);
	void glProgramBinaryOES_enc(void *self , GLuint program, GLenum binaryFormat, const GLvoid* binary, GLint length);
	void* glMapBufferOES_enc(void *self , GLenum target, GLenum access);
	GLboolean glUnmapBufferOES_enc(void *self , GLenum target);
	void glTexImage3DOES_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
	void glTexSubImage3DOES_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
	void glCopyTexSubImage3DOES_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	void glCompressedTexImage3DOES_enc(void *self , GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
	void glCompressedTexSubImage3DOES_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
	void glFramebufferTexture3DOES_enc(void *self , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	void glBindVertexArrayOES_enc(void *self , GLuint array);
	void glDeleteVertexArraysOES_enc(void *self , GLsizei n, const GLuint* arrays);
	void glGenVertexArraysOES_enc(void *self , GLsizei n, GLuint* arrays);
	GLboolean glIsVertexArrayOES_enc(void *self , GLuint array);
	void glDiscardFramebufferEXT_enc(void *self , GLenum target, GLsizei numAttachments, const GLenum* attachments);
	void glMultiDrawArraysEXT_enc(void *self , GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
	void glMultiDrawElementsEXT_enc(void *self , GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);
	void glGetPerfMonitorGroupsAMD_enc(void *self , GLint* numGroups, GLsizei groupsSize, GLuint* groups);
	void glGetPerfMonitorCountersAMD_enc(void *self , GLuint group, GLint* numCounters, GLint* maxActiveCounters, GLsizei counterSize, GLuint* counters);
	void glGetPerfMonitorGroupStringAMD_enc(void *self , GLuint group, GLsizei bufSize, GLsizei* length, GLchar* groupString);
	void glGetPerfMonitorCounterStringAMD_enc(void *self , GLuint group, GLuint counter, GLsizei bufSize, GLsizei* length, GLchar* counterString);
	void glGetPerfMonitorCounterInfoAMD_enc(void *self , GLuint group, GLuint counter, GLenum pname, GLvoid* data);
	void glGenPerfMonitorsAMD_enc(void *self , GLsizei n, GLuint* monitors);
	void glDeletePerfMonitorsAMD_enc(void *self , GLsizei n, GLuint* monitors);
	void glSelectPerfMonitorCountersAMD_enc(void *self , GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint* countersList);
	void glBeginPerfMonitorAMD_enc(void *self , GLuint monitor);
	void glEndPerfMonitorAMD_enc(void *self , GLuint monitor);
	void glGetPerfMonitorCounterDataAMD_enc(void *self , GLuint monitor, GLenum pname, GLsizei dataSize, GLuint* data, GLint* bytesWritten);
	void glRenderbufferStorageMultisampleIMG_enc(void *self , GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	void glFramebufferTexture2DMultisampleIMG_enc(void *self , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
	void glDeleteFencesNV_enc(void *self , GLsizei n, const GLuint* fences);
	void glGenFencesNV_enc(void *self , GLsizei n, GLuint* fences);
	GLboolean glIsFenceNV_enc(void *self , GLuint fence);
	GLboolean glTestFenceNV_enc(void *self , GLuint fence);
	void glGetFenceivNV_enc(void *self , GLuint fence, GLenum pname, GLint* params);
	void glFinishFenceNV_enc(void *self , GLuint fence);
	void glSetFenceNV_enc(void *self , GLuint fence, GLenum condition);
	void glCoverageMaskNV_enc(void *self , GLboolean mask);
	void glCoverageOperationNV_enc(void *self , GLenum operation);
	void glGetDriverControlsQCOM_enc(void *self , GLint* num, GLsizei size, GLuint* driverControls);
	void glGetDriverControlStringQCOM_enc(void *self , GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString);
	void glEnableDriverControlQCOM_enc(void *self , GLuint driverControl);
	void glDisableDriverControlQCOM_enc(void *self , GLuint driverControl);
	void glExtGetTexturesQCOM_enc(void *self , GLuint* textures, GLint maxTextures, GLint* numTextures);
	void glExtGetBuffersQCOM_enc(void *self , GLuint* buffers, GLint maxBuffers, GLint* numBuffers);
	void glExtGetRenderbuffersQCOM_enc(void *self , GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers);
	void glExtGetFramebuffersQCOM_enc(void *self , GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers);
	void glExtGetTexLevelParameterivQCOM_enc(void *self , GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params);
	void glExtTexObjectStateOverrideiQCOM_enc(void *self , GLenum target, GLenum pname, GLint param);
	void glExtGetTexSubImageQCOM_enc(void *self , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLvoid* texels);
	void glExtGetBufferPointervQCOM_enc(void *self , GLenum target, GLvoidptr* params);
	void glExtGetShadersQCOM_enc(void *self , GLuint* shaders, GLint maxShaders, GLint* numShaders);
	void glExtGetProgramsQCOM_enc(void *self , GLuint* programs, GLint maxPrograms, GLint* numPrograms);
	GLboolean glExtIsProgramBinaryQCOM_enc(void *self , GLuint program);
	void glExtGetProgramBinarySourceQCOM_enc(void *self , GLuint program, GLenum shadertype, GLchar* source, GLint* length);
	void glStartTilingQCOM_enc(void *self , GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
	void glEndTilingQCOM_enc(void *self , GLbitfield preserveMask);
	void glVertexAttribPointerData_enc(void *self , GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, void* data, GLuint datalen);
	void glVertexAttribPointerOffset_enc(void *self , GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint offset);
	void glDrawElementsOffset_enc(void *self , GLenum mode, GLsizei count, GLenum type, GLuint offset);
	void glDrawElementsData_enc(void *self , GLenum mode, GLsizei count, GLenum type, void* data, GLuint datalen);
	void glGetCompressedTextureFormats_enc(void *self , int count, GLint* formats);
	void glShaderString_enc(void *self , GLuint shader, const GLchar* string, GLsizei len);
	int glFinishRoundTrip_enc(void *self );
};
#endif