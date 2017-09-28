.PHONY: clean All

All:
	@echo "----------Building project:[ whileDemo - Debug ]----------"
	@cd "whileDemo" && "$(MAKE)" -f  "whileDemo.mk"
clean:
	@echo "----------Cleaning project:[ whileDemo - Debug ]----------"
	@cd "whileDemo" && "$(MAKE)" -f  "whileDemo.mk" clean
