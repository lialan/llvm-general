#ifndef __LLVM_GENERAL_INTERNAL_FFI__ATTRIBUTES__H__
#define __LLVM_GENERAL_INTERNAL_FFI__ATTRIBUTES__H__

#define LLVM_GENERAL_FOR_EACH_ATTRIBUTE_KIND(macro)	\
	macro(None,F,F,F)                                 \
	macro(Alignment,T,F,F)                            \
	macro(AlwaysInline,F,F,T)                         \
	macro(Builtin,F,F,T)                              \
	macro(ByVal,T,F,F)                                \
	macro(InAlloca,T,F,F)                             \
	macro(Cold,F,F,T)                                 \
	macro(InlineHint,F,F,T)                           \
	macro(InReg,T,T,F)                                \
	macro(JumpTable,F,F,T)                            \
	macro(MinSize,F,F,T)                              \
	macro(Naked,F,F,T)                                \
	macro(Nest,T,F,F)                                 \
	macro(NoAlias,T,T,F)                              \
	macro(NoBuiltin,F,F,T)                            \
	macro(NoCapture,T,F,F)                            \
	macro(NoDuplicate,F,F,T)                          \
	macro(NoImplicitFloat,F,F,T)                      \
	macro(NoInline,F,F,T)                             \
	macro(NonLazyBind,F,F,T)                          \
	macro(NonNull,T,T,F)                              \
	macro(Dereferenceable,T,T,F)                      \
	macro(NoRedZone,F,F,T)                            \
	macro(NoReturn,F,F,T)                             \
	macro(NoUnwind,F,F,T)                             \
	macro(OptimizeForSize,F,F,T)                      \
	macro(OptimizeNone,F,F,T)                         \
	macro(ReadNone,T,F,T)                             \
	macro(ReadOnly,T,F,T)                             \
	macro(Returned,T,F,F)                             \
	macro(ReturnsTwice,F,F,T)                         \
	macro(SExt,T,T,F)                                 \
	macro(StackAlignment,F,F,T)                       \
	macro(StackProtect,F,F,T)                         \
	macro(StackProtectReq,F,F,T)                      \
	macro(StackProtectStrong,F,F,T)                   \
	macro(StructRet,T,F,F)                            \
	macro(SanitizeAddress,F,F,T)                      \
	macro(SanitizeThread,F,F,T)                       \
	macro(SanitizeMemory,F,F,T)                       \
	macro(UWTable,F,F,T)                              \
	macro(ZExt,T,T,F)                                 \
	macro(EndAttrKinds,F,F,F)

typedef enum {
#define ENUM_CASE(x,p,r,f) LLVM_General_AttributeKind_ ## x,
LLVM_GENERAL_FOR_EACH_ATTRIBUTE_KIND(ENUM_CASE)
#undef ENUM_CASE
} LLVM_General_AttributeKind;

#endif
