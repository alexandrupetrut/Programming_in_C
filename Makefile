.PHONY: clean All

All:
	@echo "----------Building project:[ 04_printf - Debug ]----------"
	@cd "04_printf" && "$(MAKE)" -f  "04_printf.mk"
clean:
	@echo "----------Cleaning project:[ 04_printf - Debug ]----------"
	@cd "04_printf" && "$(MAKE)" -f  "04_printf.mk" clean
