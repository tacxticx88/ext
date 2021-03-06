
extern zend_class_entry *interop_queue_exception_prioritynotsupportedexception_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_Exception_PriorityNotSupportedException);

PHP_METHOD(Interop_Queue_Exception_PriorityNotSupportedException, providerDoestNotSupportIt);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_exception_prioritynotsupportedexception_providerdoestnotsupportit, 0, 0, Interop\\Queue\\Exception\\PriorityNotSupportedException, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_exception_prioritynotsupportedexception_providerdoestnotsupportit, 0, 0, IS_OBJECT, "Interop\\Queue\\Exception\\PriorityNotSupportedException", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, code)
#endif
	ZEND_ARG_OBJ_INFO(0, previous, Throwable, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_exception_prioritynotsupportedexception_method_entry) {
	PHP_ME(Interop_Queue_Exception_PriorityNotSupportedException, providerDoestNotSupportIt, arginfo_interop_queue_exception_prioritynotsupportedexception_providerdoestnotsupportit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
