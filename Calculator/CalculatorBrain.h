//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Matt Lane on 10/1/12.
//
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
